
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_pauseparam {scalar_t__ autoneg; scalar_t__ tx_pause; scalar_t__ rx_pause; } ;
struct TYPE_7__ {int (* setup_link ) (struct e1000_hw*) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct TYPE_6__ {scalar_t__ media_type; } ;
struct TYPE_5__ {int requested_mode; int current_mode; } ;
struct e1000_hw {TYPE_4__ mac; TYPE_2__ phy; TYPE_1__ fc; } ;
struct e1000_adapter {scalar_t__ fc_autoneg; int state; int netdev; struct e1000_hw hw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct e1000_adapter*) ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_adapter*) ;
 int FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_adapter*) ;
 struct e1000_adapter* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct e1000_hw*) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_8,
    struct ethtool_pauseparam *VAR_9)
{
 struct e1000_adapter *VAR_10 = FUNC_6(VAR_8);
 struct e1000_hw *VAR_11 = &VAR_10->hw;
 int VAR_12 = 0;

 VAR_10->fc_autoneg = VAR_9->autoneg;

 while (FUNC_9(VAR_1, &VAR_10->state))
  FUNC_10(1000, 2000);

 if (VAR_10->fc_autoneg == VAR_0) {
  VAR_11->fc.requested_mode = VAR_2;
  if (FUNC_7(VAR_10->netdev)) {
   FUNC_1(VAR_10);
   FUNC_5(VAR_10);
  } else {
   FUNC_3(VAR_10);
  }
 } else {
  if (VAR_9->rx_pause && VAR_9->tx_pause)
   VAR_11->fc.requested_mode = VAR_3;
  else if (VAR_9->rx_pause && !VAR_9->tx_pause)
   VAR_11->fc.requested_mode = VAR_5;
  else if (!VAR_9->rx_pause && VAR_9->tx_pause)
   VAR_11->fc.requested_mode = VAR_6;
  else if (!VAR_9->rx_pause && !VAR_9->tx_pause)
   VAR_11->fc.requested_mode = VAR_4;

  VAR_11->fc.current_mode = VAR_11->fc.requested_mode;

  if (VAR_11->phy.media_type == VAR_7) {
   VAR_12 = VAR_11->mac.ops.setup_link(VAR_11);

  } else {
   VAR_12 = FUNC_2(VAR_11);
   if (VAR_12)
    goto out;
   FUNC_4(VAR_11);
  }
 }

out:
 FUNC_0(VAR_1, &VAR_10->state);
 return VAR_12;
}
