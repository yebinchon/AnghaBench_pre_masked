
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bchannel {int Flags; int * next_skb; int * rx_skb; scalar_t__ tx_idx; int * tx_skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

void
FUNC_2(struct bchannel *VAR_3)
{
 if (VAR_3->tx_skb) {
  FUNC_0(VAR_3->tx_skb);
  VAR_3->tx_skb = ((void*)0);
 }
 VAR_3->tx_idx = 0;
 if (VAR_3->rx_skb) {
  FUNC_0(VAR_3->rx_skb);
  VAR_3->rx_skb = ((void*)0);
 }
 if (VAR_3->next_skb) {
  FUNC_0(VAR_3->next_skb);
  VAR_3->next_skb = ((void*)0);
 }
 FUNC_1(VAR_1, &VAR_3->Flags);
 FUNC_1(VAR_2, &VAR_3->Flags);
 FUNC_1(VAR_0, &VAR_3->Flags);
}
