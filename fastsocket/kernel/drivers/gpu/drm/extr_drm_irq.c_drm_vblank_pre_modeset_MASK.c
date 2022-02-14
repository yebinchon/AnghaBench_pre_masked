
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int* vblank_inmodeset; int num_crtcs; } ;


 scalar_t__ FUNC_0 (struct drm_device*,int) ;

void FUNC_1(struct drm_device *VAR_0, int VAR_1)
{

 if (!VAR_0->num_crtcs)
  return;







 if (!VAR_0->vblank_inmodeset[VAR_1]) {
  VAR_0->vblank_inmodeset[VAR_1] = 0x1;
  if (FUNC_0(VAR_0, VAR_1) == 0)
   VAR_0->vblank_inmodeset[VAR_1] |= 0x2;
 }
}
