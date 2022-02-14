
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_gmbus {int gpio_reg; struct drm_i915_private* dev_priv; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct intel_gmbus*) ;

__attribute__((used)) static int FUNC_3(void *VAR_2)
{
 struct intel_gmbus *VAR_3 = VAR_2;
 struct drm_i915_private *VAR_4 = VAR_3->dev_priv;
 u32 VAR_5 = FUNC_2(VAR_3);
 FUNC_1(VAR_3->gpio_reg, VAR_5 | VAR_0);
 FUNC_1(VAR_3->gpio_reg, VAR_5);
 return (FUNC_0(VAR_3->gpio_reg) & VAR_1) != 0;
}
