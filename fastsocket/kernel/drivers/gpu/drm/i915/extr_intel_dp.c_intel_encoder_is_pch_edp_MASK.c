
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int dummy; } ;
struct drm_encoder {int dummy; } ;


 struct intel_dp* FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (struct intel_dp*) ;

bool FUNC_2(struct drm_encoder *VAR_0)
{
 struct intel_dp *VAR_1;

 if (!VAR_0)
  return 0;

 VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1);
}
