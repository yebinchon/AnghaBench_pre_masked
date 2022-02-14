
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_hdmi {int has_hdmi_sink; } ;
struct intel_digital_port {int port; struct intel_hdmi hdmi; } ;
struct drm_i915_private {int dummy; } ;
struct drm_encoder {TYPE_1__* dev; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_2__ {struct drm_i915_private* dev_private; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;


 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct intel_hdmi*) ;
 struct intel_digital_port* FUNC_5 (struct drm_encoder*) ;
 int FUNC_6 (struct drm_encoder*,struct drm_display_mode*) ;
 int FUNC_7 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_8(struct drm_encoder *VAR_8,
          struct drm_display_mode *VAR_9)
{
 struct drm_i915_private *VAR_10 = VAR_8->dev->dev_private;
 struct intel_digital_port *VAR_11 = FUNC_5(VAR_8);
 struct intel_hdmi *VAR_12 = &VAR_11->hdmi;
 u32 VAR_13 = VAR_0;
 u32 VAR_14 = FUNC_1(VAR_13);
 u32 VAR_15;

 FUNC_4(VAR_12);
 VAR_14 |= VAR_7 | VAR_3;

 if (!VAR_12->has_hdmi_sink) {
  if (!(VAR_14 & VAR_1))
   return;
  VAR_14 &= ~VAR_1;
  FUNC_2(VAR_13, VAR_14);
  FUNC_3(VAR_13);
  return;
 }

 switch (VAR_11->port) {
 case 129:
  VAR_15 = VAR_4;
  break;
 case 128:
  VAR_15 = VAR_5;
  break;
 default:
  FUNC_0();
  return;
 }

 if (VAR_15 != (VAR_14 & VAR_6)) {
  if (VAR_14 & VAR_1) {
   VAR_14 &= ~VAR_1;
   FUNC_2(VAR_13, VAR_14);
   FUNC_3(VAR_13);
  }
  VAR_14 &= ~VAR_6;
  VAR_14 |= VAR_15;
 }

 VAR_14 |= VAR_1;
 VAR_14 &= ~VAR_2;

 FUNC_2(VAR_13, VAR_14);
 FUNC_3(VAR_13);

 FUNC_6(VAR_8, VAR_9);
 FUNC_7(VAR_8);
}
