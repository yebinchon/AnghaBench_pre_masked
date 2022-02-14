
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {struct drm_device* dev; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct intel_sdvo {scalar_t__ sdvo_reg; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_2(struct intel_sdvo *VAR_3, u32 VAR_4)
{
 struct drm_device *VAR_5 = VAR_3->base.base.dev;
 struct drm_i915_private *VAR_6 = VAR_5->dev_private;
 u32 VAR_7 = VAR_4, VAR_8 = VAR_4;
 int VAR_9;

 if (VAR_3->sdvo_reg == VAR_0) {
  FUNC_1(VAR_3->sdvo_reg, VAR_4);
  FUNC_0(VAR_3->sdvo_reg);
  return;
 }

 if (VAR_3->sdvo_reg == VAR_1) {
  VAR_8 = FUNC_0(VAR_2);
 } else {
  VAR_7 = FUNC_0(VAR_1);
 }





 for (VAR_9 = 0; VAR_9 < 2; VAR_9++)
 {
  FUNC_1(VAR_1, VAR_7);
  FUNC_0(VAR_1);
  FUNC_1(VAR_2, VAR_8);
  FUNC_0(VAR_2);
 }
}
