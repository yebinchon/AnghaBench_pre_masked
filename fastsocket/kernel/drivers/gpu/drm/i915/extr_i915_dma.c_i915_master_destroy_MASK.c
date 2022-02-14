
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_master {struct drm_i915_master_private* driver_priv; } ;
struct drm_i915_master_private {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_i915_master_private*) ;

void FUNC_1(struct drm_device *VAR_0, struct drm_master *VAR_1)
{
 struct drm_i915_master_private *VAR_2 = VAR_1->driver_priv;

 if (!VAR_2)
  return;

 FUNC_0(VAR_2);

 VAR_1->driver_priv = ((void*)0);
}
