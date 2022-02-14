
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_7__ {int bswapped; } ;
struct TYPE_8__ {TYPE_1__ hfcsx; } ;
struct IsdnCardState {TYPE_2__ hw; } ;
struct BCState {scalar_t__ mode; int Flag; TYPE_5__* tx_skb; int aclock; int ackcnt; TYPE_4__* st; int tx_cnt; scalar_t__ channel; struct IsdnCardState* cs; } ;
struct TYPE_11__ {scalar_t__ len; scalar_t__ pkt_type; } ;
struct TYPE_9__ {int flag; } ;
struct TYPE_10__ {TYPE_3__ lli; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (struct BCState*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (struct IsdnCardState*,TYPE_5__*,int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct BCState *VAR_8)
{
 struct IsdnCardState *VAR_9 = VAR_8->cs;

 if (!VAR_8->tx_skb)
  return;
 if (VAR_8->tx_skb->len <= 0)
  return;

 if (FUNC_6(VAR_9, VAR_8->tx_skb,
         ((VAR_8->channel) && (!VAR_9->hw.hfcsx.bswapped)) ?
         VAR_5 : VAR_4,
         (VAR_8->mode == VAR_6) ?
         VAR_3 : 0)) {

   VAR_8->tx_cnt -= VAR_8->tx_skb->len;
   if (FUNC_5(VAR_2,&VAR_8->st->lli.flag) &&
  (VAR_7 != VAR_8->tx_skb->pkt_type)) {
  u_long VAR_10;
  FUNC_2(&VAR_8->aclock, VAR_10);
  VAR_8->ackcnt += VAR_8->tx_skb->len;
  FUNC_3(&VAR_8->aclock, VAR_10);
  FUNC_1(VAR_8, VAR_1);
   }
   FUNC_0(VAR_8->tx_skb);
   VAR_8->tx_skb = ((void*)0);
   FUNC_4(VAR_0, &VAR_8->Flag);
 }
}
