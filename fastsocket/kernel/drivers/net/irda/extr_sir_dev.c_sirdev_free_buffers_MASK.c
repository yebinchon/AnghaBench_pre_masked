
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * skb; int head; } ;
struct TYPE_3__ {int * head; } ;
struct sir_dev {TYPE_2__ rx_buff; TYPE_1__ tx_buff; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct sir_dev *VAR_0)
{
 FUNC_1(VAR_0->rx_buff.skb);
 FUNC_0(VAR_0->tx_buff.head);
 VAR_0->rx_buff.head = *(VAR_0->tx_buff.head = ((void*)0));
 VAR_0->rx_buff.skb = ((void*)0);
}
