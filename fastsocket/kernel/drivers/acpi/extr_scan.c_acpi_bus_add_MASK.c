
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int dummy; } ;
struct acpi_bus_ops {int acpi_op_add; } ;
typedef int ops ;
typedef int acpi_handle ;


 int FUNC_0 (int ,struct acpi_bus_ops*,struct acpi_device**) ;
 int FUNC_1 (struct acpi_bus_ops*,int ,int) ;

int
FUNC_2(struct acpi_device **VAR_0,
      struct acpi_device *VAR_1, acpi_handle VAR_2, int VAR_3)
{
 struct acpi_bus_ops VAR_4;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.acpi_op_add = 1;

 return FUNC_0(VAR_2, &VAR_4, VAR_0);
}
