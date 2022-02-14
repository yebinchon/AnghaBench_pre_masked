
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ixgbevf_ring {int dummy; } ;
struct ixgbevf_adapter {int num_tx_queues; int num_rx_queues; TYPE_3__* tx_ring; int netdev; TYPE_2__* rx_ring; TYPE_1__* pdev; int rx_ring_count; int tx_ring_count; } ;
struct TYPE_6__ {int queue_index; int reg_idx; int netdev; int * dev; int count; } ;
struct TYPE_5__ {int queue_index; int reg_idx; int netdev; int * dev; int count; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int,int ) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(struct ixgbevf_adapter *VAR_2)
{
 int VAR_3;

 VAR_2->tx_ring = FUNC_0(VAR_2->num_tx_queues,
       sizeof(struct ixgbevf_ring), VAR_1);
 if (!VAR_2->tx_ring)
  goto err_tx_ring_allocation;

 VAR_2->rx_ring = FUNC_0(VAR_2->num_rx_queues,
       sizeof(struct ixgbevf_ring), VAR_1);
 if (!VAR_2->rx_ring)
  goto err_rx_ring_allocation;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_tx_queues; VAR_3++) {
  VAR_2->tx_ring[VAR_3].count = VAR_2->tx_ring_count;
  VAR_2->tx_ring[VAR_3].queue_index = VAR_3;

  VAR_2->tx_ring[VAR_3].reg_idx = VAR_3;
  VAR_2->tx_ring[VAR_3].dev = &VAR_2->pdev->dev;
  VAR_2->tx_ring[VAR_3].netdev = VAR_2->netdev;
 }

 for (VAR_3 = 0; VAR_3 < VAR_2->num_rx_queues; VAR_3++) {
  VAR_2->rx_ring[VAR_3].count = VAR_2->rx_ring_count;
  VAR_2->rx_ring[VAR_3].queue_index = VAR_3;
  VAR_2->rx_ring[VAR_3].reg_idx = VAR_3;
  VAR_2->rx_ring[VAR_3].dev = &VAR_2->pdev->dev;
  VAR_2->rx_ring[VAR_3].netdev = VAR_2->netdev;
 }

 return 0;

err_rx_ring_allocation:
 FUNC_1(VAR_2->tx_ring);
err_tx_ring_allocation:
 return -VAR_0;
}
