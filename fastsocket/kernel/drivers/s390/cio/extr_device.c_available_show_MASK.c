
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct subchannel {int lpm; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
struct ccw_device {TYPE_1__* private; } ;
typedef int ssize_t ;
struct TYPE_2__ {int state; } ;






 scalar_t__ FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (char*,char*) ;
 struct ccw_device* FUNC_2 (struct device*) ;
 struct subchannel* FUNC_3 (int ) ;

__attribute__((used)) static ssize_t
FUNC_4 (struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct ccw_device *VAR_3 = FUNC_2(VAR_0);
 struct subchannel *VAR_4;

 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_2, "no device\n");
 switch (VAR_3->private->state) {
 case 131:
  return FUNC_1(VAR_2, "boxed\n");
 case 130:
 case 129:
 case 128:
  VAR_4 = FUNC_3(VAR_0->parent);
  if (!VAR_4->lpm)
   return FUNC_1(VAR_2, "no path\n");
  else
   return FUNC_1(VAR_2, "no device\n");
 default:

  return FUNC_1(VAR_2, "good\n");
 }
}
