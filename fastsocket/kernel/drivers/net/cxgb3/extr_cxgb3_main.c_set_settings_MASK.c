
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct link_config {int supported; int advertising; scalar_t__ autoneg; int requested_duplex; scalar_t__ requested_speed; } ;
struct port_info {int mac; int phy; struct link_config link_config; } ;
struct net_device {int dummy; } ;
struct ethtool_cmd {scalar_t__ autoneg; int advertising; int duplex; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct ethtool_cmd*) ;
 struct port_info* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int *,int *,struct link_config*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_8, struct ethtool_cmd *VAR_9)
{
 struct port_info *VAR_10 = FUNC_1(VAR_8);
 struct link_config *VAR_11 = &VAR_10->link_config;

 if (!(VAR_11->supported & VAR_7)) {




  if (VAR_9->autoneg == VAR_2) {
   u32 VAR_12 = FUNC_0(VAR_9);
   int VAR_13 = FUNC_3(VAR_12, VAR_9->duplex);
   if (VAR_11->supported & VAR_13)
    return 0;
  }
  return -VAR_4;
 }

 if (VAR_9->autoneg == VAR_2) {
  u32 VAR_14 = FUNC_0(VAR_9);
  int VAR_15 = FUNC_3(VAR_14, VAR_9->duplex);

  if (!(VAR_11->supported & VAR_15) || (VAR_14 == VAR_5))
   return -VAR_4;
  VAR_11->requested_speed = VAR_14;
  VAR_11->requested_duplex = VAR_9->duplex;
  VAR_11->advertising = 0;
 } else {
  VAR_9->advertising &= VAR_1;
  VAR_9->advertising &= VAR_11->supported;
  if (!VAR_9->advertising)
   return -VAR_4;
  VAR_11->requested_speed = VAR_6;
  VAR_11->requested_duplex = VAR_3;
  VAR_11->advertising = VAR_9->advertising | VAR_0;
 }
 VAR_11->autoneg = VAR_9->autoneg;
 if (FUNC_2(VAR_8))
  FUNC_4(&VAR_10->phy, &VAR_10->mac, VAR_11);
 return 0;
}
