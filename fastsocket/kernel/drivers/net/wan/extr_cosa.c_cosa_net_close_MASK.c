
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct channel_data {TYPE_1__* cosa; scalar_t__ usage; int * tx_skb; int * rx_skb; } ;
struct TYPE_2__ {int lock; int usage; } ;


 int FUNC_0 (struct channel_data*) ;
 struct channel_data* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_0)
{
 struct channel_data *VAR_1 = FUNC_1(VAR_0);
 unsigned long VAR_2;

 FUNC_4(VAR_0);
 FUNC_2(VAR_0);
 FUNC_0(VAR_1);
 FUNC_5(&VAR_1->cosa->lock, VAR_2);
 if (VAR_1->rx_skb) {
  FUNC_3(VAR_1->rx_skb);
  VAR_1->rx_skb = ((void*)0);
 }
 if (VAR_1->tx_skb) {
  FUNC_3(VAR_1->tx_skb);
  VAR_1->tx_skb = ((void*)0);
 }
 VAR_1->usage = 0;
 VAR_1->cosa->usage--;
 FUNC_6(&VAR_1->cosa->lock, VAR_2);
 return 0;
}
