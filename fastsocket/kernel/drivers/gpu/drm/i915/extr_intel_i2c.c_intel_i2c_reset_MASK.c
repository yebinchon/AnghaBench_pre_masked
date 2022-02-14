
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {scalar_t__ gpio_mmio_base; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;

void
FUNC_1(struct drm_device *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2->dev_private;
 FUNC_0(VAR_3->gpio_mmio_base + VAR_0, 0);
 FUNC_0(VAR_3->gpio_mmio_base + VAR_1, 0);
}
