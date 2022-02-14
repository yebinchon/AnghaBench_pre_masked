
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_gmbus {int adapter; } ;
struct drm_i915_private {struct intel_gmbus* gmbus; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct drm_device *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_1->dev_private;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct intel_gmbus *VAR_4 = &VAR_2->gmbus[VAR_3];
  FUNC_0(&VAR_4->adapter);
 }
}
