
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ftimer; int * rcvbuf; } ;
struct TYPE_5__ {TYPE_1__ isar; } ;
struct BCState {TYPE_2__ hw; TYPE_3__* cs; int Flag; int * tx_skb; int squeue; int rqueue; int channel; } ;
struct TYPE_6__ {int debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct BCState*,int ,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void
FUNC_7(struct BCState *VAR_3)
{
 FUNC_4(VAR_3, 0, VAR_3->channel);
 if (FUNC_6(VAR_1, &VAR_3->Flag)) {
  FUNC_3(VAR_3->hw.isar.rcvbuf);
  VAR_3->hw.isar.rcvbuf = ((void*)0);
  FUNC_5(&VAR_3->rqueue);
  FUNC_5(&VAR_3->squeue);
  if (VAR_3->tx_skb) {
   FUNC_2(VAR_3->tx_skb);
   VAR_3->tx_skb = ((void*)0);
   FUNC_6(VAR_0, &VAR_3->Flag);
   if (VAR_3->cs->debug & VAR_2)
    FUNC_0(VAR_3->cs, "closeisar clear BC_FLG_BUSY");
  }
 }
 FUNC_1(&VAR_3->hw.isar.ftimer);
}
