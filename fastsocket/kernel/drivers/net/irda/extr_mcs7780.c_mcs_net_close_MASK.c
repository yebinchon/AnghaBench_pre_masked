
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int skb; } ;
struct mcs_cb {int * irlap; int tx_urb; int rx_urb; TYPE_1__ rx_buff; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct mcs_cb* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_0)
{
 int VAR_1 = 0;
 struct mcs_cb *VAR_2 = FUNC_2(VAR_0);


 FUNC_3(VAR_0);

 FUNC_1(VAR_2->rx_buff.skb);


 FUNC_5(VAR_2->rx_urb);
 FUNC_4(VAR_2->rx_urb);
 FUNC_5(VAR_2->tx_urb);
 FUNC_4(VAR_2->tx_urb);


 if (VAR_2->irlap)
  FUNC_0(VAR_2->irlap);

 VAR_2->irlap = ((void*)0);
 return VAR_1;
}
