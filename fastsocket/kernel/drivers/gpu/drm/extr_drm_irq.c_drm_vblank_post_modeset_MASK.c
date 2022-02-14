
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int* vblank_inmodeset; int vblank_disable_allowed; int vbl_lock; int num_crtcs; } ;


 int FUNC_0 (struct drm_device*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct drm_device *VAR_0, int VAR_1)
{
 unsigned long VAR_2;


 if (!VAR_0->num_crtcs)
  return;

 if (VAR_0->vblank_inmodeset[VAR_1]) {
  FUNC_1(&VAR_0->vbl_lock, VAR_2);
  VAR_0->vblank_disable_allowed = 1;
  FUNC_2(&VAR_0->vbl_lock, VAR_2);

  if (VAR_0->vblank_inmodeset[VAR_1] & 0x2)
   FUNC_0(VAR_0, VAR_1);

  VAR_0->vblank_inmodeset[VAR_1] = 0;
 }
}
