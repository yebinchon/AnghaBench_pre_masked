
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct netdev_private {struct sk_buff** tx_skbuff; TYPE_1__* tx_ring; int pdev; struct sk_buff** rx_skbuff; TYPE_1__* rx_ring; int timer; } ;
struct net_device {long base_addr; int irq; } ;
struct TYPE_2__ {scalar_t__ fraginfo; scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,struct net_device*) ;
 struct netdev_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_9 (struct net_device *VAR_9)
{
 long VAR_10 = VAR_9->base_addr;
 struct netdev_private *VAR_11 = FUNC_4(VAR_9);
 struct sk_buff *VAR_12;
 int VAR_13;

 FUNC_5 (VAR_9);


 FUNC_8 (0, VAR_10 + VAR_0);


 FUNC_7 (VAR_8 | VAR_5 | VAR_6, VAR_10 + VAR_1);

 FUNC_3 (VAR_9->irq, VAR_9);
 FUNC_0 (&VAR_11->timer);


 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
  VAR_11->rx_ring[VAR_13].status = 0;
  VAR_11->rx_ring[VAR_13].fraginfo = 0;
  VAR_12 = VAR_11->rx_skbuff[VAR_13];
  if (VAR_12) {
   FUNC_6(VAR_11->pdev,
      FUNC_1(&VAR_11->rx_ring[VAR_13]),
      VAR_12->len, VAR_2);
   FUNC_2 (VAR_12);
   VAR_11->rx_skbuff[VAR_13] = ((void*)0);
  }
 }
 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
  VAR_12 = VAR_11->tx_skbuff[VAR_13];
  if (VAR_12) {
   FUNC_6(VAR_11->pdev,
      FUNC_1(&VAR_11->tx_ring[VAR_13]),
      VAR_12->len, VAR_3);
   FUNC_2 (VAR_12);
   VAR_11->tx_skbuff[VAR_13] = ((void*)0);
  }
 }

 return 0;
}
