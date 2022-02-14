
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_8__ {int int_m1; int int_s1; } ;
struct TYPE_9__ {TYPE_3__ hfcD; } ;
struct TYPE_6__ {int ph_state; } ;
struct TYPE_7__ {TYPE_1__ hfcd; } ;
struct IsdnCardState {int debug; int (* readisac ) (struct IsdnCardState*,int ) ;TYPE_4__ hw; int HW_Flags; scalar_t__ tx_cnt; int sq; TYPE_5__* tx_skb; int dbusytimer; int channel; int squeue; TYPE_2__ dc; } ;
struct BCState {int debug; int (* readisac ) (struct IsdnCardState*,int ) ;TYPE_4__ hw; int HW_Flags; scalar_t__ tx_cnt; int sq; TYPE_5__* tx_skb; int dbusytimer; int channel; int squeue; TYPE_2__ dc; } ;
struct TYPE_10__ {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct IsdnCardState* FUNC_0 (struct IsdnCardState*,int) ;
 int FUNC_1 (struct IsdnCardState*,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (struct IsdnCardState*) ;
 int FUNC_5 (struct IsdnCardState*) ;
 int FUNC_6 (struct IsdnCardState*) ;
 int FUNC_7 (struct IsdnCardState*) ;
 int FUNC_8 (struct IsdnCardState*,int ) ;
 void* FUNC_9 (int *) ;
 int FUNC_10 (struct IsdnCardState*,int ) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;

void
FUNC_14(struct IsdnCardState *VAR_9, u_char VAR_10)
{
        u_char VAR_11;
        struct BCState *VAR_12;
 int VAR_13=15;

 if (VAR_9->debug & VAR_8)
  FUNC_1(VAR_9, "HFCD irq %x %s", VAR_10,
   FUNC_13(VAR_6, &VAR_9->HW_Flags) ?
   "locked" : "unlocked");
 VAR_10 &= VAR_9->hw.hfcD.int_m1;
 if (VAR_10 & 0x40) {
  VAR_11 = VAR_9->readisac(VAR_9, VAR_7) & 0xf;
  if (VAR_9->debug & VAR_8)
   FUNC_1(VAR_9, "ph_state chg %d->%d", VAR_9->dc.hfcd.ph_state,
    VAR_11);
  VAR_9->dc.hfcd.ph_state = VAR_11;
  FUNC_8(VAR_9, VAR_2);
  VAR_10 &= ~0x40;
 }
 while (VAR_10) {
  if (FUNC_13(VAR_6, &VAR_9->HW_Flags)) {
   VAR_9->hw.hfcD.int_s1 |= VAR_10;
   return;
  }
  if (VAR_9->hw.hfcD.int_s1 & 0x18) {
   VAR_11 = VAR_10;
   VAR_10 = VAR_9->hw.hfcD.int_s1;
   VAR_9->hw.hfcD.int_s1 = VAR_11;
  }
  if (VAR_10 & 0x08) {
   if (!(VAR_12=FUNC_0(VAR_9, 0))) {
    if (VAR_9->debug)
     FUNC_1(VAR_9, "hfcd spurious 0x08 IRQ");
   } else
    FUNC_6(VAR_12);
  }
  if (VAR_10 & 0x10) {
   if (!(VAR_12=FUNC_0(VAR_9, 1))) {
    if (VAR_9->debug)
     FUNC_1(VAR_9, "hfcd spurious 0x10 IRQ");
   } else
    FUNC_6(VAR_12);
  }
  if (VAR_10 & 0x01) {
   if (!(VAR_12=FUNC_0(VAR_9, 0))) {
    if (VAR_9->debug)
     FUNC_1(VAR_9, "hfcd spurious 0x01 IRQ");
   } else {
    if (VAR_12->tx_skb) {
     if (!FUNC_12(VAR_6, &VAR_9->HW_Flags)) {
      FUNC_5(VAR_12);
      FUNC_11(VAR_6, &VAR_9->HW_Flags);
     } else
      FUNC_1(VAR_9,"fill_data %d blocked", VAR_12->channel);
    } else {
     if ((VAR_12->tx_skb = FUNC_9(&VAR_12->squeue))) {
      if (!FUNC_12(VAR_6, &VAR_9->HW_Flags)) {
       FUNC_5(VAR_12);
       FUNC_11(VAR_6, &VAR_9->HW_Flags);
      } else
       FUNC_1(VAR_9,"fill_data %d blocked", VAR_12->channel);
     } else {
      FUNC_8(VAR_12, VAR_0);
     }
    }
   }
  }
  if (VAR_10 & 0x02) {
   if (!(VAR_12=FUNC_0(VAR_9, 1))) {
    if (VAR_9->debug)
     FUNC_1(VAR_9, "hfcd spurious 0x02 IRQ");
   } else {
    if (VAR_12->tx_skb) {
     if (!FUNC_12(VAR_6, &VAR_9->HW_Flags)) {
      FUNC_5(VAR_12);
      FUNC_11(VAR_6, &VAR_9->HW_Flags);
     } else
      FUNC_1(VAR_9,"fill_data %d blocked", VAR_12->channel);
    } else {
     if ((VAR_12->tx_skb = FUNC_9(&VAR_12->squeue))) {
      if (!FUNC_12(VAR_6, &VAR_9->HW_Flags)) {
       FUNC_5(VAR_12);
       FUNC_11(VAR_6, &VAR_9->HW_Flags);
      } else
       FUNC_1(VAR_9,"fill_data %d blocked", VAR_12->channel);
     } else {
      FUNC_8(VAR_12, VAR_0);
     }
    }
   }
  }
  if (VAR_10 & 0x20) {
   FUNC_7(VAR_9);
  }
  if (VAR_10 & 0x04) {
   if (FUNC_11(VAR_4, &VAR_9->HW_Flags))
    FUNC_2(&VAR_9->dbusytimer);
   if (FUNC_11(VAR_5, &VAR_9->HW_Flags))
    FUNC_8(VAR_9, VAR_1);
   if (VAR_9->tx_skb) {
    if (VAR_9->tx_skb->len) {
     if (!FUNC_12(VAR_6, &VAR_9->HW_Flags)) {
      FUNC_4(VAR_9);
      FUNC_11(VAR_6, &VAR_9->HW_Flags);
     } else {
      FUNC_1(VAR_9, "hfc_fill_dfifo irq blocked");
     }
     goto afterXPR;
    } else {
     FUNC_3(VAR_9->tx_skb);
     VAR_9->tx_cnt = 0;
     VAR_9->tx_skb = ((void*)0);
    }
   }
   if ((VAR_9->tx_skb = FUNC_9(&VAR_9->sq))) {
    VAR_9->tx_cnt = 0;
    if (!FUNC_12(VAR_6, &VAR_9->HW_Flags)) {
     FUNC_4(VAR_9);
     FUNC_11(VAR_6, &VAR_9->HW_Flags);
    } else {
     FUNC_1(VAR_9, "hfc_fill_dfifo irq blocked");
    }
   } else
    FUNC_8(VAR_9, VAR_3);
  }
      afterXPR:
  if (VAR_9->hw.hfcD.int_s1 && VAR_13--) {
   VAR_10 = VAR_9->hw.hfcD.int_s1;
   VAR_9->hw.hfcD.int_s1 = 0;
   if (VAR_9->debug & VAR_8)
    FUNC_1(VAR_9, "HFCD irq %x loop %d", VAR_10, 15-VAR_13);
  } else
   VAR_10 = 0;
 }
}
