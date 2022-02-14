
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbevf_adapter {int num_rx_queues; int hw; int * rx_ring; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct ixgbevf_adapter*,int *) ;

__attribute__((used)) static int FUNC_2(struct ixgbevf_adapter *VAR_0)
{
 int VAR_1, VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_rx_queues; VAR_1++) {
  VAR_2 = FUNC_1(VAR_0, &VAR_0->rx_ring[VAR_1]);
  if (!VAR_2)
   continue;
  FUNC_0(&VAR_0->hw,
         "Allocation for Rx Queue %u failed\n", VAR_1);
  break;
 }
 return VAR_2;
}
