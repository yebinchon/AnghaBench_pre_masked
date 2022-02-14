
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nouveau_drm {TYPE_2__* fbcon; } ;
struct drm_device {int dummy; } ;
struct TYPE_3__ {int fbdev; } ;
struct TYPE_4__ {TYPE_1__ helper; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 struct nouveau_drm* FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;

void FUNC_6(struct drm_device *VAR_0, int VAR_1)
{
 struct nouveau_drm *VAR_2 = FUNC_3(VAR_0);
 FUNC_0();
 if (VAR_1 == 0)
  FUNC_5(VAR_0);
 FUNC_2(VAR_2->fbcon->helper.fbdev, VAR_1);
 if (VAR_1 == 1)
  FUNC_4(VAR_0);
 FUNC_1();
}
