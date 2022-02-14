
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {scalar_t__ dev_private; } ;
typedef int int64_t ;
struct TYPE_2__ {unsigned int vblank_crtc; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int FUNC_0 (char*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_1(struct drm_device *VAR_3, int64_t VAR_4)
{
 drm_radeon_private_t *VAR_5 = (drm_radeon_private_t *) VAR_3->dev_private;
 if (VAR_4 & ~(VAR_0 | VAR_1)) {
  FUNC_0("called with invalid crtc 0x%x\n", (unsigned int)VAR_4);
  return -VAR_2;
 }
 VAR_5->vblank_crtc = (unsigned int)VAR_4;
 return 0;
}
