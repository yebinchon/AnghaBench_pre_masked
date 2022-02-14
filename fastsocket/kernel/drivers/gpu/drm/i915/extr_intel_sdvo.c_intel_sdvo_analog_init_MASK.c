
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_connector {int connector_type; int polled; } ;
struct intel_connector {struct drm_connector base; } ;
struct intel_sdvo_connector {int output_flag; struct intel_connector base; } ;
struct drm_encoder {int encoder_type; } ;
struct TYPE_2__ {struct drm_encoder base; } ;
struct intel_sdvo {int controlled_output; TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct intel_sdvo_connector*,struct intel_sdvo*) ;
 struct intel_sdvo_connector* FUNC_1 (int,int ) ;

__attribute__((used)) static bool
FUNC_2(struct intel_sdvo *VAR_6, int VAR_7)
{
 struct drm_encoder *VAR_8 = &VAR_6->base.base;
 struct drm_connector *VAR_9;
 struct intel_connector *VAR_10;
 struct intel_sdvo_connector *VAR_11;

 VAR_11 = FUNC_1(sizeof(struct intel_sdvo_connector), VAR_3);
 if (!VAR_11)
  return 0;

 VAR_10 = &VAR_11->base;
 VAR_9 = &VAR_10->base;
 VAR_9->polled = VAR_0;
 VAR_8->encoder_type = VAR_2;
 VAR_9->connector_type = VAR_1;

 if (VAR_7 == 0) {
  VAR_6->controlled_output |= VAR_4;
  VAR_11->output_flag = VAR_4;
 } else if (VAR_7 == 1) {
  VAR_6->controlled_output |= VAR_5;
  VAR_11->output_flag = VAR_5;
 }

 FUNC_0(VAR_11,
      VAR_6);
 return 1;
}
