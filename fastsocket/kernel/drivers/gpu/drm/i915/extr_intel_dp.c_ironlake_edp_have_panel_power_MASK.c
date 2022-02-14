
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct drm_device* FUNC_1 (struct intel_dp*) ;

__attribute__((used)) static bool FUNC_2(struct intel_dp *VAR_2)
{
 struct drm_device *VAR_3 = FUNC_1(VAR_2);
 struct drm_i915_private *VAR_4 = VAR_3->dev_private;

 return (FUNC_0(VAR_0) & VAR_1) != 0;
}
