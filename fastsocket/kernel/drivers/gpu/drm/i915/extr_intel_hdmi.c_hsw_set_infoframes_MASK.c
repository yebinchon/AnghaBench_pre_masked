
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_hdmi {int has_hdmi_sink; } ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_encoder {int crtc; TYPE_1__* dev; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_2__ {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct intel_hdmi*) ;
 struct intel_hdmi* FUNC_5 (struct drm_encoder*) ;
 int FUNC_6 (struct drm_encoder*,struct drm_display_mode*) ;
 int FUNC_7 (struct drm_encoder*) ;
 struct intel_crtc* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct drm_encoder *VAR_4,
          struct drm_display_mode *VAR_5)
{
 struct drm_i915_private *VAR_6 = VAR_4->dev->dev_private;
 struct intel_crtc *VAR_7 = FUNC_8(VAR_4->crtc);
 struct intel_hdmi *VAR_8 = FUNC_5(VAR_4);
 u32 VAR_9 = FUNC_0(VAR_7->pipe);
 u32 VAR_10 = FUNC_1(VAR_9);

 FUNC_4(VAR_8);

 if (!VAR_8->has_hdmi_sink) {
  FUNC_2(VAR_9, 0);
  FUNC_3(VAR_9);
  return;
 }

 VAR_10 &= ~(VAR_2 | VAR_0 |
   VAR_3 | VAR_1);

 FUNC_2(VAR_9, VAR_10);
 FUNC_3(VAR_9);

 FUNC_6(VAR_4, VAR_5);
 FUNC_7(VAR_4);
}
