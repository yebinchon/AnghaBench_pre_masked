
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {scalar_t__ bfifosize; } ;
struct TYPE_4__ {TYPE_1__ hfcD; } ;
struct IsdnCardState {int debug; int HW_Flags; TYPE_2__ hw; } ;
struct BCState {int rqueue; int channel; struct IsdnCardState* cs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct IsdnCardState*,int ,scalar_t__) ;
 int FUNC_2 (struct IsdnCardState*,scalar_t__) ;
 int FUNC_3 (struct IsdnCardState*,scalar_t__) ;
 int FUNC_4 (struct IsdnCardState*) ;
 int FUNC_5 (struct IsdnCardState*,char*,int ,...) ;
 struct sk_buff* FUNC_6 (struct BCState*,int) ;
 int FUNC_7 (struct BCState*,int ) ;
 int FUNC_8 (int *,struct sk_buff*) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static void
FUNC_11(struct BCState *VAR_10)
{
 struct IsdnCardState *VAR_11 = VAR_10->cs;
 int VAR_12, VAR_13, VAR_14;
 u_char VAR_15, VAR_16, VAR_17;
 int VAR_18, VAR_19 = 5;
 struct sk_buff *VAR_20;

    Begin:
 VAR_19--;
 if (FUNC_10(VAR_1, &VAR_11->HW_Flags)) {
  FUNC_5(VAR_11,"rec_data %d blocked", VAR_10->channel);
  return;
 }
 FUNC_3(VAR_11, VAR_5 | FUNC_0(VAR_10->channel));
 VAR_17 = VAR_4 | VAR_2 | VAR_5 | FUNC_0(VAR_10->channel);
 FUNC_4(VAR_11);
 VAR_15 = FUNC_1(VAR_11, VAR_8, VAR_17);
 VAR_17 = VAR_4 | VAR_3 | VAR_5 | FUNC_0(VAR_10->channel);
 FUNC_4(VAR_11);
 VAR_16 = FUNC_1(VAR_11, VAR_8, VAR_17);
 if (VAR_15 != VAR_16) {
  if (VAR_11->debug & VAR_9)
   FUNC_5(VAR_11, "hfc rec %d f1(%d) f2(%d)",
    VAR_10->channel, VAR_15, VAR_16);
  VAR_12 = FUNC_2(VAR_11, VAR_4 | VAR_6 | VAR_5 | FUNC_0(VAR_10->channel));
  VAR_13 = FUNC_2(VAR_11, VAR_4 | VAR_7 | VAR_5 | FUNC_0(VAR_10->channel));
  VAR_14 = VAR_12 - VAR_13;
  if (VAR_14 < 0)
   VAR_14 += VAR_11->hw.hfcD.bfifosize;
  VAR_14++;
  if (VAR_11->debug & VAR_9)
   FUNC_5(VAR_11, "hfc rec %d z1(%x) z2(%x) cnt(%d)",
    VAR_10->channel, VAR_12, VAR_13, VAR_14);
  if ((VAR_20 = FUNC_6(VAR_10, VAR_14))) {
   FUNC_8(&VAR_10->rqueue, VAR_20);
   FUNC_7(VAR_10, VAR_0);
  }
  VAR_14 = VAR_15 -VAR_16;
  if (VAR_14<0)
   VAR_14 += 32;
  if (VAR_14>1)
   VAR_18 = 1;
  else
   VAR_18 = 0;
 } else
  VAR_18 = 0;
 FUNC_9(VAR_1, &VAR_11->HW_Flags);
 if (VAR_19 && VAR_18)
  goto Begin;
 return;
}
