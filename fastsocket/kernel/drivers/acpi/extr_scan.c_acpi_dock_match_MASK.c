
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int handle; } ;
typedef int acpi_handle ;


 int FUNC_0 (int ,char*,int *) ;

__attribute__((used)) static int FUNC_1(struct acpi_device *VAR_0)
{
 acpi_handle VAR_1;
 return FUNC_0(VAR_0->handle, "_DCK", &VAR_1);
}
