
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ixgbe_ring {int reg_idx; } ;
struct TYPE_2__ {int type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {struct ixgbe_ring test_rx_ring; struct ixgbe_ring test_tx_ring; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_3 (struct ixgbe_adapter*,struct ixgbe_ring*) ;
 int FUNC_4 (struct ixgbe_ring*) ;
 int FUNC_5 (struct ixgbe_ring*) ;


 int FUNC_6 (struct ixgbe_adapter*) ;

__attribute__((used)) static void FUNC_7(struct ixgbe_adapter *VAR_5)
{
 struct ixgbe_ring *VAR_6 = &VAR_5->test_tx_ring;
 struct ixgbe_ring *VAR_7 = &VAR_5->test_rx_ring;
 struct ixgbe_hw *VAR_8 = &VAR_5->hw;
 u32 VAR_9;




 VAR_9 = FUNC_0(VAR_8, VAR_2);
 VAR_9 &= ~VAR_3;
 FUNC_2(VAR_8, VAR_2, VAR_9);
 FUNC_3(VAR_5, VAR_7);


 VAR_9 = FUNC_0(VAR_8, FUNC_1(VAR_6->reg_idx));
 VAR_9 &= ~VAR_4;
 FUNC_2(VAR_8, FUNC_1(VAR_6->reg_idx), VAR_9);

 switch (VAR_8->mac.type) {
 case 129:
 case 128:
  VAR_9 = FUNC_0(VAR_8, VAR_0);
  VAR_9 &= ~VAR_1;
  FUNC_2(VAR_8, VAR_0, VAR_9);
  break;
 default:
  break;
 }

 FUNC_6(VAR_5);

 FUNC_5(&VAR_5->test_tx_ring);
 FUNC_4(&VAR_5->test_rx_ring);
}
