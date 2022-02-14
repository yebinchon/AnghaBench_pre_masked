
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bchannel {int maxlen; int workq; int * next_skb; scalar_t__ rcount; int rqueue; scalar_t__ tx_idx; int * tx_skb; int * rx_skb; int * hw; scalar_t__ Flags; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

int
FUNC_2(struct bchannel *VAR_1, int VAR_2)
{
 VAR_1->Flags = 0;
 VAR_1->maxlen = VAR_2;
 VAR_1->hw = ((void*)0);
 VAR_1->rx_skb = ((void*)0);
 VAR_1->tx_skb = ((void*)0);
 VAR_1->tx_idx = 0;
 FUNC_1(&VAR_1->rqueue);
 VAR_1->rcount = 0;
 VAR_1->next_skb = ((void*)0);
 FUNC_0(&VAR_1->workq, VAR_0);
 return 0;
}
