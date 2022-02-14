
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ name; } ;
struct rc_dev {scalar_t__ driver_name; TYPE_1__ rc_map; } ;
struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (char*,scalar_t__) ;
 struct rc_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, struct kobj_uevent_env *VAR_1)
{
 struct rc_dev *VAR_2 = FUNC_1(VAR_0);

 if (VAR_2->rc_map.name)
  FUNC_0("NAME=%s", VAR_2->rc_map.name);
 if (VAR_2->driver_name)
  FUNC_0("DRV_NAME=%s", VAR_2->driver_name);

 return 0;
}
