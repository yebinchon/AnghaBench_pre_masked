
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int dummy; } ;
struct acpi_battery {scalar_t__ update_time; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_battery*,int) ;
 struct acpi_battery* FUNC_1 (struct acpi_device*) ;

__attribute__((used)) static int FUNC_2(struct acpi_device *VAR_1)
{
 struct acpi_battery *VAR_2;
 if (!VAR_1)
  return -VAR_0;
 VAR_2 = FUNC_1(VAR_1);
 VAR_2->update_time = 0;
 FUNC_0(VAR_2, 1);
 return 0;
}
