
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {TYPE_1__* dev_private; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_2__ {struct drm_crtc** pipe_to_crtc_mapping; } ;
typedef TYPE_1__ drm_i915_private_t ;


 int FUNC_0 (struct drm_device*,struct drm_crtc*) ;

void FUNC_1(struct drm_device *VAR_0, int VAR_1)
{
 drm_i915_private_t *VAR_2 = VAR_0->dev_private;
 struct drm_crtc *VAR_3 = VAR_2->pipe_to_crtc_mapping[VAR_1];

 FUNC_0(VAR_0, VAR_3);
}
