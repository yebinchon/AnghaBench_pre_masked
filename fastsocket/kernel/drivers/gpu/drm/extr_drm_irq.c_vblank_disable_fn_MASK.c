
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int num_crtcs; int vbl_lock; scalar_t__* vblank_enabled; int * vblank_refcount; int vblank_disable_allowed; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct drm_device*,int) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_0)
{
 struct drm_device *VAR_1 = (struct drm_device *)VAR_0;
 unsigned long VAR_2;
 int VAR_3;

 if (!VAR_1->vblank_disable_allowed)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_crtcs; VAR_3++) {
  FUNC_2(&VAR_1->vbl_lock, VAR_2);
  if (FUNC_1(&VAR_1->vblank_refcount[VAR_3]) == 0 &&
      VAR_1->vblank_enabled[VAR_3]) {
   FUNC_0("disabling vblank on crtc %d\n", VAR_3);
   FUNC_4(VAR_1, VAR_3);
  }
  FUNC_3(&VAR_1->vbl_lock, VAR_2);
 }
}
