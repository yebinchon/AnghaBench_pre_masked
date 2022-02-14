
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct drm_i915_master_private {TYPE_1__* sarea_priv; } ;
struct drm_device {TYPE_4__* primary; TYPE_5__* dev_private; } ;
struct TYPE_7__ {int counter; } ;
struct TYPE_10__ {TYPE_2__ dri1; } ;
typedef TYPE_5__ drm_i915_private_t ;
struct TYPE_9__ {TYPE_3__* master; } ;
struct TYPE_8__ {struct drm_i915_master_private* driver_priv; } ;
struct TYPE_6__ {int last_enqueue; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_3)
{
 drm_i915_private_t *VAR_4 = VAR_3->dev_private;
 struct drm_i915_master_private *VAR_5 = VAR_3->primary->master->driver_priv;

 VAR_4->dri1.counter++;
 if (VAR_4->dri1.counter > 0x7FFFFFFFUL)
  VAR_4->dri1.counter = 0;
 if (VAR_5->sarea_priv)
  VAR_5->sarea_priv->last_enqueue = VAR_4->dri1.counter;

 if (FUNC_1(4) == 0) {
  FUNC_2(VAR_1);
  FUNC_2(VAR_0 << VAR_2);
  FUNC_2(VAR_4->dri1.counter);
  FUNC_2(0);
  FUNC_0();
 }
}
