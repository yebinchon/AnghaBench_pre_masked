
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ixgbe_adv_rx_desc {int dummy; } ixgbe_adv_rx_desc ;
typedef int u64 ;
typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
struct ixgbevf_adapter {int num_rx_queues; TYPE_1__* rx_ring; struct ixgbe_hw hw; } ;
struct TYPE_2__ {int count; int dma; int reg_idx; void* tail; void* head; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (struct ixgbe_hw*,void*,int) ;
 int FUNC_7 (struct ixgbevf_adapter*,int) ;
 int FUNC_8 (struct ixgbevf_adapter*) ;

__attribute__((used)) static void FUNC_9(struct ixgbevf_adapter *VAR_1)
{
 u64 VAR_2;
 struct ixgbe_hw *VAR_3 = &VAR_1->hw;
 int VAR_4, VAR_5;
 u32 VAR_6;


 FUNC_6(VAR_3, VAR_0, 0);


 FUNC_8(VAR_1);

 VAR_6 = VAR_1->rx_ring[0].count * sizeof(union ixgbe_adv_rx_desc);


 for (VAR_4 = 0; VAR_4 < VAR_1->num_rx_queues; VAR_4++) {
  VAR_2 = VAR_1->rx_ring[VAR_4].dma;
  VAR_5 = VAR_1->rx_ring[VAR_4].reg_idx;
  FUNC_6(VAR_3, FUNC_2(VAR_5),
    (VAR_2 & FUNC_0(32)));
  FUNC_6(VAR_3, FUNC_1(VAR_5), (VAR_2 >> 32));
  FUNC_6(VAR_3, FUNC_4(VAR_5), VAR_6);
  FUNC_6(VAR_3, FUNC_3(VAR_5), 0);
  FUNC_6(VAR_3, FUNC_5(VAR_5), 0);
  VAR_1->rx_ring[VAR_4].head = FUNC_3(VAR_5);
  VAR_1->rx_ring[VAR_4].tail = FUNC_5(VAR_5);

  FUNC_7(VAR_1, VAR_5);
 }
}
