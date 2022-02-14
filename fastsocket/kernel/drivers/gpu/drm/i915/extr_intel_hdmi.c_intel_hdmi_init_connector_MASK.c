
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_hdmi {int set_infoframes; int write_infoframe; int ddc_bus; } ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct intel_digital_port {int port; struct intel_encoder base; struct intel_hdmi hdmi; } ;
struct drm_connector {int interlace_allowed; scalar_t__ doublescan_allowed; int polled; } ;
struct intel_connector {int get_hw_state; struct drm_connector base; } ;
struct drm_i915_private {int hotplug_supported_mask; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*) ;
 scalar_t__ FUNC_8 (struct drm_device*) ;
 scalar_t__ FUNC_9 (struct drm_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (struct drm_connector*,int *) ;
 int FUNC_11 (struct drm_device*,struct drm_connector*,int *,int ) ;
 int FUNC_12 (struct drm_connector*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_13 (struct intel_connector*,struct intel_encoder*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_14 (struct intel_hdmi*,struct drm_connector*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

void FUNC_15(struct intel_digital_port *VAR_23,
          struct intel_connector *VAR_24)
{
 struct drm_connector *VAR_25 = &VAR_24->base;
 struct intel_hdmi *VAR_26 = &VAR_23->hdmi;
 struct intel_encoder *VAR_27 = &VAR_23->base;
 struct drm_device *VAR_28 = VAR_27->base.dev;
 struct drm_i915_private *VAR_29 = VAR_28->dev_private;
 enum port VAR_30 = VAR_23->port;

 FUNC_11(VAR_28, VAR_25, &VAR_19,
      VAR_1);
 FUNC_10(VAR_25, &VAR_20);

 VAR_25->polled = VAR_0;
 VAR_25->interlace_allowed = 1;
 VAR_25->doublescan_allowed = 0;

 switch (VAR_30) {
 case 130:
  VAR_26->ddc_bus = VAR_2;
  VAR_29->hotplug_supported_mask |= VAR_6;
  break;
 case 129:
  VAR_26->ddc_bus = VAR_3;
  VAR_29->hotplug_supported_mask |= VAR_7;
  break;
 case 128:
  VAR_26->ddc_bus = VAR_4;
  VAR_29->hotplug_supported_mask |= VAR_8;
  break;
 case 131:

 default:
  FUNC_0();
 }

 if (!FUNC_3(VAR_28)) {
  VAR_26->write_infoframe = VAR_12;
  VAR_26->set_infoframes = VAR_11;
 } else if (FUNC_9(VAR_28)) {
  VAR_26->write_infoframe = VAR_22;
  VAR_26->set_infoframes = VAR_21;
 } else if (FUNC_8(VAR_28)) {
  VAR_26->write_infoframe = VAR_14;
  VAR_26->set_infoframes = VAR_13;
 } else if (FUNC_2(VAR_28)) {
  VAR_26->write_infoframe = VAR_16;
  VAR_26->set_infoframes = VAR_15;
 } else {
  VAR_26->write_infoframe = VAR_10;
  VAR_26->set_infoframes = VAR_9;
 }

 if (FUNC_1(VAR_28))
  VAR_24->get_hw_state = VAR_18;
 else
  VAR_24->get_hw_state = VAR_17;

 FUNC_14(VAR_26, VAR_25);

 FUNC_13(VAR_24, VAR_27);
 FUNC_12(VAR_25);





 if (FUNC_6(VAR_28) && !FUNC_7(VAR_28)) {
  u32 VAR_31 = FUNC_4(VAR_5);
  FUNC_5(VAR_5, (VAR_31 & ~0xf) | 0xd);
 }
}
