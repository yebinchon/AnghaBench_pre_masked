
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int dummy; } ;
typedef enum thermal_device_mode { ____Placeholder_thermal_device_mode } thermal_device_mode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_1(struct thermal_zone_device *VAR_4,
       enum thermal_device_mode *VAR_5)
{
 if (VAR_3)
  FUNC_0("kernel mode fan control %d\n", VAR_2);

 *VAR_5 = (VAR_2) ? VAR_1
        : VAR_0;

 return 0;
}
