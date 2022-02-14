
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_long ;
typedef int u_char ;
struct TYPE_8__ {int int_m2; int int_m1; scalar_t__ nt_timer; int ctmt; int int_s1; scalar_t__ bswapped; scalar_t__ nt_mode; } ;
struct TYPE_9__ {TYPE_3__ hfcpci; } ;
struct TYPE_6__ {int ph_state; } ;
struct TYPE_7__ {TYPE_1__ hfcpci; } ;
struct IsdnCardState {int debug; int lock; TYPE_4__ hw; int HW_Flags; scalar_t__ tx_cnt; int sq; TYPE_5__* tx_skb; int dbusytimer; scalar_t__ logecho; TYPE_2__ dc; } ;
struct BCState {int channel; int squeue; void* tx_skb; } ;
typedef int irqreturn_t ;
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct IsdnCardState*,int ) ;
 struct BCState* FUNC_1 (struct IsdnCardState*,int) ;
 int FUNC_2 (struct IsdnCardState*,int ,int) ;
 int FUNC_3 (struct IsdnCardState*,char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (struct IsdnCardState*) ;
 int FUNC_7 (struct BCState*) ;
 int FUNC_8 (struct BCState*,int ) ;
 int FUNC_9 (struct BCState*) ;
 int FUNC_10 (struct IsdnCardState*) ;
 int FUNC_11 (struct IsdnCardState*) ;
 int FUNC_12 (struct IsdnCardState*,int ) ;
 void* FUNC_13 (int *) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int ) ;
 scalar_t__ FUNC_16 (int ,int *) ;
 int FUNC_17 (int ,int *) ;
 scalar_t__ FUNC_18 (int ,int *) ;

