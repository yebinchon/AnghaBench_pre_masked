
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_i915_master_private {TYPE_3__* sarea_priv; } ;
struct drm_device {TYPE_2__* primary; int * dev_private; } ;
typedef int drm_i915_private_t ;
struct TYPE_6__ {int last_dispatch; } ;
struct TYPE_5__ {TYPE_1__* master; } ;
struct TYPE_4__ {struct drm_i915_master_private* driver_priv; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct drm_device *VAR_0)
{
 drm_i915_private_t *VAR_1 = VAR_0->dev_private;
 struct drm_i915_master_private *VAR_2;

 if (VAR_0->primary->master) {
  VAR_2 = VAR_0->primary->master->driver_priv;
  if (VAR_2->sarea_priv)
   VAR_2->sarea_priv->last_dispatch =
    FUNC_0(VAR_1);
 }
}
