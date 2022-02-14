
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netdrv_private {int * tx_bufs; int ** tx_buf; TYPE_1__* tx_info; int dirty_tx; int cur_tx; scalar_t__ cur_rx; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ mapping; int * skb; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 struct netdrv_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3 (struct net_device *VAR_2)
{
 struct netdrv_private *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 FUNC_0 ("ENTER\n");

 VAR_3->cur_rx = 0;
 FUNC_1 (&VAR_3->cur_tx, 0);
 FUNC_1 (&VAR_3->dirty_tx, 0);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3->tx_info[VAR_4].skb = ((void*)0);
  VAR_3->tx_info[VAR_4].mapping = 0;
  VAR_3->tx_buf[VAR_4] = &VAR_3->tx_bufs[VAR_4 * VAR_1];
 }

 FUNC_0 ("EXIT\n");
}
