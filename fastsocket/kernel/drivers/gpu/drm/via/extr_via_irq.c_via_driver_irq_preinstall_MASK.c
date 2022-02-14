
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_4__ {int irq_enable_mask; int irq_pending_mask; scalar_t__ chipset; int** irq_masks; int num_irqs; scalar_t__ last_vblank_valid; int irq_map; TYPE_2__* via_irqs; } ;
typedef TYPE_1__ drm_via_private_t ;
struct TYPE_5__ {int enable_mask; int pending_mask; int irq_queue; int irq_received; } ;
typedef TYPE_2__ drm_via_irq_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int** VAR_9 ;
 int** VAR_10 ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(struct drm_device *VAR_11)
{
 drm_via_private_t *VAR_12 = (drm_via_private_t *) VAR_11->dev_private;
 u32 VAR_13;
 drm_via_irq_t *VAR_14;
 int VAR_15;

 FUNC_0("dev_priv: %p\n", VAR_12);
 if (VAR_12) {
  VAR_14 = VAR_12->via_irqs;

  VAR_12->irq_enable_mask = VAR_1;
  VAR_12->irq_pending_mask = VAR_2;

  if (VAR_12->chipset == VAR_3 ||
      VAR_12->chipset == VAR_0) {
   VAR_12->irq_masks = VAR_9;
   VAR_12->num_irqs = VAR_7;
   VAR_12->irq_map = VAR_5;
  } else {
   VAR_12->irq_masks = VAR_10;
   VAR_12->num_irqs = VAR_8;
   VAR_12->irq_map = VAR_6;
  }

  for (VAR_15 = 0; VAR_15 < VAR_12->num_irqs; ++VAR_15) {
   FUNC_4(&VAR_14->irq_received, 0);
   VAR_14->enable_mask = VAR_12->irq_masks[VAR_15][0];
   VAR_14->pending_mask = VAR_12->irq_masks[VAR_15][1];
   FUNC_1(&VAR_14->irq_queue);
   VAR_12->irq_enable_mask |= VAR_14->enable_mask;
   VAR_12->irq_pending_mask |= VAR_14->pending_mask;
   VAR_14++;

   FUNC_0("Initializing IRQ %d\n", VAR_15);
  }

  VAR_12->last_vblank_valid = 0;


  VAR_13 = FUNC_2(VAR_4);
  FUNC_3(VAR_4, VAR_13 &
     ~(VAR_12->irq_enable_mask));


  FUNC_5(VAR_12);
 }
}
