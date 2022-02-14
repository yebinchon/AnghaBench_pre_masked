
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int name; } ;
typedef TYPE_1__ ide_drive_t ;


 int FUNC_0 (struct kobj_uevent_env*,char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct kobj_uevent_env *VAR_1)
{
 ide_drive_t *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(VAR_1, "MEDIA=%s", FUNC_1(VAR_2));
 FUNC_0(VAR_1, "DRIVENAME=%s", VAR_2->name);
 FUNC_0(VAR_1, "MODALIAS=ide:m-%s", FUNC_1(VAR_2));
 return 0;
}
