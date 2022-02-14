
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbevf_adapter {int num_tx_queues; int * tx_ring; } ;


 int FUNC_0 (struct ixgbevf_adapter*,int *) ;

__attribute__((used)) static void FUNC_1(struct ixgbevf_adapter *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_tx_queues; VAR_1++)
  FUNC_0(VAR_0, &VAR_0->tx_ring[VAR_1]);
}
