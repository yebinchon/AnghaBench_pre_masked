
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ixgbe_adapter {int num_rx_queues; int num_tx_queues; TYPE_2__** tx_ring; TYPE_1__** rx_ring; } ;
struct TYPE_4__ {int reg_idx; } ;
struct TYPE_3__ {int reg_idx; } ;



__attribute__((used)) static bool FUNC_0(struct ixgbe_adapter *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_rx_queues; VAR_1++)
  VAR_0->rx_ring[VAR_1]->reg_idx = VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->num_tx_queues; VAR_1++)
  VAR_0->tx_ring[VAR_1]->reg_idx = VAR_1;

 return 1;
}
