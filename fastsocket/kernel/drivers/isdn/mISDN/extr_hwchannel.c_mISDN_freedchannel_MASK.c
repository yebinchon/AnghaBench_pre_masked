
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dchannel {int rqueue; int squeue; int * rx_skb; int * tx_skb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;

int
FUNC_3(struct dchannel *VAR_0)
{
 if (VAR_0->tx_skb) {
  FUNC_0(VAR_0->tx_skb);
  VAR_0->tx_skb = ((void*)0);
 }
 if (VAR_0->rx_skb) {
  FUNC_0(VAR_0->rx_skb);
  VAR_0->rx_skb = ((void*)0);
 }
 FUNC_2(&VAR_0->squeue);
 FUNC_2(&VAR_0->rqueue);
 FUNC_1();
 return 0;
}
