
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_hdmi {int has_hdmi_sink; } ;
struct intel_digital_port {int port; struct intel_hdmi hdmi; } ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_encoder {int crtc; TYPE_1__* dev; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_2__ {struct drm_i915_private* dev_private; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;



 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct intel_hdmi*) ;
 struct intel_digital_port* FUNC_6 (struct drm_encoder*) ;
 int FUNC_7 (struct drm_encoder*,struct drm_display_mode*) ;
 int FUNC_8 (struct drm_encoder*) ;
 struct intel_crtc* FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct drm_encoder *VAR_10,
          struct drm_display_mode *VAR_11)
{
 struct drm_i915_private *VAR_12 = VAR_10->dev->dev_private;
 struct intel_crtc *VAR_13 = FUNC_9(VAR_10->crtc);
 struct intel_digital_port *VAR_14 = FUNC_6(VAR_10);
 struct intel_hdmi *VAR_15 = &VAR_14->hdmi;
 u32 VAR_16 = FUNC_4(VAR_13->pipe);
 u32 VAR_17 = FUNC_1(VAR_16);
 u32 VAR_18;

 FUNC_5(VAR_15);


 VAR_17 |= VAR_9 | VAR_4;

 if (!VAR_15->has_hdmi_sink) {
  if (!(VAR_17 & VAR_0))
   return;
  VAR_17 &= ~VAR_0;
  FUNC_2(VAR_16, VAR_17);
  FUNC_3(VAR_16);
  return;
 }

 switch (VAR_14->port) {
 case 130:
  VAR_18 = VAR_5;
  break;
 case 129:
  VAR_18 = VAR_6;
  break;
 case 128:
  VAR_18 = VAR_7;
  break;
 default:
  FUNC_0();
  return;
 }

 if (VAR_18 != (VAR_17 & VAR_8)) {
  if (VAR_17 & VAR_0) {
   VAR_17 &= ~VAR_0;
   FUNC_2(VAR_16, VAR_17);
   FUNC_3(VAR_16);
  }
  VAR_17 &= ~VAR_8;
  VAR_17 |= VAR_18;
 }

 VAR_17 |= VAR_0;
 VAR_17 &= ~(VAR_3 | VAR_1 |
   VAR_2);

 FUNC_2(VAR_16, VAR_17);
 FUNC_3(VAR_16);

 FUNC_7(VAR_10, VAR_11);
 FUNC_8(VAR_10);
}
