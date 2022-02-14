
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
struct TYPE_9__ {TYPE_3__ hfcsx; } ;
struct TYPE_6__ {int ph_state; } ;
struct TYPE_7__ {TYPE_1__ hfcsx; } ;
struct IsdnCardState {int debug; int lock; TYPE_4__ hw; int HW_Flags; scalar_t__ tx_cnt; int sq; TYPE_5__* tx_skb; int dbusytimer; int channel; int squeue; scalar_t__ logecho; TYPE_2__ dc; } ;
struct BCState {int debug; int lock; TYPE_4__ hw; int HW_Flags; scalar_t__ tx_cnt; int sq; TYPE_5__* tx_skb; int dbusytimer; int channel; int squeue; scalar_t__ logecho; TYPE_2__ dc; } ;
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
 struct IsdnCardState* FUNC_1 (struct IsdnCardState*,int) ;
 int FUNC_2 (struct IsdnCardState*,int ,int) ;
 int FUNC_3 (struct IsdnCardState*,char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (struct IsdnCardState*) ;
 int FUNC_7 (struct IsdnCardState*) ;
 int FUNC_8 (struct IsdnCardState*) ;
 int FUNC_9 (struct IsdnCardState*) ;
 int FUNC_10 (struct IsdnCardState*) ;
 int FUNC_11 (struct IsdnCardState*,int ) ;
 void* FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 int FUNC_16 (int ,int *) ;
 scalar_t__ FUNC_17 (int ,int *) ;

__attribute__((used)) static irqreturn_t
FUNC_18(int VAR_16, void *VAR_17)
{
 struct IsdnCardState *VAR_18 = VAR_17;
 u_char VAR_19;
 struct BCState *VAR_20;
 int VAR_21 = 15;
 u_long VAR_22;
 u_char VAR_23, VAR_24;

 if (!(VAR_18->hw.hfcsx.int_m2 & 0x08))
  return VAR_14;

 FUNC_13(&VAR_18->lock, VAR_22);
 if (VAR_7 & (VAR_24 = FUNC_0(VAR_18, VAR_12))) {
  VAR_23 = FUNC_0(VAR_18, VAR_10);
  if (VAR_18->debug & VAR_15)
   FUNC_3(VAR_18, "HFC-SX: stat(%02x) s1(%02x)", VAR_24, VAR_23);
 } else {
  FUNC_14(&VAR_18->lock, VAR_22);
  return VAR_14;
 }
 if (VAR_18->debug & VAR_15)
  FUNC_3(VAR_18, "HFC-SX irq %x %s", VAR_23,
   FUNC_17(VAR_6, &VAR_18->HW_Flags) ?
   "locked" : "unlocked");
 VAR_23 &= VAR_18->hw.hfcsx.int_m1;
 if (VAR_23 & 0x40) {
  VAR_19 = FUNC_0(VAR_18, VAR_11) & 0xf;
  if (VAR_18->debug & VAR_15)
   FUNC_3(VAR_18, "ph_state chg %d->%d", VAR_18->dc.hfcsx.ph_state,
    VAR_19);
  VAR_18->dc.hfcsx.ph_state = VAR_19;
  FUNC_11(VAR_18, VAR_2);
  VAR_23 &= ~0x40;
 }
 if (VAR_23 & 0x80) {
  if (VAR_18->hw.hfcsx.nt_mode) {
   if ((--VAR_18->hw.hfcsx.nt_timer) < 0)
    FUNC_11(VAR_18, VAR_2);
  }
  VAR_23 &= ~0x80;
  FUNC_2(VAR_18, VAR_9, VAR_18->hw.hfcsx.ctmt | VAR_8);
 }
 while (VAR_23) {
  if (FUNC_17(VAR_6, &VAR_18->HW_Flags)) {
   VAR_18->hw.hfcsx.int_s1 |= VAR_23;
   FUNC_14(&VAR_18->lock, VAR_22);
   return VAR_13;
  }
  if (VAR_18->hw.hfcsx.int_s1 & 0x18) {
   VAR_19 = VAR_23;
   VAR_23 = VAR_18->hw.hfcsx.int_s1;
   VAR_18->hw.hfcsx.int_s1 = VAR_19;
  }
  if (VAR_23 & 0x08) {
   if (!(VAR_20 = FUNC_1(VAR_18, VAR_18->hw.hfcsx.bswapped ? 1 : 0))) {
    if (VAR_18->debug)
     FUNC_3(VAR_18, "hfcsx spurious 0x08 IRQ");
   } else
    FUNC_8(VAR_20);
  }
  if (VAR_23 & 0x10) {
   if (VAR_18->logecho)
    FUNC_10(VAR_18);
   else if (!(VAR_20 = FUNC_1(VAR_18, 1))) {
    if (VAR_18->debug)
     FUNC_3(VAR_18, "hfcsx spurious 0x10 IRQ");
   } else
    FUNC_8(VAR_20);
  }
  if (VAR_23 & 0x01) {
   if (!(VAR_20 = FUNC_1(VAR_18, VAR_18->hw.hfcsx.bswapped ? 1 : 0))) {
    if (VAR_18->debug)
     FUNC_3(VAR_18, "hfcsx spurious 0x01 IRQ");
   } else {
    if (VAR_20->tx_skb) {
     if (!FUNC_16(VAR_6, &VAR_18->HW_Flags)) {
      FUNC_7(VAR_20);
      FUNC_15(VAR_6, &VAR_18->HW_Flags);
     } else
      FUNC_3(VAR_18, "fill_data %d blocked", VAR_20->channel);
    } else {
     if ((VAR_20->tx_skb = FUNC_12(&VAR_20->squeue))) {
      if (!FUNC_16(VAR_6, &VAR_18->HW_Flags)) {
       FUNC_7(VAR_20);
       FUNC_15(VAR_6, &VAR_18->HW_Flags);
      } else
       FUNC_3(VAR_18, "fill_data %d blocked", VAR_20->channel);
     } else {
      FUNC_11(VAR_20, VAR_0);
     }
    }
   }
  }
  if (VAR_23 & 0x02) {
   if (!(VAR_20 = FUNC_1(VAR_18, 1))) {
    if (VAR_18->debug)
     FUNC_3(VAR_18, "hfcsx spurious 0x02 IRQ");
   } else {
    if (VAR_20->tx_skb) {
     if (!FUNC_16(VAR_6, &VAR_18->HW_Flags)) {
      FUNC_7(VAR_20);
      FUNC_15(VAR_6, &VAR_18->HW_Flags);
     } else
      FUNC_3(VAR_18, "fill_data %d blocked", VAR_20->channel);
    } else {
     if ((VAR_20->tx_skb = FUNC_12(&VAR_20->squeue))) {
      if (!FUNC_16(VAR_6, &VAR_18->HW_Flags)) {
       FUNC_7(VAR_20);
       FUNC_15(VAR_6, &VAR_18->HW_Flags);
      } else
       FUNC_3(VAR_18, "fill_data %d blocked", VAR_20->channel);
     } else {
      FUNC_11(VAR_20, VAR_0);
     }
    }
   }
  }
  if (VAR_23 & 0x20) {
   FUNC_9(VAR_18);
  }
  if (VAR_23 & 0x04) {
   if (FUNC_15(VAR_4, &VAR_18->HW_Flags))
    FUNC_4(&VAR_18->dbusytimer);
   if (FUNC_15(VAR_5, &VAR_18->HW_Flags))
    FUNC_11(VAR_18, VAR_1);
   if (VAR_18->tx_skb) {
    if (VAR_18->tx_skb->len) {
     if (!FUNC_16(VAR_6, &VAR_18->HW_Flags)) {
      FUNC_6(VAR_18);
      FUNC_15(VAR_6, &VAR_18->HW_Flags);
     } else {
      FUNC_3(VAR_18, "hfcsx_fill_dfifo irq blocked");
     }
     goto afterXPR;
    } else {
     FUNC_5(VAR_18->tx_skb);
     VAR_18->tx_cnt = 0;
     VAR_18->tx_skb = ((void*)0);
    }
   }
   if ((VAR_18->tx_skb = FUNC_12(&VAR_18->sq))) {
    VAR_18->tx_cnt = 0;
    if (!FUNC_16(VAR_6, &VAR_18->HW_Flags)) {
     FUNC_6(VAR_18);
     FUNC_15(VAR_6, &VAR_18->HW_Flags);
    } else {
     FUNC_3(VAR_18, "hfcsx_fill_dfifo irq blocked");
    }
   } else
    FUNC_11(VAR_18, VAR_3);
  }
       afterXPR:
  if (VAR_18->hw.hfcsx.int_s1 && VAR_21--) {
   VAR_23 = VAR_18->hw.hfcsx.int_s1;
   VAR_18->hw.hfcsx.int_s1 = 0;
   if (VAR_18->debug & VAR_15)
    FUNC_3(VAR_18, "HFC-SX irq %x loop %d", VAR_23, 15 - VAR_21);
  } else
   VAR_23 = 0;
 }
 FUNC_14(&VAR_18->lock, VAR_22);
 return VAR_13;
}
