
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct drm_i915_master_private {TYPE_3__* sarea_priv; } ;
struct drm_device {TYPE_2__* primary; TYPE_5__* dev_private; } ;
struct TYPE_9__ {int counter; } ;
struct TYPE_10__ {TYPE_4__ dri1; } ;
typedef TYPE_5__ drm_i915_private_t ;
struct TYPE_8__ {int last_enqueue; } ;
struct TYPE_7__ {TYPE_1__* master; } ;
struct TYPE_6__ {struct drm_i915_master_private* driver_priv; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct drm_device*) ;

__attribute__((used)) static int FUNC_5(struct drm_device * VAR_4)
{
 drm_i915_private_t *VAR_5 = VAR_4->dev_private;
 struct drm_i915_master_private *VAR_6 = VAR_4->primary->master->driver_priv;

 FUNC_4(VAR_4);

 FUNC_2("\n");

 VAR_5->dri1.counter++;
 if (VAR_5->dri1.counter > 0x7FFFFFFFUL)
  VAR_5->dri1.counter = 1;
 if (VAR_6->sarea_priv)
  VAR_6->sarea_priv->last_enqueue = VAR_5->dri1.counter;

 if (FUNC_1(4) == 0) {
  FUNC_3(VAR_1);
  FUNC_3(VAR_0 << VAR_2);
  FUNC_3(VAR_5->dri1.counter);
  FUNC_3(VAR_3);
  FUNC_0();
 }

 return VAR_5->dri1.counter;
}
