
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {struct acpi_thermal* devdata; } ;
struct acpi_thermal {int tz_enabled; } ;
typedef enum thermal_device_mode { ____Placeholder_thermal_device_mode } thermal_device_mode ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct acpi_thermal*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct thermal_zone_device *VAR_6,
    enum thermal_device_mode VAR_7)
{
 struct acpi_thermal *VAR_8 = VAR_6->devdata;
 int VAR_9;

 if (!VAR_8)
  return -VAR_1;




 if (VAR_7 == VAR_3)
  VAR_9 = 1;
 else if (VAR_7 == VAR_2)
  VAR_9 = 0;
 else
  return -VAR_1;

 if (VAR_9 != VAR_8->tz_enabled) {
  VAR_8->tz_enabled = VAR_9;
  FUNC_0((VAR_0,
   "%s ACPI thermal control\n",
   VAR_8->tz_enabled ? VAR_5 : VAR_4));
  FUNC_1(VAR_8);
 }
 return 0;
}
