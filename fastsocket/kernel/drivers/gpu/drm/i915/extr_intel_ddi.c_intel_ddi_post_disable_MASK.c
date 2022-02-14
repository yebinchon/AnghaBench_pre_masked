
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_encoder {TYPE_1__* dev; } ;
struct intel_encoder {int type; struct drm_encoder base; } ;
struct intel_dp {int dummy; } ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;
struct TYPE_2__ {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 struct intel_dp* FUNC_5 (struct drm_encoder*) ;
 int FUNC_6 (struct intel_encoder*) ;
 int FUNC_7 (struct drm_i915_private*,int) ;
 int FUNC_8 (struct intel_dp*) ;
 int FUNC_9 (struct intel_dp*) ;

__attribute__((used)) static void FUNC_10(struct intel_encoder *VAR_6)
{
 struct drm_encoder *VAR_7 = &VAR_6->base;
 struct drm_i915_private *VAR_8 = VAR_7->dev->dev_private;
 enum port VAR_9 = FUNC_6(VAR_6);
 int VAR_10 = VAR_6->type;
 uint32_t VAR_11;
 bool VAR_12 = 0;

 VAR_11 = FUNC_2(FUNC_0(VAR_9));
 if (VAR_11 & VAR_0) {
  VAR_11 &= ~VAR_0;
  FUNC_3(FUNC_0(VAR_9), VAR_11);
  VAR_12 = 1;
 }

 VAR_11 = FUNC_2(FUNC_1(VAR_9));
 VAR_11 &= ~(VAR_1 | VAR_2);
 VAR_11 |= VAR_3;
 FUNC_3(FUNC_1(VAR_9), VAR_11);

 if (VAR_12)
  FUNC_7(VAR_8, VAR_9);

 if (VAR_10 == VAR_4) {
  struct intel_dp *VAR_13 = FUNC_5(VAR_7);
  FUNC_9(VAR_13);
  FUNC_8(VAR_13);
 }

 FUNC_3(FUNC_4(VAR_9), VAR_5);
}
