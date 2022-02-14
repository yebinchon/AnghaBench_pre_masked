
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {struct drm_crtc** pipe_to_crtc_mapping; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {int dummy; } ;



__attribute__((used)) static inline struct drm_crtc *
FUNC_0(struct drm_device *VAR_0, int VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_0->dev_private;
 return VAR_2->pipe_to_crtc_mapping[VAR_1];
}
