
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int rx_ring3; int rx_ring0; } ;
struct TYPE_6__ {int queue3; int queue0; } ;
struct TYPE_5__ {int txerr_cnt; } ;
struct b43legacy_wldev {int* dma_reason; int irq_reason; TYPE_4__* wl; int irq_mask; TYPE_3__ dma; TYPE_2__ pio; TYPE_1__ phy; } ;
struct TYPE_8__ {int irq_lock; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct b43legacy_wldev*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct b43legacy_wldev*) ;
 scalar_t__ FUNC_7 (struct b43legacy_wldev*) ;
 int FUNC_8 (struct b43legacy_wldev*,int ,int ) ;
 int FUNC_9 (TYPE_4__*,char*,...) ;
 int FUNC_10 (struct b43legacy_wldev*) ;
 int FUNC_11 (struct b43legacy_wldev*) ;
 int FUNC_12 (struct b43legacy_wldev*) ;
 int FUNC_13 (struct b43legacy_wldev*) ;
 int FUNC_14 (struct b43legacy_wldev*) ;
 int FUNC_15 (struct b43legacy_wldev*) ;
 int FUNC_16 (struct b43legacy_wldev*) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 (int *,unsigned long) ;
 int FUNC_20 (int *,unsigned long) ;
 scalar_t__ FUNC_21 (int) ;

__attribute__((used)) static void FUNC_22(struct b43legacy_wldev *VAR_15)
{
 u32 VAR_16;
 u32 VAR_17[FUNC_0(VAR_15->dma_reason)];
 u32 VAR_18 = 0;
 int VAR_19;
 unsigned long VAR_20;

 FUNC_19(&VAR_15->wl->irq_lock, VAR_20);

 FUNC_1(FUNC_6(VAR_15) <
     VAR_14);

 VAR_16 = VAR_15->irq_reason;
 for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_17); VAR_19++) {
  VAR_17[VAR_19] = VAR_15->dma_reason[VAR_19];
  VAR_18 |= VAR_17[VAR_19];
 }

 if (FUNC_21(VAR_16 & VAR_5))
  FUNC_9(VAR_15->wl, "MAC transmission error\n");

 if (FUNC_21(VAR_16 & VAR_7)) {
  FUNC_9(VAR_15->wl, "PHY transmission error\n");
  FUNC_18();
  if (FUNC_21(FUNC_2(&VAR_15->phy.txerr_cnt))) {
   FUNC_9(VAR_15->wl, "Too many PHY TX errors, "
           "restarting the controller\n");
   FUNC_3(VAR_15, "PHY TX errors");
  }
 }

 if (FUNC_21(VAR_18 & (VAR_0 |
       VAR_1))) {
  if (VAR_18 & VAR_0) {
   FUNC_9(VAR_15->wl, "Fatal DMA error: "
          "0x%08X, 0x%08X, 0x%08X, "
          "0x%08X, 0x%08X, 0x%08X\n",
          VAR_17[0], VAR_17[1],
          VAR_17[2], VAR_17[3],
          VAR_17[4], VAR_17[5]);
   FUNC_3(VAR_15, "DMA error");
   FUNC_17();
   FUNC_20(&VAR_15->wl->irq_lock, VAR_20);
   return;
  }
  if (VAR_18 & VAR_1)
   FUNC_9(VAR_15->wl, "DMA error: "
          "0x%08X, 0x%08X, 0x%08X, "
          "0x%08X, 0x%08X, 0x%08X\n",
          VAR_17[0], VAR_17[1],
          VAR_17[2], VAR_17[3],
          VAR_17[4], VAR_17[5]);
 }

 if (FUNC_21(VAR_16 & VAR_12))
  FUNC_16(VAR_15);
 if (VAR_16 & VAR_9)
  FUNC_14(VAR_15);
 if (VAR_16 & VAR_3)
  FUNC_10(VAR_15);
 if (VAR_16 & VAR_4)
  FUNC_11(VAR_15);
 if (VAR_16 & VAR_8)
  FUNC_13(VAR_15);
 if (VAR_16 & VAR_10)
  ;
 if (VAR_16 & VAR_6)
  FUNC_12(VAR_15);


 if (VAR_17[0] & VAR_2) {
  if (FUNC_7(VAR_15))
   FUNC_5(VAR_15->pio.queue0);
  else
   FUNC_4(VAR_15->dma.rx_ring0);
 }
 FUNC_1(VAR_17[1] & VAR_2);
 FUNC_1(VAR_17[2] & VAR_2);
 if (VAR_17[3] & VAR_2) {
  if (FUNC_7(VAR_15))
   FUNC_5(VAR_15->pio.queue3);
  else
   FUNC_4(VAR_15->dma.rx_ring3);
 }
 FUNC_1(VAR_17[4] & VAR_2);
 FUNC_1(VAR_17[5] & VAR_2);

 if (VAR_16 & VAR_11)
  FUNC_15(VAR_15);

 FUNC_8(VAR_15, VAR_13, VAR_15->irq_mask);
 FUNC_17();
 FUNC_20(&VAR_15->wl->irq_lock, VAR_20);
}
