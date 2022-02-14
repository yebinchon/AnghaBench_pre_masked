
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int skb; } ;
struct stir_cb {int * irlap; TYPE_1__ rx_buff; int rx_urb; int io_buf; int fifo_status; int thread; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct stir_cb* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_0)
{
 struct stir_cb *VAR_1 = FUNC_4(VAR_0);


 FUNC_5(VAR_0);


 FUNC_3(VAR_1->thread);
 FUNC_1(VAR_1->fifo_status);


 FUNC_7(VAR_1->rx_urb);

 FUNC_1(VAR_1->io_buf);
 FUNC_6(VAR_1->rx_urb);
 FUNC_2(VAR_1->rx_buff.skb);


 if (VAR_1->irlap)
  FUNC_0(VAR_1->irlap);

 VAR_1->irlap = ((void*)0);

 return 0;
}
