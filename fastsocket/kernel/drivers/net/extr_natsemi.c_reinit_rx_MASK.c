
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netdev_private {int cur_rx; TYPE_1__* rx_ring; TYPE_1__* rx_head_desc; scalar_t__ dirty_rx; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int cmd_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct netdev_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2)
{
 struct netdev_private *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;


 VAR_3->dirty_rx = 0;
 VAR_3->cur_rx = VAR_1;
 VAR_3->rx_head_desc = &VAR_3->rx_ring[0];

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  VAR_3->rx_ring[VAR_4].cmd_status = FUNC_0(VAR_0);

 FUNC_2(VAR_2);
}
