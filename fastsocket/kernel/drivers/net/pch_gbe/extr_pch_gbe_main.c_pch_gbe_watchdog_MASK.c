
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ link_duplex; int link_speed; } ;
struct pch_gbe_hw {TYPE_1__ mac; } ;
struct pch_gbe_adapter {int watchdog_timer; int mii; int tx_queue_len; struct pch_gbe_hw hw; struct net_device* netdev; } ;
struct net_device {int tx_queue_len; } ;
struct ethtool_cmd {scalar_t__ duplex; int cmd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ethtool_cmd*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int *,struct ethtool_cmd*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct net_device*,char*,...) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct pch_gbe_adapter*,int ,scalar_t__) ;
 int FUNC_11 (struct pch_gbe_adapter*,int ,scalar_t__) ;
 int FUNC_12 (struct pch_gbe_adapter*) ;
 int FUNC_13 (char*,scalar_t__) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (scalar_t__) ;

__attribute__((used)) static void FUNC_16(unsigned long VAR_6)
{
 struct pch_gbe_adapter *VAR_7 = (struct pch_gbe_adapter *)VAR_6;
 struct net_device *VAR_8 = VAR_7->netdev;
 struct pch_gbe_hw *VAR_9 = &VAR_7->hw;

 FUNC_13("right now = %ld\n", VAR_5);

 FUNC_12(VAR_7);
 if ((FUNC_2(&VAR_7->mii)) && (!FUNC_6(VAR_8))) {
  struct ethtool_cmd VAR_10 = { .cmd = VAR_2 };
  VAR_8->tx_queue_len = VAR_7->tx_queue_len;

  if (FUNC_1(&VAR_7->mii, &VAR_10)) {
   FUNC_14("ethtool get setting Error\n");
   FUNC_3(&VAR_7->watchdog_timer,
      FUNC_15(VAR_5 +
      VAR_3));
   return;
  }
  VAR_9->mac.link_speed = FUNC_0(&VAR_10);
  VAR_9->mac.link_duplex = VAR_10.duplex;

  FUNC_11(VAR_7, VAR_9->mac.link_speed,
      VAR_9->mac.link_duplex);

  FUNC_10(VAR_7, VAR_9->mac.link_speed,
     VAR_9->mac.link_duplex);
  FUNC_4(VAR_8,
      "Link is Up %d Mbps %s-Duplex\n",
      VAR_9->mac.link_speed,
      VAR_10.duplex == VAR_0 ? "Full" : "Half");
  FUNC_7(VAR_8);
  FUNC_9(VAR_8);
 } else if ((!FUNC_2(&VAR_7->mii)) &&
     (FUNC_6(VAR_8))) {
  FUNC_4(VAR_8, "NIC Link is Down\n");
  VAR_9->mac.link_speed = VAR_4;
  VAR_9->mac.link_duplex = VAR_1;
  FUNC_5(VAR_8);
  FUNC_8(VAR_8);
 }
 FUNC_3(&VAR_7->watchdog_timer,
    FUNC_15(VAR_5 + VAR_3));
}
