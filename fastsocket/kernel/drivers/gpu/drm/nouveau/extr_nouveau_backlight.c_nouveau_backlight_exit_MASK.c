
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_drm {int * backlight; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct nouveau_drm* FUNC_1 (struct drm_device*) ;

void
FUNC_2(struct drm_device *VAR_0)
{
 struct nouveau_drm *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->backlight) {
  FUNC_0(VAR_1->backlight);
  VAR_1->backlight = ((void*)0);
 }
}
