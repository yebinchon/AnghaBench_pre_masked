
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int state; int in_frame; scalar_t__ len; int * head; int * data; TYPE_3__* skb; int truesize; } ;
struct TYPE_6__ {scalar_t__ len; int * head; int * data; int truesize; } ;
struct sir_dev {TYPE_2__ rx_buff; TYPE_1__ tx_buff; int netdev; } ;
struct TYPE_8__ {int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_4(struct sir_dev *VAR_6)
{
 VAR_6->tx_buff.truesize = VAR_5;
 VAR_6->rx_buff.truesize = VAR_3;


 VAR_6->rx_buff.skb = FUNC_0(VAR_6->netdev, VAR_6->rx_buff.truesize,
           VAR_2);
 if (VAR_6->rx_buff.skb == ((void*)0))
  return -VAR_0;
 FUNC_3(VAR_6->rx_buff.skb, 1);
 VAR_6->rx_buff.head = VAR_6->rx_buff.skb->data;

 VAR_6->tx_buff.head = FUNC_2(VAR_6->tx_buff.truesize, VAR_2);
 if (VAR_6->tx_buff.head == ((void*)0)) {
  FUNC_1(VAR_6->rx_buff.skb);
  VAR_6->rx_buff.skb = ((void*)0);
  VAR_6->rx_buff.head = ((void*)0);
  return -VAR_0;
 }

 VAR_6->tx_buff.data = VAR_6->tx_buff.head;
 VAR_6->rx_buff.data = VAR_6->rx_buff.head;
 VAR_6->tx_buff.len = 0;
 VAR_6->rx_buff.len = 0;

 VAR_6->rx_buff.in_frame = VAR_1;
 VAR_6->rx_buff.state = VAR_4;
 return 0;
}
