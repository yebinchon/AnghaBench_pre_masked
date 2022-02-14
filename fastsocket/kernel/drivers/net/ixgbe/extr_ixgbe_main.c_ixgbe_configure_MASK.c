
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* enable_rx_buff ) (struct ixgbe_hw*) ;int (* disable_rx_buff ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {int type; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbe_adapter {int flags; int fdir_pballoc; struct ixgbe_hw hw; int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_adapter*) ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 int FUNC_3 (struct ixgbe_adapter*) ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 int FUNC_5 (struct ixgbe_adapter*) ;
 int FUNC_6 (struct ixgbe_adapter*) ;
 int FUNC_7 (struct ixgbe_hw*,int ) ;
 int FUNC_8 (struct ixgbe_hw*,int ) ;


 int FUNC_9 (struct ixgbe_adapter*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct ixgbe_hw*) ;
 int FUNC_12 (struct ixgbe_hw*) ;

__attribute__((used)) static void FUNC_13(struct ixgbe_adapter *VAR_2)
{
 struct ixgbe_hw *VAR_3 = &VAR_2->hw;

 FUNC_2(VAR_2);







 FUNC_5(VAR_2);

 FUNC_10(VAR_2->netdev);
 FUNC_9(VAR_2);

 switch (VAR_3->mac.type) {
 case 129:
 case 128:
  VAR_3->mac.ops.disable_rx_buff(VAR_3);
  break;
 default:
  break;
 }

 if (VAR_2->flags & VAR_0) {
  FUNC_8(&VAR_2->hw,
      VAR_2->fdir_pballoc);
 } else if (VAR_2->flags & VAR_1) {
  FUNC_7(&VAR_2->hw,
           VAR_2->fdir_pballoc);
  FUNC_6(VAR_2);
 }

 switch (VAR_3->mac.type) {
 case 129:
 case 128:
  VAR_3->mac.ops.enable_rx_buff(VAR_3);
  break;
 default:
  break;
 }






 FUNC_4(VAR_2);
 FUNC_3(VAR_2);
}
