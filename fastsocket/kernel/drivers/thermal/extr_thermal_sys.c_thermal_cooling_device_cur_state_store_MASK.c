
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_cooling_device {TYPE_1__* ops; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* set_cur_state ) (struct thermal_cooling_device*,unsigned long) ;} ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*,unsigned long*) ;
 int FUNC_1 (struct thermal_cooling_device*,unsigned long) ;
 struct thermal_cooling_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_1,
           struct device_attribute *VAR_2,
           const char *VAR_3, size_t VAR_4)
{
 struct thermal_cooling_device *VAR_5 = FUNC_2(VAR_1);
 unsigned long VAR_6;
 int VAR_7;

 if (!FUNC_0(VAR_3, "%ld\n", &VAR_6))
  return -VAR_0;

 if (VAR_6 < 0)
  return -VAR_0;

 VAR_7 = VAR_5->ops->set_cur_state(VAR_5, VAR_6);
 if (VAR_7)
  return VAR_7;
 return VAR_4;
}
