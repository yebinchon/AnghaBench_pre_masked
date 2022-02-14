
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


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct intel_hdmi*) ;
 struct intel_hdmi* FUNC_5 (struct drm_encoder*) ;
 int FUNC_6 (struct drm_encoder*,struct drm_display_mode*) ;
 int FUNC_7 (struct drm_encoder*) ;
 struct intel_crtc* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct drm_encoder *VAR_6,
          struct drm_display_mode *VAR_7)
{
 struct drm_i915_private *VAR_8 = VAR_6->dev->dev_private;
 struct intel_crtc *VAR_9 = FUNC_8(VAR_6->crtc);
 struct intel_hdmi *VAR_10 = FUNC_5(VAR_6);
 u32 VAR_11 = FUNC_3(VAR_9->pipe);
 u32 VAR_12 = FUNC_0(VAR_11);

 FUNC_4(VAR_10);


 VAR_12 |= VAR_5 | VAR_4;

 if (!VAR_10->has_hdmi_sink) {
  if (!(VAR_12 & VAR_0))
   return;
  VAR_12 &= ~VAR_0;
  FUNC_1(VAR_11, VAR_12);
  FUNC_2(VAR_11);
  return;
 }

 VAR_12 |= VAR_0;
 VAR_12 &= ~(VAR_3 | VAR_1 |
   VAR_2);

 FUNC_1(VAR_11, VAR_12);
 FUNC_2(VAR_11);

 FUNC_6(VAR_6, VAR_7);
 FUNC_7(VAR_6);
}
