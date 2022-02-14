
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int type; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbe_adapter {int num_rx_queues; TYPE_1__** rx_ring; struct ixgbe_hw hw; } ;
struct TYPE_3__ {int reg_idx; } ;


 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ) ;




__attribute__((used)) static void FUNC_3(struct ixgbe_adapter *VAR_3)
{
 struct ixgbe_hw *VAR_4 = &VAR_3->hw;
 u32 VAR_5;
 int VAR_6, VAR_7;

 switch (VAR_4->mac.type) {
 case 130:
  VAR_5 = FUNC_0(VAR_4, VAR_1);
  VAR_5 &= ~VAR_2;
  FUNC_2(VAR_4, VAR_1, VAR_5);
  break;
 case 129:
 case 128:
  for (VAR_6 = 0; VAR_6 < VAR_3->num_rx_queues; VAR_6++) {
   VAR_7 = VAR_3->rx_ring[VAR_6]->reg_idx;
   VAR_5 = FUNC_0(VAR_4, FUNC_1(VAR_7));
   VAR_5 &= ~VAR_0;
   FUNC_2(VAR_4, FUNC_1(VAR_7), VAR_5);
  }
  break;
 default:
  break;
 }
}
