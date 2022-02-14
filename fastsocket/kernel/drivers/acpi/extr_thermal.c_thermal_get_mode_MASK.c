
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {struct acpi_thermal* devdata; } ;
struct acpi_thermal {scalar_t__ tz_enabled; } ;
typedef enum thermal_device_mode { ____Placeholder_thermal_device_mode } thermal_device_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct thermal_zone_device *VAR_3,
    enum thermal_device_mode *VAR_4)
{
 struct acpi_thermal *VAR_5 = VAR_3->devdata;

 if (!VAR_5)
  return -VAR_0;

 *VAR_4 = VAR_5->tz_enabled ? VAR_2 :
  VAR_1;

 return 0;
}
