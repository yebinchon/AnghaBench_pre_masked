
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {TYPE_1__* ops; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum thermal_device_mode { ____Placeholder_thermal_device_mode } thermal_device_mode ;
struct TYPE_2__ {int (* get_mode ) (struct thermal_zone_device*,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (struct thermal_zone_device*,int*) ;
 struct thermal_zone_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_2, struct device_attribute *VAR_3, char *VAR_4)
{
 struct thermal_zone_device *VAR_5 = FUNC_2(VAR_2);
 enum thermal_device_mode VAR_6;
 int VAR_7;

 if (!VAR_5->ops->get_mode)
  return -VAR_0;

 VAR_7 = VAR_5->ops->get_mode(VAR_5, &VAR_6);
 if (VAR_7)
  return VAR_7;

 return FUNC_0(VAR_4, "%s\n", VAR_6 == VAR_1 ? "enabled"
         : "disabled");
}
