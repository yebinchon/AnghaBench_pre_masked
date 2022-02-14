
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nouveau_pm_voltage {int vid_mask; } ;
struct nouveau_gpio {int (* get ) (struct nouveau_gpio*,int ,int ,int) ;} ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {struct nouveau_pm_voltage voltage; } ;


 struct nouveau_device* FUNC_0 (struct drm_device*) ;
 struct nouveau_gpio* FUNC_1 (struct nouveau_device*) ;
 TYPE_1__* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*,int) ;
 int VAR_0 ;
 int FUNC_4 (struct nouveau_gpio*,int ,int ,int) ;
 int * VAR_1 ;

int
FUNC_5(struct drm_device *VAR_2)
{
 struct nouveau_pm_voltage *VAR_3 = &FUNC_2(VAR_2)->voltage;
 struct nouveau_device *VAR_4 = FUNC_0(VAR_2);
 struct nouveau_gpio *VAR_5 = FUNC_1(VAR_4);
 u8 VAR_6 = 0;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (!(VAR_3->vid_mask & (1 << VAR_7)))
   continue;

  VAR_6 |= VAR_5->get(VAR_5, 0, VAR_1[VAR_7], 0xff) << VAR_7;
 }

 return FUNC_3(VAR_2, VAR_6);
}
