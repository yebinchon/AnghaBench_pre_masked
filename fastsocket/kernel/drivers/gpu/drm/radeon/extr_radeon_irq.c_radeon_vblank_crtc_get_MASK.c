
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_2__ {int vblank_crtc; } ;
typedef TYPE_1__ drm_radeon_private_t ;



int FUNC_0(struct drm_device *VAR_0)
{
 drm_radeon_private_t *VAR_1 = (drm_radeon_private_t *) VAR_0->dev_private;

 return VAR_1->vblank_crtc;
}
