
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_pm_voltage {int vid_mask; } ;
struct nouveau_gpio {int (* set ) (struct nouveau_gpio*,int ,int ,int,int) ;} ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {struct nouveau_pm_voltage voltage; } ;


 struct nouveau_device* FUNC_0 (struct drm_device*) ;
 struct nouveau_gpio* FUNC_1 (struct nouveau_device*) ;
 TYPE_1__* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*,int) ;
 int VAR_0 ;
 int FUNC_4 (struct nouveau_gpio*,int ,int ,int,int) ;
 int * VAR_1 ;

int
FUNC_5(struct drm_device *VAR_2, int VAR_3)
{
 struct nouveau_device *VAR_4 = FUNC_0(VAR_2);
 struct nouveau_gpio *VAR_5 = FUNC_1(VAR_4);
 struct nouveau_pm_voltage *VAR_6 = &FUNC_2(VAR_2)->voltage;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_3(VAR_2, VAR_3);
 if (VAR_7 < 0)
  return VAR_7;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  if (!(VAR_6->vid_mask & (1 << VAR_8)))
   continue;

  VAR_5->set(VAR_5, 0, VAR_1[VAR_8], 0xff, !!(VAR_7 & (1 << VAR_8)));
 }

 return 0;
}
