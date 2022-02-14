
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_cooling_device {TYPE_1__* ops; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* get_max_state ) (struct thermal_cooling_device*,unsigned long*) ;} ;


 int FUNC_0 (char*,char*,unsigned long) ;
 int FUNC_1 (struct thermal_cooling_device*,unsigned long*) ;
 struct thermal_cooling_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0,
          struct device_attribute *VAR_1, char *VAR_2)
{
 struct thermal_cooling_device *VAR_3 = FUNC_2(VAR_0);
 unsigned long VAR_4;
 int VAR_5;

 VAR_5 = VAR_3->ops->get_max_state(VAR_3, &VAR_4);
 if (VAR_5)
  return VAR_5;
 return FUNC_0(VAR_2, "%ld\n", VAR_4);
}
