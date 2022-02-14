
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_sbs {int dummy; } ;
struct acpi_device {struct acpi_sbs* driver_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_sbs*) ;

__attribute__((used)) static int FUNC_1(struct acpi_device *VAR_1)
{
 struct acpi_sbs *VAR_2;
 if (!VAR_1)
  return -VAR_0;
 VAR_2 = VAR_1->driver_data;
 FUNC_0(VAR_2);
 return 0;
}
