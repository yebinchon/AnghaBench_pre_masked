
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strip {int idle_timer; int * tx_buff; int * sx_buff; int * rx_buff; TYPE_1__* tty; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct strip* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2)
{
 struct strip *VAR_3 = FUNC_3(VAR_2);

 if (VAR_3->tty == ((void*)0))
  return -VAR_0;
 FUNC_0(VAR_1, &VAR_3->tty->flags);
 FUNC_4(VAR_2);




 FUNC_2(VAR_3->rx_buff);
 VAR_3->rx_buff = ((void*)0);
 FUNC_2(VAR_3->sx_buff);
 VAR_3->sx_buff = ((void*)0);
 FUNC_2(VAR_3->tx_buff);
 VAR_3->tx_buff = ((void*)0);

 FUNC_1(&VAR_3->idle_timer);
 return 0;
}
