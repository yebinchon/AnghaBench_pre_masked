
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc {int* lut_r; int* lut_g; int* lut_b; int pipe; int active; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {int enabled; struct drm_device* dev; } ;


 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct intel_crtc* FUNC_4 (struct drm_crtc*) ;

void FUNC_5(struct drm_crtc *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct drm_i915_private *VAR_2 = VAR_1->dev_private;
 struct intel_crtc *VAR_3 = FUNC_4(VAR_0);
 int VAR_4 = FUNC_3(VAR_3->pipe);
 int VAR_5;


 if (!VAR_0->enabled || !VAR_3->active)
  return;


 if (FUNC_0(VAR_1))
  VAR_4 = FUNC_2(VAR_3->pipe);

 for (VAR_5 = 0; VAR_5 < 256; VAR_5++) {
  FUNC_1(VAR_4 + 4 * VAR_5,
      (VAR_3->lut_r[VAR_5] << 16) |
      (VAR_3->lut_g[VAR_5] << 8) |
      VAR_3->lut_b[VAR_5]);
 }
}
