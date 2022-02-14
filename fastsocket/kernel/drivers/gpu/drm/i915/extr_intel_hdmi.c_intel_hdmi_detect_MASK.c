
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_hdmi {int has_hdmi_sink; int has_audio; int rgb_quant_range_selectable; scalar_t__ force_audio; int ddc_bus; } ;
struct intel_encoder {int type; } ;
struct intel_digital_port {struct intel_encoder base; } ;
struct edid {int input; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_connector {struct drm_device* dev; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct edid*) ;
 int FUNC_1 (struct edid*) ;
 struct edid* FUNC_2 (struct drm_connector*,int ) ;
 int FUNC_3 (struct edid*) ;
 struct intel_digital_port* FUNC_4 (struct intel_hdmi*) ;
 struct intel_hdmi* FUNC_5 (struct drm_connector*) ;
 int FUNC_6 (struct drm_i915_private*,int ) ;
 int FUNC_7 (struct edid*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_8(struct drm_connector *VAR_7, bool VAR_8)
{
 struct drm_device *VAR_9 = VAR_7->dev;
 struct intel_hdmi *VAR_10 = FUNC_5(VAR_7);
 struct intel_digital_port *VAR_11 =
  FUNC_4(VAR_10);
 struct intel_encoder *VAR_12 = &VAR_11->base;
 struct drm_i915_private *VAR_13 = VAR_9->dev_private;
 struct edid *VAR_14;
 enum drm_connector_status VAR_15 = VAR_6;

 VAR_10->has_hdmi_sink = 0;
 VAR_10->has_audio = 0;
 VAR_10->rgb_quant_range_selectable = 0;
 VAR_14 = FUNC_2(VAR_7,
       FUNC_6(VAR_13,
          VAR_10->ddc_bus));

 if (VAR_14) {
  if (VAR_14->input & VAR_0) {
   VAR_15 = VAR_5;
   if (VAR_10->force_audio != VAR_2)
    VAR_10->has_hdmi_sink =
      FUNC_0(VAR_14);
   VAR_10->has_audio = FUNC_1(VAR_14);
   VAR_10->rgb_quant_range_selectable =
    FUNC_3(VAR_14);
  }
  FUNC_7(VAR_14);
 }

 if (VAR_15 == VAR_5) {
  if (VAR_10->force_audio != VAR_1)
   VAR_10->has_audio =
    (VAR_10->force_audio == VAR_3);
  VAR_12->type = VAR_4;
 }

 return VAR_15;
}
