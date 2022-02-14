
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int dummy; } ;
struct intel_encoder {int crtc_mask; int cloneable; int hot_plug; int type; int get_hw_state; int post_disable; int disable; int pre_enable; int enable; struct drm_encoder base; } ;
struct TYPE_2__ {int output_reg; } ;
struct intel_digital_port {int port; TYPE_1__ dp; struct intel_encoder base; } ;
struct intel_connector {int dummy; } ;
struct drm_device {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_encoder*,int *) ;
 int FUNC_1 (struct drm_device*,struct drm_encoder*,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct intel_digital_port*,struct intel_connector*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct intel_digital_port*) ;
 void* FUNC_4 (int,int ) ;

void
FUNC_5(struct drm_device *VAR_11, int VAR_12, enum port VAR_13)
{
 struct intel_digital_port *VAR_14;
 struct intel_encoder *VAR_15;
 struct drm_encoder *VAR_16;
 struct intel_connector *VAR_17;

 VAR_14 = FUNC_4(sizeof(struct intel_digital_port), VAR_1);
 if (!VAR_14)
  return;

 VAR_17 = FUNC_4(sizeof(struct intel_connector), VAR_1);
 if (!VAR_17) {
  FUNC_3(VAR_14);
  return;
 }

 VAR_15 = &VAR_14->base;
 VAR_16 = &VAR_15->base;

 FUNC_1(VAR_11, &VAR_15->base, &VAR_4,
    VAR_0);
 FUNC_0(&VAR_15->base, &VAR_6);

 VAR_15->enable = VAR_8;
 VAR_15->pre_enable = VAR_10;
 VAR_15->disable = VAR_3;
 VAR_15->post_disable = VAR_9;
 VAR_15->get_hw_state = VAR_5;

 VAR_14->port = VAR_13;
 VAR_14->dp.output_reg = VAR_12;

 VAR_15->type = VAR_2;
 VAR_15->crtc_mask = (1 << 0) | (1 << 1) | (1 << 2);
 VAR_15->cloneable = 0;
 VAR_15->hot_plug = VAR_7;

 FUNC_2(VAR_14, VAR_17);
}
