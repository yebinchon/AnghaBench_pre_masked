
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {TYPE_1__* ops; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* set_mode ) (struct thermal_zone_device*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,char*,int) ;
 int FUNC_1 (struct thermal_zone_device*,int ) ;
 int FUNC_2 (struct thermal_zone_device*,int ) ;
 struct thermal_zone_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_4, struct device_attribute *VAR_5,
    const char *VAR_6, size_t VAR_7)
{
 struct thermal_zone_device *VAR_8 = FUNC_3(VAR_4);
 int VAR_9;

 if (!VAR_8->ops->set_mode)
  return -VAR_1;

 if (!FUNC_0(VAR_6, "enabled", sizeof("enabled")))
  VAR_9 = VAR_8->ops->set_mode(VAR_8, VAR_3);
 else if (!FUNC_0(VAR_6, "disabled", sizeof("disabled")))
  VAR_9 = VAR_8->ops->set_mode(VAR_8, VAR_2);
 else
  VAR_9 = -VAR_0;

 if (VAR_9)
  return VAR_9;

 return VAR_7;
}