__attribute__((used)) static irqreturn_t
FUNC_19(int VAR_16, void *VAR_17)
{
 u_long VAR_18;
 struct IsdnCardState *VAR_19 = VAR_17;
 u_char VAR_20;
 struct BCState *VAR_21;
 int VAR_22 = 15;
 u_char VAR_23, VAR_24;

 if (!(VAR_19->hw.hfcpci.int_m2 & 0x08)) {
  FUNC_3(VAR_19, "HFC-PCI: int_m2 %x not initialised", VAR_19->hw.hfcpci.int_m2);
  return VAR_14;
 }
 FUNC_14(&VAR_19->lock, VAR_18);
 if (VAR_7 & (VAR_24 = FUNC_0(VAR_19, VAR_12))) {
  VAR_23 = FUNC_0(VAR_19, VAR_10);
  if (VAR_19->debug & VAR_15)
   FUNC_3(VAR_19, "HFC-PCI: stat(%02x) s1(%02x)", VAR_24, VAR_23);
 } else {
  FUNC_15(&VAR_19->lock, VAR_18);
  return VAR_14;
 }
 if (VAR_19->debug & VAR_15)
  FUNC_3(VAR_19, "HFC-PCI irq %x %s", VAR_23,
   FUNC_18(VAR_6, &VAR_19->HW_Flags) ?
   "locked" : "unlocked");
 VAR_23 &= VAR_19->hw.hfcpci.int_m1;
 if (VAR_23 & 0x40) {
  VAR_20 = FUNC_0(VAR_19, VAR_11) & 0xf;
  if (VAR_19->debug & VAR_15)
   FUNC_3(VAR_19, "ph_state chg %d->%d", VAR_19->dc.hfcpci.ph_state,
    VAR_20);
  VAR_19->dc.hfcpci.ph_state = VAR_20;
  FUNC_12(VAR_19, VAR_2);
  VAR_23 &= ~0x40;
 }
 if (VAR_23 & 0x80) {
  if (VAR_19->hw.hfcpci.nt_mode) {
   if ((--VAR_19->hw.hfcpci.nt_timer) < 0)
    FUNC_12(VAR_19, VAR_2);
  }
  VAR_23 &= ~0x80;
  FUNC_2(VAR_19, VAR_9, VAR_19->hw.hfcpci.ctmt | VAR_8);
 }
 while (VAR_23) {
  if (FUNC_18(VAR_6, &VAR_19->HW_Flags)) {
   VAR_19->hw.hfcpci.int_s1 |= VAR_23;
   FUNC_15(&VAR_19->lock, VAR_18);
   return VAR_13;
  }
  if (VAR_19->hw.hfcpci.int_s1 & 0x18) {
   VAR_20 = VAR_23;
   VAR_23 = VAR_19->hw.hfcpci.int_s1;
   VAR_19->hw.hfcpci.int_s1 = VAR_20;
  }
  if (VAR_23 & 0x08) {
   if (!(VAR_21 = FUNC_1(VAR_19, VAR_19->hw.hfcpci.bswapped ? 1 : 0))) {
    if (VAR_19->debug)
     FUNC_3(VAR_19, "hfcpci spurious 0x08 IRQ");
   } else
    FUNC_9(VAR_21);
  }
  if (VAR_23 & 0x10) {
   if (VAR_19->logecho)
    FUNC_11(VAR_19);
   else if (!(VAR_21 = FUNC_1(VAR_19, 1))) {
    if (VAR_19->debug)
     FUNC_3(VAR_19, "hfcpci spurious 0x10 IRQ");
   } else
    FUNC_9(VAR_21);
  }
  if (VAR_23 & 0x01) {
   if (!(VAR_21 = FUNC_1(VAR_19, VAR_19->hw.hfcpci.bswapped ? 1 : 0))) {
    if (VAR_19->debug)
     FUNC_3(VAR_19, "hfcpci spurious 0x01 IRQ");
   } else {
    if (VAR_21->tx_skb) {
     if (!FUNC_17(VAR_6, &VAR_19->HW_Flags)) {
      FUNC_7(VAR_21);
      FUNC_16(VAR_6, &VAR_19->HW_Flags);
     } else
      FUNC_3(VAR_19, "fill_data %d blocked", VAR_21->channel);
    } else {
     if ((VAR_21->tx_skb = FUNC_13(&VAR_21->squeue))) {
      if (!FUNC_17(VAR_6, &VAR_19->HW_Flags)) {
       FUNC_7(VAR_21);
       FUNC_16(VAR_6, &VAR_19->HW_Flags);
      } else
       FUNC_3(VAR_19, "fill_data %d blocked", VAR_21->channel);
     } else {
      FUNC_8(VAR_21, VAR_0);
     }
    }
   }
  }
  if (VAR_23 & 0x02) {
   if (!(VAR_21 = FUNC_1(VAR_19, 1))) {
    if (VAR_19->debug)
     FUNC_3(VAR_19, "hfcpci spurious 0x02 IRQ");
   } else {
    if (VAR_21->tx_skb) {
     if (!FUNC_17(VAR_6, &VAR_19->HW_Flags)) {
      FUNC_7(VAR_21);
      FUNC_16(VAR_6, &VAR_19->HW_Flags);
     } else
      FUNC_3(VAR_19, "fill_data %d blocked", VAR_21->channel);
    } else {
     if ((VAR_21->tx_skb = FUNC_13(&VAR_21->squeue))) {
      if (!FUNC_17(VAR_6, &VAR_19->HW_Flags)) {
       FUNC_7(VAR_21);
       FUNC_16(VAR_6, &VAR_19->HW_Flags);
      } else
       FUNC_3(VAR_19, "fill_data %d blocked", VAR_21->channel);
     } else {
      FUNC_8(VAR_21, VAR_0);
     }
    }
   }
  }
  if (VAR_23 & 0x20) {
   FUNC_10(VAR_19);
  }
  if (VAR_23 & 0x04) {
   if (FUNC_16(VAR_4, &VAR_19->HW_Flags))
    FUNC_4(&VAR_19->dbusytimer);
   if (FUNC_16(VAR_5, &VAR_19->HW_Flags))
    FUNC_12(VAR_19, VAR_1);
   if (VAR_19->tx_skb) {
    if (VAR_19->tx_skb->len) {
     if (!FUNC_17(VAR_6, &VAR_19->HW_Flags)) {
      FUNC_6(VAR_19);
      FUNC_16(VAR_6, &VAR_19->HW_Flags);
     } else {
      FUNC_3(VAR_19, "hfcpci_fill_dfifo irq blocked");
     }
     goto afterXPR;
    } else {
     FUNC_5(VAR_19->tx_skb);
     VAR_19->tx_cnt = 0;
     VAR_19->tx_skb = ((void*)0);
    }
   }
   if ((VAR_19->tx_skb = FUNC_13(&VAR_19->sq))) {
    VAR_19->tx_cnt = 0;
    if (!FUNC_17(VAR_6, &VAR_19->HW_Flags)) {
     FUNC_6(VAR_19);
     FUNC_16(VAR_6, &VAR_19->HW_Flags);
    } else {
     FUNC_3(VAR_19, "hfcpci_fill_dfifo irq blocked");
    }
   } else
    FUNC_12(VAR_19, VAR_3);
  }
       afterXPR:
  if (VAR_19->hw.hfcpci.int_s1 && VAR_22--) {
   VAR_23 = VAR_19->hw.hfcpci.int_s1;
   VAR_19->hw.hfcpci.int_s1 = 0;
   if (VAR_19->debug & VAR_15)
    FUNC_3(VAR_19, "HFC-PCI irq %x loop %d", VAR_23, 15 - VAR_22);
  } else
   VAR_23 = 0;
 }
 FUNC_15(&VAR_19->lock, VAR_18);
 return VAR_13;
}
