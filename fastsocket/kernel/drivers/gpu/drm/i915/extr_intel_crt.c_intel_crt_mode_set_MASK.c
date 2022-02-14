
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_crtc {scalar_t__ pipe; } ;
struct intel_crt {int adpa_reg; } ;
struct drm_i915_private {int dummy; } ;
struct drm_encoder {struct drm_crtc* crtc; struct drm_device* dev; } ;
struct drm_display_mode {int flags; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 scalar_t__ FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 struct intel_crt* FUNC_6 (int ) ;
 struct intel_crtc* FUNC_7 (struct drm_crtc*) ;
 int FUNC_8 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_9(struct drm_encoder *VAR_7,
          struct drm_display_mode *VAR_8,
          struct drm_display_mode *VAR_9)
{

 struct drm_device *VAR_10 = VAR_7->dev;
 struct drm_crtc *VAR_11 = VAR_7->crtc;
 struct intel_crt *VAR_12 =
  FUNC_6(FUNC_8(VAR_7));
 struct intel_crtc *VAR_13 = FUNC_7(VAR_11);
 struct drm_i915_private *VAR_14 = VAR_10->dev_private;
 u32 VAR_15;

 if (FUNC_3(VAR_10))
  VAR_15 = VAR_0;
 else
  VAR_15 = 0;

 if (VAR_9->flags & VAR_5)
  VAR_15 |= VAR_1;
 if (VAR_9->flags & VAR_6)
  VAR_15 |= VAR_4;


 if (FUNC_2(VAR_10))
  ;
 else if (FUNC_1(VAR_10))
  VAR_15 |= FUNC_5(VAR_13->pipe);
 else if (VAR_13->pipe == 0)
  VAR_15 |= VAR_2;
 else
  VAR_15 |= VAR_3;

 if (!FUNC_3(VAR_10))
  FUNC_4(FUNC_0(VAR_13->pipe), 0);

 FUNC_4(VAR_12->adpa_reg, VAR_15);
}
