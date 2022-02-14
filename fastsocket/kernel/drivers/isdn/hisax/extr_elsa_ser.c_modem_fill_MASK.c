
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
struct TYPE_9__ {scalar_t__ count; } ;
struct TYPE_10__ {TYPE_3__ hscx; } ;
struct BCState {int Flag; TYPE_4__ hw; int squeue; TYPE_5__* tx_skb; int aclock; int ackcnt; TYPE_2__* st; } ;
struct TYPE_11__ {scalar_t__ pkt_type; scalar_t__ len; } ;
struct TYPE_7__ {int flag; } ;
struct TYPE_8__ {TYPE_1__ lli; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (struct BCState*,int ) ;
 TYPE_5__* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (struct BCState*) ;

__attribute__((used)) static inline void
FUNC_9(struct BCState *VAR_5) {

 if (VAR_5->tx_skb) {
  if (VAR_5->tx_skb->len) {
   FUNC_8(VAR_5);
   return;
  } else {
   if (FUNC_7(VAR_3,&VAR_5->st->lli.flag) &&
    (VAR_4 != VAR_5->tx_skb->pkt_type)) {
    u_long VAR_6;
    FUNC_3(&VAR_5->aclock, VAR_6);
    VAR_5->ackcnt += VAR_5->hw.hscx.count;
    FUNC_4(&VAR_5->aclock, VAR_6);
    FUNC_1(VAR_5, VAR_1);
   }
   FUNC_0(VAR_5->tx_skb);
   VAR_5->tx_skb = ((void*)0);
  }
 }
 if ((VAR_5->tx_skb = FUNC_2(&VAR_5->squeue))) {
  VAR_5->hw.hscx.count = 0;
  FUNC_6(VAR_0, &VAR_5->Flag);
  FUNC_8(VAR_5);
 } else {
  FUNC_5(VAR_0, &VAR_5->Flag);
  FUNC_1(VAR_5, VAR_2);
 }
}
