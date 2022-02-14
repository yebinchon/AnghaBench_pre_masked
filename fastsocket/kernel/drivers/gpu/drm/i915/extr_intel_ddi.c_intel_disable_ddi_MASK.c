
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_encoder {struct drm_device* dev; struct drm_crtc* crtc; } ;
struct intel_encoder {int type; struct drm_encoder base; } ;
struct intel_dp {int dummy; } ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_3 ;
 struct intel_dp* FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (struct intel_dp*) ;
 struct intel_crtc* FUNC_4 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_5(struct intel_encoder *VAR_4)
{
 struct drm_encoder *VAR_5 = &VAR_4->base;
 struct drm_crtc *VAR_6 = VAR_5->crtc;
 struct intel_crtc *VAR_7 = FUNC_4(VAR_6);
 int VAR_8 = VAR_7->pipe;
 int VAR_9 = VAR_4->type;
 struct drm_device *VAR_10 = VAR_5->dev;
 struct drm_i915_private *VAR_11 = VAR_10->dev_private;
 uint32_t VAR_12;

 if (VAR_9 == VAR_3) {
  struct intel_dp *VAR_13 = FUNC_2(VAR_5);

  FUNC_3(VAR_13);
 }

 VAR_12 = FUNC_0(VAR_2);
 VAR_12 &= ~((VAR_1 | VAR_0) << (VAR_8 * 4));
 FUNC_1(VAR_2, VAR_12);
}
