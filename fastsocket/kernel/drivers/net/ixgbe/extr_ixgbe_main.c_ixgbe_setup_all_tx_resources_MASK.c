
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_adapter {int num_tx_queues; int * tx_ring; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct ixgbe_adapter *VAR_1)
{
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_tx_queues; VAR_2++) {
  VAR_3 = FUNC_2(VAR_1->tx_ring[VAR_2]);
  if (!VAR_3)
   continue;

  FUNC_0(VAR_0, "Allocation for Tx Queue %u failed\n", VAR_2);
  goto err_setup_tx;
 }

 return 0;
err_setup_tx:

 while (VAR_2--)
  FUNC_1(VAR_1->tx_ring[VAR_2]);
 return VAR_3;
}
