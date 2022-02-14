
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ixgbe_ring {int reg_idx; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int) ;

void FUNC_5(struct ixgbe_adapter *VAR_6,
       struct ixgbe_ring *VAR_7)
{
 struct ixgbe_hw *VAR_8 = &VAR_6->hw;
 int VAR_9 = VAR_2;
 u32 VAR_10;
 u8 VAR_11 = VAR_7->reg_idx;

 VAR_10 = FUNC_0(VAR_8, FUNC_1(VAR_11));
 VAR_10 &= ~VAR_3;


 FUNC_2(VAR_8, FUNC_1(VAR_11), VAR_10);

 if (VAR_8->mac.type == VAR_5 &&
     !(FUNC_0(VAR_8, VAR_0) & VAR_1))
  return;


 do {
  FUNC_4(10);
  VAR_10 = FUNC_0(VAR_8, FUNC_1(VAR_11));
 } while (--VAR_9 && (VAR_10 & VAR_3));

 if (!VAR_9) {
  FUNC_3(VAR_4, "RXDCTL.ENABLE on Rx queue %d not cleared within "
        "the polling period\n", VAR_11);
 }
}
