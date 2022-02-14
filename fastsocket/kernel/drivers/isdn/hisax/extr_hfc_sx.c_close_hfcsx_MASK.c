
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BCState {int Flag; int * tx_skb; int squeue; int rqueue; int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct BCState*,int ,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct BCState *VAR_2)
{
 FUNC_1(VAR_2, 0, VAR_2->channel);
 if (FUNC_3(VAR_1, &VAR_2->Flag)) {
  FUNC_2(&VAR_2->rqueue);
  FUNC_2(&VAR_2->squeue);
  if (VAR_2->tx_skb) {
   FUNC_0(VAR_2->tx_skb);
   VAR_2->tx_skb = ((void*)0);
   FUNC_3(VAR_0, &VAR_2->Flag);
  }
 }
}
