
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int gmbus_wait_queue; } ;
struct drm_device {scalar_t__ dev_private; } ;
typedef struct drm_i915_private drm_i915_private_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct drm_device *VAR_0)
{
 struct drm_i915_private *VAR_1 = (drm_i915_private_t *) VAR_0->dev_private;

 FUNC_0(&VAR_1->gmbus_wait_queue);
}
