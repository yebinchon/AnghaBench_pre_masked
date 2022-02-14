
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ current_mode; int disable_fc_autoneg; } ;
struct ixgbe_hw {TYPE_1__ fc; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;
struct ethtool_pauseparam {int autoneg; int rx_pause; int tx_pause; } ;


 scalar_t__ FUNC_0 (struct ixgbe_hw*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ixgbe_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_3,
                                 struct ethtool_pauseparam *VAR_4)
{
 struct ixgbe_adapter *VAR_5 = FUNC_1(VAR_3);
 struct ixgbe_hw *VAR_6 = &VAR_5->hw;

 if (FUNC_0(VAR_6) &&
     !VAR_6->fc.disable_fc_autoneg)
  VAR_4->autoneg = 1;
 else
  VAR_4->autoneg = 0;

 if (VAR_6->fc.current_mode == VAR_1) {
  VAR_4->rx_pause = 1;
 } else if (VAR_6->fc.current_mode == VAR_2) {
  VAR_4->tx_pause = 1;
 } else if (VAR_6->fc.current_mode == VAR_0) {
  VAR_4->rx_pause = 1;
  VAR_4->tx_pause = 1;
 }
}
