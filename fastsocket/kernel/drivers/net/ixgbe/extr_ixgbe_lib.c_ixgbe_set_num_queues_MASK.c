
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_adapter {int num_rx_queues; int num_tx_queues; int num_rx_pools; int num_rx_queues_per_pool; } ;


 scalar_t__ FUNC_0 (struct ixgbe_adapter*) ;
 scalar_t__ FUNC_1 (struct ixgbe_adapter*) ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 scalar_t__ FUNC_3 (struct ixgbe_adapter*) ;

__attribute__((used)) static void FUNC_4(struct ixgbe_adapter *VAR_0)
{

 VAR_0->num_rx_queues = 1;
 VAR_0->num_tx_queues = 1;
 VAR_0->num_rx_pools = VAR_0->num_rx_queues;
 VAR_0->num_rx_queues_per_pool = 1;
 if (FUNC_3(VAR_0))
  return;

 FUNC_2(VAR_0);
}
