
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_connector {int connector_type; } ;
struct intel_connector {struct drm_connector base; } ;
struct intel_sdvo_connector {int output_flag; struct intel_connector base; } ;
struct drm_encoder {int encoder_type; } ;
struct TYPE_2__ {int needs_tv_clock; struct drm_encoder base; } ;
struct intel_sdvo {int controlled_output; int is_tv; TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct intel_sdvo_connector*,struct intel_sdvo*) ;
 int FUNC_1 (struct intel_sdvo*,struct intel_sdvo_connector*) ;
 int FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct intel_sdvo*,struct intel_sdvo_connector*,int) ;
 struct intel_sdvo_connector* FUNC_4 (int,int ) ;

__attribute__((used)) static bool
FUNC_5(struct intel_sdvo *VAR_3, int VAR_4)
{
 struct drm_encoder *VAR_5 = &VAR_3->base.base;
 struct drm_connector *VAR_6;
 struct intel_connector *VAR_7;
 struct intel_sdvo_connector *VAR_8;

 VAR_8 = FUNC_4(sizeof(struct intel_sdvo_connector), VAR_2);
 if (!VAR_8)
  return 0;

 VAR_7 = &VAR_8->base;
 VAR_6 = &VAR_7->base;
 VAR_5->encoder_type = VAR_1;
 VAR_6->connector_type = VAR_0;

 VAR_3->controlled_output |= VAR_4;
 VAR_8->output_flag = VAR_4;

 VAR_3->is_tv = 1;
 VAR_3->base.needs_tv_clock = 1;

 FUNC_0(VAR_8, VAR_3);

 if (!FUNC_3(VAR_3, VAR_8, VAR_4))
  goto err;

 if (!FUNC_1(VAR_3, VAR_8))
  goto err;

 return 1;

err:
 FUNC_2(VAR_6);
 return 0;
}
