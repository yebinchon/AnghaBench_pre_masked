
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * rcvbuf; } ;
struct TYPE_4__ {TYPE_1__ hscx; } ;
struct BCState {scalar_t__ mode; int Flag; int * tx_skb; int squeue; int rqueue; TYPE_2__ hw; int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct BCState*,int ,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(struct BCState *VAR_3)
{
 FUNC_2(VAR_3, 0, VAR_3->channel);
 if (FUNC_4(VAR_1, &VAR_3->Flag)) {
  if (VAR_3->hw.hscx.rcvbuf) {
   if (VAR_3->mode != VAR_2)
    FUNC_1(VAR_3->hw.hscx.rcvbuf);
   VAR_3->hw.hscx.rcvbuf = ((void*)0);
  }
  FUNC_3(&VAR_3->rqueue);
  FUNC_3(&VAR_3->squeue);
  if (VAR_3->tx_skb) {
   FUNC_0(VAR_3->tx_skb);
   VAR_3->tx_skb = ((void*)0);
   FUNC_4(VAR_0, &VAR_3->Flag);
  }
 }
}
