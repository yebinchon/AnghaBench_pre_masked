
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int cip; scalar_t__ fifosize; } ;
struct TYPE_4__ {TYPE_1__ hfc; } ;
struct IsdnCardState {int (* BC_Read_Reg ) (struct IsdnCardState*,int ,int) ;int debug; TYPE_2__ hw; int (* BC_Write_Reg ) (struct IsdnCardState*,int ,int,int) ;} ;
struct BCState {scalar_t__ mode; int Flag; int squeue; scalar_t__ tx_skb; int rqueue; int channel; struct IsdnCardState* cs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (struct BCState*,int) ;
 int FUNC_2 (struct IsdnCardState*) ;
 int FUNC_3 (struct IsdnCardState*) ;
 int FUNC_4 (struct IsdnCardState*,char*,int ,int,int,...) ;
 struct sk_buff* FUNC_5 (struct BCState*,int) ;
 int FUNC_6 (struct BCState*) ;
 int FUNC_7 (struct BCState*,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,struct sk_buff*) ;
 int FUNC_10 (struct IsdnCardState*,int ,int,int) ;
 int FUNC_11 (struct IsdnCardState*,int ,int) ;
 int FUNC_12 (struct IsdnCardState*,int ,int) ;
 int FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int ,int *) ;

void
FUNC_15(struct BCState *VAR_14)
{
 struct IsdnCardState *VAR_15 = VAR_14->cs;
 int VAR_16, VAR_17, VAR_18;
 u_char VAR_19, VAR_20, VAR_21;
 int VAR_22, VAR_23, VAR_24 = 5;
 struct sk_buff *VAR_25;

      Begin:
 VAR_24--;
 VAR_21 = VAR_3 | VAR_5 | VAR_7 | FUNC_0(VAR_14->channel);
 if ((VAR_21 & 0xc3) != (VAR_15->hw.hfc.cip & 0xc3)) {
  VAR_15->BC_Write_Reg(VAR_15, VAR_8, VAR_21, VAR_21);
  FUNC_2(VAR_15);
 }
 FUNC_3(VAR_15);
 VAR_22 = 0;
 if (VAR_14->mode == VAR_12) {
  VAR_19 = VAR_15->BC_Read_Reg(VAR_15, VAR_4, VAR_21);
  VAR_21 = VAR_3 | VAR_6 | VAR_7 | FUNC_0(VAR_14->channel);
  FUNC_3(VAR_15);
  VAR_20 = VAR_15->BC_Read_Reg(VAR_15, VAR_4, VAR_21);
  if (VAR_19 != VAR_20) {
   if (VAR_15->debug & VAR_11)
    FUNC_4(VAR_15, "hfc rec %d f1(%d) f2(%d)",
     VAR_14->channel, VAR_19, VAR_20);
   VAR_22 = 1;
  }
 }
 if (VAR_22 || (VAR_14->mode == VAR_13)) {
  FUNC_2(VAR_15);
  VAR_16 = FUNC_1(VAR_14, VAR_9 | VAR_7 | FUNC_0(VAR_14->channel));
  VAR_17 = FUNC_1(VAR_14, VAR_10 | VAR_7 | FUNC_0(VAR_14->channel));
  VAR_18 = VAR_16 - VAR_17;
  if (VAR_18 < 0)
   VAR_18 += VAR_15->hw.hfc.fifosize;
  if ((VAR_14->mode == VAR_12) || (VAR_18)) {
   VAR_18++;
   if (VAR_15->debug & VAR_11)
    FUNC_4(VAR_15, "hfc rec %d z1(%x) z2(%x) cnt(%d)",
     VAR_14->channel, VAR_16, VAR_17, VAR_18);

   if ((VAR_25 = FUNC_5(VAR_14, VAR_18))) {
    FUNC_9(&VAR_14->rqueue, VAR_25);
    FUNC_7(VAR_14, VAR_1);
   }
  }
  VAR_22 = 1;
 }
 if (VAR_14->tx_skb) {
  VAR_23 = 1;
  FUNC_13(VAR_0, &VAR_14->Flag);
  FUNC_6(VAR_14);
  if (FUNC_14(VAR_0, &VAR_14->Flag))
   VAR_23 = 0;
 } else {
  if ((VAR_14->tx_skb = FUNC_8(&VAR_14->squeue))) {
   VAR_23 = 1;
   FUNC_13(VAR_0, &VAR_14->Flag);
   FUNC_6(VAR_14);
   if (FUNC_14(VAR_0, &VAR_14->Flag))
    VAR_23 = 0;
  } else {
   VAR_23 = 0;
   FUNC_7(VAR_14, VAR_2);
  }
 }
 if ((VAR_22 || VAR_23) && VAR_24)
  goto Begin;
 return;
}
