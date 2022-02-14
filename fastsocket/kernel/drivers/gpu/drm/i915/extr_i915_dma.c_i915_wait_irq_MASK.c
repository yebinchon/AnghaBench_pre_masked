
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct intel_ring_buffer {int (* irq_put ) (struct intel_ring_buffer*) ;int irq_queue; scalar_t__ (* irq_get ) (struct intel_ring_buffer*) ;} ;
struct drm_i915_master_private {TYPE_3__* sarea_priv; } ;
struct drm_device {TYPE_2__* primary; scalar_t__ dev_private; } ;
struct TYPE_11__ {scalar_t__ counter; } ;
struct TYPE_12__ {TYPE_4__ dri1; } ;
typedef TYPE_5__ drm_i915_private_t ;
struct TYPE_10__ {int last_dispatch; int perf_boxes; } ;
struct TYPE_9__ {TYPE_1__* master; } ;
struct TYPE_8__ {struct drm_i915_master_private* driver_priv; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_2 (int,int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct intel_ring_buffer* FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (struct intel_ring_buffer*) ;
 int FUNC_6 (struct intel_ring_buffer*) ;
 scalar_t__ FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct drm_device * VAR_3, int VAR_4)
{
 drm_i915_private_t *VAR_5 = (drm_i915_private_t *) VAR_3->dev_private;
 struct drm_i915_master_private *VAR_6 = VAR_3->primary->master->driver_priv;
 int VAR_7 = 0;
 struct intel_ring_buffer *VAR_8 = FUNC_3(VAR_5);

 FUNC_0("irq_nr=%d breadcrumb=%d\n", VAR_4,
    FUNC_4(VAR_5));

 if (FUNC_4(VAR_5) >= VAR_4) {
  if (VAR_6->sarea_priv)
   VAR_6->sarea_priv->last_dispatch = FUNC_4(VAR_5);
  return 0;
 }

 if (VAR_6->sarea_priv)
  VAR_6->sarea_priv->perf_boxes |= VAR_2;

 if (VAR_8->irq_get(VAR_8)) {
  FUNC_2(VAR_7, VAR_8->irq_queue, 3 * VAR_0,
       FUNC_4(VAR_5) >= VAR_4);
  VAR_8->irq_put(VAR_8);
 } else if (FUNC_7(FUNC_4(VAR_5) >= VAR_4, 3000))
  VAR_7 = -VAR_1;

 if (VAR_7 == -VAR_1) {
  FUNC_1("EBUSY -- rec: %d emitted: %d\n",
     FUNC_4(VAR_5), (int)VAR_5->dri1.counter);
 }

 return VAR_7;
}
