
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct intel_ring_buffer {int space; int head; struct drm_device* dev; } ;
struct TYPE_8__ {int interruptible; } ;
struct drm_i915_private {TYPE_4__ mm; int gpu_error; } ;
struct drm_i915_master_private {TYPE_3__* sarea_priv; } ;
struct drm_device {TYPE_2__* primary; struct drm_i915_private* dev_private; } ;
struct TYPE_7__ {int perf_boxes; } ;
struct TYPE_6__ {TYPE_1__* master; } ;
struct TYPE_5__ {struct drm_i915_master_private* driver_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct intel_ring_buffer*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct intel_ring_buffer*,int) ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct intel_ring_buffer*) ;
 int FUNC_5 (int,unsigned long) ;
 int FUNC_6 (struct intel_ring_buffer*) ;
 int FUNC_7 (struct intel_ring_buffer*) ;

__attribute__((used)) static int FUNC_8(struct intel_ring_buffer *VAR_5, int VAR_6)
{
 struct drm_device *VAR_7 = VAR_5->dev;
 struct drm_i915_private *VAR_8 = VAR_7->dev_private;
 unsigned long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_5, VAR_6);
 if (VAR_10 != -VAR_1)
  return VAR_10;

 FUNC_6(VAR_5);





 VAR_9 = VAR_4 + 60 * VAR_2;

 do {
  VAR_5->head = FUNC_0(VAR_5);
  VAR_5->space = FUNC_4(VAR_5);
  if (VAR_5->space >= VAR_6) {
   FUNC_7(VAR_5);
   return 0;
  }

  if (VAR_7->primary->master) {
   struct drm_i915_master_private *VAR_11 = VAR_7->primary->master->driver_priv;
   if (VAR_11->sarea_priv)
    VAR_11->sarea_priv->perf_boxes |= VAR_3;
  }

  FUNC_3(1);

  VAR_10 = FUNC_1(&VAR_8->gpu_error,
        VAR_8->mm.interruptible);
  if (VAR_10)
   return VAR_10;
 } while (!FUNC_5(VAR_4, VAR_9));
 FUNC_7(VAR_5);
 return -VAR_0;
}
