
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int handle; } ;
struct acpi_bus_ops {int acpi_op_start; } ;
typedef int ops ;


 int VAR_0 ;
 int FUNC_0 (int ,struct acpi_bus_ops*,int *) ;
 int FUNC_1 (struct acpi_bus_ops*,int ,int) ;

int FUNC_2(struct acpi_device *VAR_1)
{
 struct acpi_bus_ops VAR_2;

 if (!VAR_1)
  return -VAR_0;

 FUNC_1(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.acpi_op_start = 1;

 return FUNC_0(VAR_1->handle, &VAR_2, ((void*)0));
}
