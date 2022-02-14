
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dchannel {int Flags; int * tx_skb; int squeue; scalar_t__ tx_idx; } ;


 int VAR_0 ;
 int FUNC_0 (struct dchannel*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

int
FUNC_3(struct dchannel *VAR_1)
{
 VAR_1->tx_idx = 0;
 VAR_1->tx_skb = FUNC_1(&VAR_1->squeue);
 if (VAR_1->tx_skb) {
  FUNC_0(VAR_1);
  return 1;
 }
 VAR_1->tx_skb = ((void*)0);
 FUNC_2(VAR_0, &VAR_1->Flags);
 return 0;
}
