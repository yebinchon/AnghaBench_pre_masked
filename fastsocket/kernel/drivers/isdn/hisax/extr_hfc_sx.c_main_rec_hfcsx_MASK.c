
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {int bswapped; } ;
struct TYPE_4__ {TYPE_1__ hfcsx; } ;
struct IsdnCardState {int HW_Flags; TYPE_2__ hw; } ;
struct BCState {scalar_t__ mode; int rqueue; scalar_t__ channel; struct IsdnCardState* cs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct IsdnCardState*,char*,scalar_t__) ;
 struct sk_buff* FUNC_1 (struct IsdnCardState*,int ,int ) ;
 int FUNC_2 (struct BCState*,int ) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void
FUNC_6(struct BCState *VAR_6)
{
 struct IsdnCardState *VAR_7 = VAR_6->cs;
 int VAR_8 = 5;
 struct sk_buff *VAR_9;

      Begin:
 VAR_8--;
 if (FUNC_5(VAR_1, &VAR_7->HW_Flags)) {
  FUNC_0(VAR_7, "rec_data %d blocked", VAR_6->channel);
  return;
 }
 VAR_9 = FUNC_1(VAR_7, ((VAR_6->channel) && (!VAR_7->hw.hfcsx.bswapped)) ?
   VAR_4 : VAR_3,
   (VAR_6->mode == VAR_5) ?
   VAR_2 : 0);

 if (VAR_9) {
   FUNC_3(&VAR_6->rqueue, VAR_9);
   FUNC_2(VAR_6, VAR_0);
 }

 FUNC_4(VAR_1, &VAR_7->HW_Flags);
 if (VAR_8 && VAR_9)
  goto Begin;
 return;
}
