
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_ring_buffer {int head; int tail; scalar_t__ space; scalar_t__ size; } ;
struct drm_i915_master_private {TYPE_3__* sarea_priv; } ;
struct drm_device {TYPE_2__* primary; int * dev_private; } ;
typedef int drm_i915_private_t ;
struct TYPE_6__ {int perf_boxes; } ;
struct TYPE_5__ {TYPE_1__* master; } ;
struct TYPE_4__ {struct drm_i915_master_private* driver_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct intel_ring_buffer*) ;
 int FUNC_1 (struct intel_ring_buffer*) ;
 scalar_t__ VAR_3 ;
 struct intel_ring_buffer* FUNC_2 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct drm_device*,int ) ;

void FUNC_4(struct drm_device * VAR_5)
{
 drm_i915_private_t *VAR_6 = VAR_5->dev_private;
 struct drm_i915_master_private *VAR_7;
 struct intel_ring_buffer *VAR_8 = FUNC_2(VAR_6);





 if (FUNC_3(VAR_5, VAR_0))
  return;

 VAR_8->head = FUNC_0(VAR_8) & VAR_1;
 VAR_8->tail = FUNC_1(VAR_8) & VAR_4;
 VAR_8->space = VAR_8->head - (VAR_8->tail + VAR_3);
 if (VAR_8->space < 0)
  VAR_8->space += VAR_8->size;

 if (!VAR_5->primary->master)
  return;

 VAR_7 = VAR_5->primary->master->driver_priv;
 if (VAR_8->head == VAR_8->tail && VAR_7->sarea_priv)
  VAR_7->sarea_priv->perf_boxes |= VAR_2;
}
