
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {TYPE_1__* ops; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* get_temp ) (struct thermal_zone_device*,long*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,long) ;
 int FUNC_1 (struct thermal_zone_device*,long*) ;
 struct thermal_zone_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 struct thermal_zone_device *VAR_4 = FUNC_2(VAR_1);
 long VAR_5;
 int VAR_6;

 if (!VAR_4->ops->get_temp)
  return -VAR_0;

 VAR_6 = VAR_4->ops->get_temp(VAR_4, &VAR_5);

 if (VAR_6)
  return VAR_6;

 return FUNC_0(VAR_3, "%ld\n", VAR_5);
}
