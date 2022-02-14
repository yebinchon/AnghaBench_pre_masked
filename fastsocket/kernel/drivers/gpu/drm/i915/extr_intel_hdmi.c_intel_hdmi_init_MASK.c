
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_encoder {int dummy; } ;
struct intel_encoder {int crtc_mask; int cloneable; int type; int get_hw_state; int disable; int enable; struct drm_encoder base; } ;
struct TYPE_4__ {scalar_t__ output_reg; } ;
struct TYPE_3__ {int sdvox_reg; } ;
struct intel_digital_port {int port; TYPE_2__ dp; TYPE_1__ hdmi; struct intel_encoder base; } ;
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
 int FUNC_3 (struct intel_digital_port*) ;
 void* FUNC_4 (int,int ) ;

void FUNC_5(struct drm_device *VAR_8, int VAR_9, enum port VAR_10)
{
 struct intel_digital_port *VAR_11;
 struct intel_encoder *VAR_12;
 struct drm_encoder *VAR_13;
 struct intel_connector *VAR_14;

 VAR_11 = FUNC_4(sizeof(struct intel_digital_port), VAR_1);
 if (!VAR_11)
  return;

 VAR_14 = FUNC_4(sizeof(struct intel_connector), VAR_1);
 if (!VAR_14) {
  FUNC_3(VAR_11);
  return;
 }

 VAR_12 = &VAR_11->base;
 VAR_13 = &VAR_12->base;

 FUNC_1(VAR_8, &VAR_12->base, &VAR_5,
    VAR_0);
 FUNC_0(&VAR_12->base, &VAR_7);

 VAR_12->enable = VAR_4;
 VAR_12->disable = VAR_3;
 VAR_12->get_hw_state = VAR_6;

 VAR_12->type = VAR_2;
 VAR_12->crtc_mask = (1 << 0) | (1 << 1) | (1 << 2);
 VAR_12->cloneable = 0;

 VAR_11->port = VAR_10;
 VAR_11->hdmi.sdvox_reg = VAR_9;
 VAR_11->dp.output_reg = 0;

 FUNC_2(VAR_11, VAR_14);
}
