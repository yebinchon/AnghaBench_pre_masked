
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int dummy; } ;
struct acpi_battery {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_device*) ;
 struct acpi_battery* FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (struct acpi_battery*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct acpi_battery*) ;

__attribute__((used)) static int FUNC_5(struct acpi_device *VAR_1, int VAR_2)
{
 struct acpi_battery *VAR_3 = ((void*)0);

 if (!VAR_1 || !FUNC_1(VAR_1))
  return -VAR_0;
 VAR_3 = FUNC_1(VAR_1);






 FUNC_3(&VAR_3->lock);
 FUNC_2(VAR_3);
 return 0;
}
