
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_10__ {scalar_t__ media_type; } ;
struct TYPE_9__ {int requested_mode; int current_mode; } ;
struct TYPE_6__ {scalar_t__ e100_base_fx; } ;
struct TYPE_7__ {TYPE_1__ eth_flags; } ;
struct TYPE_8__ {TYPE_2__ _82575; } ;
struct e1000_hw {TYPE_5__ phy; TYPE_4__ fc; TYPE_3__ dev_spec; } ;
struct igb_adapter {scalar_t__ fc_autoneg; int state; int netdev; struct e1000_hw hw; } ;
struct ethtool_pauseparam {scalar_t__ autoneg; scalar_t__ tx_pause; scalar_t__ rx_pause; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct igb_adapter*) ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct igb_adapter*) ;
 int FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct igb_adapter*) ;
 int FUNC_6 (int) ;
 struct igb_adapter* FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_9,
         struct ethtool_pauseparam *VAR_10)
{
 struct igb_adapter *VAR_11 = FUNC_7(VAR_9);
 struct e1000_hw *VAR_12 = &VAR_11->hw;
 int VAR_13 = 0;


 if (VAR_12->dev_spec._82575.eth_flags.e100_base_fx)
  return -VAR_1;

 VAR_11->fc_autoneg = VAR_10->autoneg;

 while (FUNC_9(VAR_2, &VAR_11->state))
  FUNC_6(1);

 if (VAR_11->fc_autoneg == VAR_0) {
  VAR_12->fc.requested_mode = VAR_3;
  if (FUNC_8(VAR_11->netdev)) {
   FUNC_1(VAR_11);
   FUNC_5(VAR_11);
  } else {
   FUNC_3(VAR_11);
  }
 } else {
  if (VAR_10->rx_pause && VAR_10->tx_pause)
   VAR_12->fc.requested_mode = VAR_4;
  else if (VAR_10->rx_pause && !VAR_10->tx_pause)
   VAR_12->fc.requested_mode = VAR_6;
  else if (!VAR_10->rx_pause && VAR_10->tx_pause)
   VAR_12->fc.requested_mode = VAR_7;
  else if (!VAR_10->rx_pause && !VAR_10->tx_pause)
   VAR_12->fc.requested_mode = VAR_5;

  VAR_12->fc.current_mode = VAR_12->fc.requested_mode;

  VAR_13 = ((VAR_12->phy.media_type == VAR_8) ?
     FUNC_2(VAR_12) : FUNC_4(VAR_12));
 }

 FUNC_0(VAR_2, &VAR_11->state);
 return VAR_13;
}
