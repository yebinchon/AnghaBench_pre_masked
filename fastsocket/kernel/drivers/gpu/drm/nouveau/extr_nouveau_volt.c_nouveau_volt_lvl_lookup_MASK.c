
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nouveau_pm_voltage {int nr_level; TYPE_1__* level; } ;
struct drm_device {int dummy; } ;
struct TYPE_4__ {struct nouveau_pm_voltage voltage; } ;
struct TYPE_3__ {int vid; int voltage; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct drm_device*) ;

int
FUNC_1(struct drm_device *VAR_1, int VAR_2)
{
 struct nouveau_pm_voltage *VAR_3 = &FUNC_0(VAR_1)->voltage;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->nr_level; VAR_4++) {
  if (VAR_3->level[VAR_4].vid == VAR_2)
   return VAR_3->level[VAR_4].voltage;
 }

 return -VAR_0;
}
