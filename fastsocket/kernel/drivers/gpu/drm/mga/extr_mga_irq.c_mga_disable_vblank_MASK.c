
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;


 int FUNC_0 (char*,int) ;

void FUNC_1(struct drm_device *VAR_0, int VAR_1)
{
 if (VAR_1 != 0) {
  FUNC_0("tried to disable vblank on non-existent crtc %d\n",
     VAR_1);
 }







}
