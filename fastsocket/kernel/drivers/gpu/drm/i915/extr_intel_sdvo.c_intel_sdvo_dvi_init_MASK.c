
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_connector {int polled; int connector_type; } ;
struct intel_connector {struct drm_connector base; } ;
struct intel_sdvo_connector {int output_flag; struct intel_connector base; } ;
struct drm_encoder {int encoder_type; } ;
struct TYPE_2__ {struct drm_encoder base; } ;
struct intel_sdvo {int controlled_output; int hotplug_active; int is_hdmi; TYPE_1__ base; } ;
struct intel_encoder {int (* hot_plug ) (struct intel_encoder*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct intel_sdvo*,struct intel_sdvo_connector*) ;
 int FUNC_1 (struct intel_sdvo_connector*,struct intel_sdvo*) ;
 int FUNC_2 (struct intel_encoder*) ;
 int FUNC_3 (struct intel_sdvo*) ;
 scalar_t__ FUNC_4 (struct intel_sdvo*,int) ;
 struct intel_sdvo_connector* FUNC_5 (int,int ) ;
 struct intel_encoder* FUNC_6 (struct drm_encoder*) ;

__attribute__((used)) static bool
FUNC_7(struct intel_sdvo *VAR_9, int VAR_10)
{
 struct drm_encoder *VAR_11 = &VAR_9->base.base;
 struct drm_connector *VAR_12;
 struct intel_encoder *VAR_13 = FUNC_6(VAR_11);
 struct intel_connector *VAR_14;
 struct intel_sdvo_connector *VAR_15;

 VAR_15 = FUNC_5(sizeof(struct intel_sdvo_connector), VAR_6);
 if (!VAR_15)
  return 0;

 if (VAR_10 == 0) {
  VAR_9->controlled_output |= VAR_7;
  VAR_15->output_flag = VAR_7;
 } else if (VAR_10 == 1) {
  VAR_9->controlled_output |= VAR_8;
  VAR_15->output_flag = VAR_8;
 }

 VAR_14 = &VAR_15->base;
 VAR_12 = &VAR_14->base;
 if (FUNC_3(VAR_9) &
  VAR_15->output_flag) {
  VAR_12->polled = VAR_2;
  VAR_9->hotplug_active |= VAR_15->output_flag;



  VAR_13->hot_plug = FUNC_2;
  FUNC_2(VAR_13);
 } else {
  VAR_12->polled = VAR_0 | VAR_1;
 }
 VAR_11->encoder_type = VAR_5;
 VAR_12->connector_type = VAR_3;

 if (FUNC_4(VAR_9, VAR_10)) {
  VAR_12->connector_type = VAR_4;
  VAR_9->is_hdmi = 1;
 }

 FUNC_1(VAR_15, VAR_9);
 if (VAR_9->is_hdmi)
  FUNC_0(VAR_9, VAR_15);

 return 1;
}
