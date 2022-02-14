
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct b43legacy_wldev {int irq_mask; int* dma_reason; int irq_reason; TYPE_1__* wl; int isr_tasklet; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int irq_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct b43legacy_wldev*,int) ;
 int FUNC_2 (struct b43legacy_wldev*,int ) ;
 scalar_t__ FUNC_3 (struct b43legacy_wldev*) ;
 int FUNC_4 (struct b43legacy_wldev*,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_11, void *VAR_12)
{
 irqreturn_t VAR_13 = VAR_10;
 struct b43legacy_wldev *VAR_14 = VAR_12;
 u32 VAR_15;

 FUNC_0(!VAR_14);

 FUNC_6(&VAR_14->wl->irq_lock);

 if (FUNC_9(FUNC_3(VAR_14) < VAR_8))

  goto out;
 VAR_15 = FUNC_2(VAR_14, VAR_7);
 if (VAR_15 == 0xffffffff)
  goto out;
 VAR_13 = VAR_9;
 VAR_15 &= VAR_14->irq_mask;
 if (!VAR_15)
  goto out;

 VAR_14->dma_reason[0] = FUNC_2(VAR_14,
           VAR_0)
           & 0x0001DC00;
 VAR_14->dma_reason[1] = FUNC_2(VAR_14,
           VAR_1)
           & 0x0000DC00;
 VAR_14->dma_reason[2] = FUNC_2(VAR_14,
           VAR_2)
           & 0x0000DC00;
 VAR_14->dma_reason[3] = FUNC_2(VAR_14,
           VAR_3)
           & 0x0001DC00;
 VAR_14->dma_reason[4] = FUNC_2(VAR_14,
           VAR_4)
           & 0x0000DC00;
 VAR_14->dma_reason[5] = FUNC_2(VAR_14,
           VAR_5)
           & 0x0000DC00;

 FUNC_1(VAR_14, VAR_15);

 FUNC_4(VAR_14, VAR_6, 0);

 VAR_14->irq_reason = VAR_15;
 FUNC_8(&VAR_14->isr_tasklet);
out:
 FUNC_5();
 FUNC_7(&VAR_14->wl->irq_lock);

 return VAR_13;
}
