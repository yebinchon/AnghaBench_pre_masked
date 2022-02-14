
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_encoder {int dummy; } ;
struct intel_encoder {int crtc_mask; int cloneable; int hot_plug; int type; int get_hw_state; int post_disable; int disable; int pre_enable; int enable; struct drm_encoder base; } ;
struct TYPE_4__ {void* output_reg; } ;
struct TYPE_3__ {void* sdvox_reg; } ;
struct intel_digital_port {int port; int port_reversal; TYPE_2__ dp; TYPE_1__ hdmi; struct intel_encoder base; } ;
struct intel_connector {int port; int port_reversal; TYPE_2__ dp; TYPE_1__ hdmi; struct intel_encoder base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
typedef enum port { ____Placeholder_port } port ;


 void* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct drm_encoder*,int *) ;
 int FUNC_3 (struct drm_device*,struct drm_encoder*,int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct intel_digital_port*,struct intel_digital_port*) ;
 int VAR_12 ;
 int FUNC_5 (struct intel_digital_port*,struct intel_digital_port*) ;
 int FUNC_6 (struct intel_digital_port*) ;
 struct intel_digital_port* FUNC_7 (int,int ) ;

void FUNC_8(struct drm_device *VAR_13, enum port VAR_14)
{
 struct drm_i915_private *VAR_15 = VAR_13->dev_private;
 struct intel_digital_port *VAR_16;
 struct intel_encoder *VAR_17;
 struct drm_encoder *VAR_18;
 struct intel_connector *VAR_19 = ((void*)0);
 struct intel_connector *VAR_20 = ((void*)0);

 VAR_16 = FUNC_7(sizeof(struct intel_digital_port), VAR_2);
 if (!VAR_16)
  return;

 VAR_20 = FUNC_7(sizeof(struct intel_connector), VAR_2);
 if (!VAR_20) {
  FUNC_6(VAR_16);
  return;
 }

 if (VAR_14 != VAR_4) {
  VAR_19 = FUNC_7(sizeof(struct intel_connector),
      VAR_2);
  if (!VAR_19) {
   FUNC_6(VAR_20);
   FUNC_6(VAR_16);
   return;
  }
 }

 VAR_17 = &VAR_16->base;
 VAR_18 = &VAR_17->base;

 FUNC_3(VAR_13, VAR_18, &VAR_5,
    VAR_1);
 FUNC_2(VAR_18, &VAR_7);

 VAR_17->enable = VAR_12;
 VAR_17->pre_enable = VAR_10;
 VAR_17->disable = VAR_11;
 VAR_17->post_disable = VAR_9;
 VAR_17->get_hw_state = VAR_6;

 VAR_16->port = VAR_14;
 VAR_16->port_reversal = FUNC_1(FUNC_0(VAR_14)) &
     VAR_0;
 if (VAR_19)
  VAR_16->hdmi.sdvox_reg = FUNC_0(VAR_14);
 else
  VAR_16->hdmi.sdvox_reg = 0;
 VAR_16->dp.output_reg = FUNC_0(VAR_14);

 VAR_17->type = VAR_3;
 VAR_17->crtc_mask = (1 << 0) | (1 << 1) | (1 << 2);
 VAR_17->cloneable = 0;
 VAR_17->hot_plug = VAR_8;

 if (VAR_19)
  FUNC_5(VAR_16, VAR_19);
 FUNC_4(VAR_16, VAR_20);
}
