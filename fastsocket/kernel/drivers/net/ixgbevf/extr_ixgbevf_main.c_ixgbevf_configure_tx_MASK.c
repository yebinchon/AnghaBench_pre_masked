
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ixgbe_adv_tx_desc {int dummy; } ixgbe_adv_tx_desc ;
typedef int u64 ;
typedef size_t u32 ;
struct ixgbevf_ring {size_t reg_idx; int dma; int count; void* tail; void* head; } ;
struct ixgbe_hw {int dummy; } ;
struct ixgbevf_adapter {size_t num_tx_queues; struct ixgbevf_ring* tx_ring; struct ixgbe_hw hw; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t FUNC_1 (struct ixgbe_hw*,void*) ;
 void* FUNC_2 (size_t) ;
 void* FUNC_3 (size_t) ;
 void* FUNC_4 (size_t) ;
 void* FUNC_5 (size_t) ;
 void* FUNC_6 (size_t) ;
 void* FUNC_7 (size_t) ;
 int FUNC_8 (struct ixgbe_hw*,void*,size_t) ;

__attribute__((used)) static void FUNC_9(struct ixgbevf_adapter *VAR_1)
{
 u64 VAR_2;
 struct ixgbe_hw *VAR_3 = &VAR_1->hw;
 u32 VAR_4, VAR_5, VAR_6, VAR_7;


 for (VAR_4 = 0; VAR_4 < VAR_1->num_tx_queues; VAR_4++) {
  struct ixgbevf_ring *VAR_8 = &VAR_1->tx_ring[VAR_4];
  VAR_5 = VAR_8->reg_idx;
  VAR_2 = VAR_8->dma;
  VAR_6 = VAR_8->count * sizeof(union ixgbe_adv_tx_desc);
  FUNC_8(VAR_3, FUNC_4(VAR_5),
    (VAR_2 & FUNC_0(32)));
  FUNC_8(VAR_3, FUNC_3(VAR_5), (VAR_2 >> 32));
  FUNC_8(VAR_3, FUNC_6(VAR_5), VAR_6);
  FUNC_8(VAR_3, FUNC_5(VAR_5), 0);
  FUNC_8(VAR_3, FUNC_7(VAR_5), 0);
  VAR_1->tx_ring[VAR_4].head = FUNC_5(VAR_5);
  VAR_1->tx_ring[VAR_4].tail = FUNC_7(VAR_5);



  VAR_7 = FUNC_1(VAR_3, FUNC_2(VAR_5));
  VAR_7 &= ~VAR_0;
  FUNC_8(VAR_3, FUNC_2(VAR_5), VAR_7);
 }
}
