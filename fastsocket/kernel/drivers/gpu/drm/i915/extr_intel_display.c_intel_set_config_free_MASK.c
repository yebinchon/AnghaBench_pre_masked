
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_set_config {struct intel_set_config* save_encoder_crtcs; struct intel_set_config* save_connector_encoders; } ;


 int FUNC_0 (struct intel_set_config*) ;

__attribute__((used)) static void FUNC_1(struct intel_set_config *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_0->save_connector_encoders);
 FUNC_0(VAR_0->save_encoder_crtcs);
 FUNC_0(VAR_0);
}
