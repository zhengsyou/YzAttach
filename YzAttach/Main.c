#include <ntddk.h>

void DriverUnload(PDRIVER_OBJECT pDriver)
{
	DbgPrint("end");
}

NTSTATUS DriverEntry(PDRIVER_OBJECT pDriver, PUNICODE_STRING pRegisterPath)
{
	DbgPrint("xxx");
	pDriver->DriverUnload = DriverUnload;

	return STATUS_SUCCESS;
}