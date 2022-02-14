
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int type; } ;
struct ixgb_hw {TYPE_1__ fc; } ;
struct ixgb_adapter {int netdev; struct ixgb_hw hw; } ;
struct ethtool_pauseparam {scalar_t__ autoneg; scalar_t__ tx_pause; scalar_t__ rx_pause; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgb_adapter*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ixgb_adapter*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ixgb_adapter*) ;
 struct ixgb_adapter* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_6,
    struct ethtool_pauseparam *VAR_7)
{
 struct ixgb_adapter *VAR_8 = FUNC_4(VAR_6);
 struct ixgb_hw *VAR_9 = &VAR_8->hw;

 if (VAR_7->autoneg == VAR_0)
  return -VAR_1;

 if (VAR_7->rx_pause && VAR_7->tx_pause)
  VAR_9->fc.type = VAR_2;
 else if (VAR_7->rx_pause && !VAR_7->tx_pause)
  VAR_9->fc.type = VAR_4;
 else if (!VAR_7->rx_pause && VAR_7->tx_pause)
  VAR_9->fc.type = VAR_5;
 else if (!VAR_7->rx_pause && !VAR_7->tx_pause)
  VAR_9->fc.type = VAR_3;

 if (FUNC_5(VAR_8->netdev)) {
  FUNC_0(VAR_8, 1);
  FUNC_3(VAR_8);
  FUNC_2(VAR_6);
 } else
  FUNC_1(VAR_8);

 return 0;
}
