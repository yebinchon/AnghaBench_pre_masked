
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_power_meter_resource {int hwmon_dev; } ;
struct acpi_device {int dummy; } ;


 int VAR_0 ;
 struct acpi_power_meter_resource* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct acpi_power_meter_resource*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct acpi_power_meter_resource*) ;
 int FUNC_4 (struct acpi_power_meter_resource*) ;

__attribute__((used)) static int FUNC_5(struct acpi_device *VAR_1, int VAR_2)
{
 struct acpi_power_meter_resource *VAR_3;

 if (!VAR_1 || !FUNC_0(VAR_1))
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_1);
 FUNC_2(VAR_3->hwmon_dev);

 FUNC_1(VAR_3);
 FUNC_4(VAR_3);

 FUNC_3(VAR_3);
 return 0;
}
