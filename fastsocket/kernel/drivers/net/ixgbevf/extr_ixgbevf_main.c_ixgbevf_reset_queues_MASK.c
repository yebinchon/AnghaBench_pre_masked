
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ixgbevf_ring {int queue_index; int reg_idx; int netdev; int * dev; int count; } ;
struct ixgbe_hw {int dummy; } ;
struct ixgbevf_adapter {unsigned int num_rx_queues; struct ixgbevf_ring* rx_ring; int netdev; TYPE_2__* pdev; int rx_ring_count; TYPE_1__* tx_ring; int mbx_lock; struct ixgbe_hw hw; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {unsigned int reg_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbevf_adapter*) ;
 int FUNC_1 (struct ixgbevf_adapter*,struct ixgbevf_ring*) ;
 int FUNC_2 (struct ixgbe_hw*,unsigned int*,unsigned int*) ;
 int FUNC_3 (struct ixgbevf_adapter*) ;
 int FUNC_4 (struct ixgbevf_adapter*) ;
 int FUNC_5 (struct ixgbevf_adapter*,struct ixgbevf_ring*) ;
 struct ixgbevf_ring* FUNC_6 (unsigned int,int,int ) ;
 int FUNC_7 (struct ixgbevf_ring*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct ixgbevf_adapter *VAR_2)
{
 struct ixgbe_hw *VAR_3 = &VAR_2->hw;
 struct ixgbevf_ring *VAR_4;
 unsigned int VAR_5 = 0;
 unsigned int VAR_6 = 0;
 unsigned int VAR_7 = 1;
 int VAR_8, VAR_9;

 FUNC_8(&VAR_2->mbx_lock);


 VAR_8 = FUNC_2(VAR_3, &VAR_6, &VAR_5);

 FUNC_9(&VAR_2->mbx_lock);

 if (VAR_8)
  return VAR_8;

 if (VAR_6 > 1) {

  VAR_2->tx_ring[0].reg_idx = VAR_5;


  VAR_7 = VAR_6;
 }


 if (VAR_2->num_rx_queues == VAR_7)
  return 0;


 VAR_4 = FUNC_6(VAR_7,
     sizeof(struct ixgbevf_ring), VAR_1);
 if (!VAR_4)
  return -VAR_0;


 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  VAR_4[VAR_9].count = VAR_2->rx_ring_count;
  VAR_4[VAR_9].queue_index = VAR_9;
  VAR_4[VAR_9].reg_idx = VAR_9;
  VAR_4[VAR_9].dev = &VAR_2->pdev->dev;
  VAR_4[VAR_9].netdev = VAR_2->netdev;


  VAR_8 = FUNC_5(VAR_2, &VAR_4[VAR_9]);
  if (VAR_8) {
   while (VAR_9) {
    VAR_9--;
    FUNC_1(VAR_2, &VAR_4[VAR_9]);
   }
   FUNC_7(VAR_4);
   return VAR_8;
  }
 }


 FUNC_0(VAR_2);
 VAR_2->num_rx_queues = 0;
 FUNC_7(VAR_2->rx_ring);


 VAR_2->rx_ring = VAR_4;
 VAR_2->num_rx_queues = VAR_7;


 FUNC_4(VAR_2);
 FUNC_3(VAR_2);

 return 0;
}
