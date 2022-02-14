
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int state; int in_frame; int * head; int * skb; } ;
struct kingsun_cb {int * irlap; scalar_t__ receiving; TYPE_1__ rx_buff; int * rx_urb; int * tx_urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct kingsun_cb* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2)
{
 struct kingsun_cb *VAR_3 = FUNC_2(VAR_2);


 FUNC_3(VAR_2);


 FUNC_5(VAR_3->tx_urb);
 FUNC_5(VAR_3->rx_urb);

 FUNC_4(VAR_3->tx_urb);
 FUNC_4(VAR_3->rx_urb);

 VAR_3->tx_urb = ((void*)0);
 VAR_3->rx_urb = ((void*)0);

 FUNC_1(VAR_3->rx_buff.skb);
 VAR_3->rx_buff.skb = ((void*)0);
 VAR_3->rx_buff.head = ((void*)0);
 VAR_3->rx_buff.in_frame = VAR_0;
 VAR_3->rx_buff.state = VAR_1;
 VAR_3->receiving = 0;


 if (VAR_3->irlap)
  FUNC_0(VAR_3->irlap);

 VAR_3->irlap = ((void*)0);

 return 0;
}
