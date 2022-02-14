
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_pauseparam {scalar_t__ autoneg; scalar_t__ tx_pause; scalar_t__ rx_pause; } ;
struct e1000_hw {scalar_t__ media_type; int fc; int original_fc; } ;
struct e1000_adapter {scalar_t__ fc_autoneg; int flags; int netdev; struct e1000_hw hw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (struct e1000_hw*) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct e1000_adapter*) ;
 int FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_adapter*) ;
 int FUNC_6 (int) ;
 struct e1000_adapter* FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_7,
    struct ethtool_pauseparam *VAR_8)
{
 struct e1000_adapter *VAR_9 = FUNC_7(VAR_7);
 struct e1000_hw *VAR_10 = &VAR_9->hw;
 int VAR_11 = 0;

 VAR_9->fc_autoneg = VAR_8->autoneg;

 while (FUNC_9(VAR_5, &VAR_9->flags))
  FUNC_6(1);

 if (VAR_8->rx_pause && VAR_8->tx_pause)
  VAR_10->fc = VAR_1;
 else if (VAR_8->rx_pause && !VAR_8->tx_pause)
  VAR_10->fc = VAR_3;
 else if (!VAR_8->rx_pause && VAR_8->tx_pause)
  VAR_10->fc = VAR_4;
 else if (!VAR_8->rx_pause && !VAR_8->tx_pause)
  VAR_10->fc = VAR_2;

 VAR_10->original_fc = VAR_10->fc;

 if (VAR_9->fc_autoneg == VAR_0) {
  if (FUNC_8(VAR_9->netdev)) {
   FUNC_1(VAR_9);
   FUNC_5(VAR_9);
  } else
   FUNC_3(VAR_9);
 } else
  VAR_11 = ((VAR_10->media_type == VAR_6) ?
     FUNC_4(VAR_10) : FUNC_2(VAR_10));

 FUNC_0(VAR_5, &VAR_9->flags);
 return VAR_11;
}
