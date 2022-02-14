
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_adapter {int num_rx_queues; int * rx_ring; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct ixgbe_adapter *VAR_1)
{
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_rx_queues; VAR_2++) {
  VAR_3 = FUNC_3(VAR_1->rx_ring[VAR_2]);
  if (!VAR_3)
   continue;

  FUNC_0(VAR_0, "Allocation for Rx Queue %u failed\n", VAR_2);
  goto err_setup_rx;
 }





  return 0;
err_setup_rx:

 while (VAR_2--)
  FUNC_1(VAR_1->rx_ring[VAR_2]);
 return VAR_3;
}
