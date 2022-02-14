
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vmxnet3_adapter {TYPE_4__* tx_queue; TYPE_2__* rx_queue; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {scalar_t__ rx_jumbo_pending; scalar_t__ rx_mini_pending; int tx_pending; int rx_pending; scalar_t__ rx_jumbo_max_pending; scalar_t__ rx_mini_max_pending; int tx_max_pending; int rx_max_pending; } ;
struct TYPE_7__ {int size; } ;
struct TYPE_8__ {TYPE_3__ tx_ring; } ;
struct TYPE_6__ {TYPE_1__* rx_ring; } ;
struct TYPE_5__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vmxnet3_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void
FUNC_1(struct net_device *VAR_2,
        struct ethtool_ringparam *VAR_3)
{
 struct vmxnet3_adapter *VAR_4 = FUNC_0(VAR_2);

 VAR_3->rx_max_pending = VAR_0;
 VAR_3->tx_max_pending = VAR_1;
 VAR_3->rx_mini_max_pending = 0;
 VAR_3->rx_jumbo_max_pending = 0;

 VAR_3->rx_pending = VAR_4->rx_queue[0].rx_ring[0].size;
 VAR_3->tx_pending = VAR_4->tx_queue[0].tx_ring.size;
 VAR_3->rx_mini_pending = 0;
 VAR_3->rx_jumbo_pending = 0;
}
