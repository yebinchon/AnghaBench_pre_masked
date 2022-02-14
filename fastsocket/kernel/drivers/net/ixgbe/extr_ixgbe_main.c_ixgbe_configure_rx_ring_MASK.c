
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ixgbe_adv_rx_desc {int dummy; } ixgbe_adv_rx_desc ;
typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct ixgbe_ring {int dma; int count; scalar_t__ tail; int reg_idx; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; scalar_t__ hw_addr; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct ixgbe_hw*,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_0 ;
 int FUNC_8 (struct ixgbe_hw*,scalar_t__,int) ;
 int FUNC_9 (struct ixgbe_ring*,int ) ;
 int FUNC_10 (struct ixgbe_adapter*,struct ixgbe_ring*) ;
 int FUNC_11 (struct ixgbe_adapter*,struct ixgbe_ring*) ;
 int FUNC_12 (struct ixgbe_ring*) ;
 int FUNC_13 (struct ixgbe_adapter*,struct ixgbe_ring*) ;
 scalar_t__ VAR_1 ;
 int FUNC_14 (struct ixgbe_adapter*,struct ixgbe_ring*) ;

void FUNC_15(struct ixgbe_adapter *VAR_2,
        struct ixgbe_ring *VAR_3)
{
 struct ixgbe_hw *VAR_4 = &VAR_2->hw;
 u64 VAR_5 = VAR_3->dma;
 u32 VAR_6;
 u8 VAR_7 = VAR_3->reg_idx;


 VAR_6 = FUNC_6(VAR_4, FUNC_7(VAR_7));
 FUNC_13(VAR_2, VAR_3);

 FUNC_8(VAR_4, FUNC_2(VAR_7), (VAR_5 & FUNC_0(32)));
 FUNC_8(VAR_4, FUNC_1(VAR_7), (VAR_5 >> 32));
 FUNC_8(VAR_4, FUNC_4(VAR_7),
   VAR_3->count * sizeof(union ixgbe_adv_rx_desc));
 FUNC_8(VAR_4, FUNC_3(VAR_7), 0);
 FUNC_8(VAR_4, FUNC_5(VAR_7), 0);
 VAR_3->tail = VAR_4->hw_addr + FUNC_5(VAR_7);

 FUNC_11(VAR_2, VAR_3);
 FUNC_10(VAR_2, VAR_3);

 if (VAR_4->mac.type == VAR_1) {







  VAR_6 &= ~0x3FFFFF;
  VAR_6 |= 0x080420;
 }


 VAR_6 |= VAR_0;
 FUNC_8(VAR_4, FUNC_7(VAR_7), VAR_6);

 FUNC_14(VAR_2, VAR_3);
 FUNC_9(VAR_3, FUNC_12(VAR_3));
}
