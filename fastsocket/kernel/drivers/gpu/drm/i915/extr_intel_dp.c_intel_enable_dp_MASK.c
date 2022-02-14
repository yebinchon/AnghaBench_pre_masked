
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct intel_dp {int output_reg; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 struct intel_dp* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (struct intel_dp*,int ) ;
 int FUNC_5 (struct intel_dp*) ;
 int FUNC_6 (struct intel_dp*) ;
 int FUNC_7 (struct intel_dp*) ;
 int FUNC_8 (struct intel_dp*,int) ;
 int FUNC_9 (struct intel_dp*) ;

__attribute__((used)) static void FUNC_10(struct intel_encoder *VAR_2)
{
 struct intel_dp *VAR_3 = FUNC_2(&VAR_2->base);
 struct drm_device *VAR_4 = VAR_2->base.dev;
 struct drm_i915_private *VAR_5 = VAR_4->dev_private;
 uint32_t VAR_6 = FUNC_0(VAR_3->output_reg);

 if (FUNC_1(VAR_6 & VAR_0))
  return;

 FUNC_9(VAR_3);
 FUNC_4(VAR_3, VAR_1);
 FUNC_5(VAR_3);
 FUNC_7(VAR_3);
 FUNC_8(VAR_3, 1);
 FUNC_3(VAR_3);
 FUNC_6(VAR_3);
}
