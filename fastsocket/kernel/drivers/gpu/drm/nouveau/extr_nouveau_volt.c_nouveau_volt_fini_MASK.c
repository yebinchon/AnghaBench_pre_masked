
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_pm_voltage {int level; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {struct nouveau_pm_voltage voltage; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct drm_device*) ;

void
FUNC_2(struct drm_device *VAR_0)
{
 struct nouveau_pm_voltage *VAR_1 = &FUNC_1(VAR_0)->voltage;

 FUNC_0(VAR_1->level);
}
