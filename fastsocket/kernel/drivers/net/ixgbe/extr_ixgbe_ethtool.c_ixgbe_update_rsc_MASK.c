
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; } ;
struct ixgbe_adapter {int flags2; struct net_device* netdev; } ;
struct ethtool_coalesce {int rx_coalesce_usecs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_1(struct ixgbe_adapter *VAR_5,
        struct ethtool_coalesce *VAR_6)
{
 struct net_device *VAR_7 = VAR_5->netdev;

 if (!(VAR_5->flags2 & VAR_0))
  return 0;


 if (VAR_6->rx_coalesce_usecs != 1 &&
     VAR_6->rx_coalesce_usecs <= (VAR_2 >> 2)) {
  if (VAR_5->flags2 & VAR_1) {
   FUNC_0(VAR_4, "rx-usecs set too low, disabling RSC\n");
   VAR_5->flags2 &= ~VAR_1;
   return 1;
  }
 } else {

  if ((VAR_7->features & VAR_3) &&
      !(VAR_5->flags2 & VAR_1)) {
   FUNC_0(VAR_4, "rx-usecs set to %d, re-enabling RSC\n",
          VAR_6->rx_coalesce_usecs);
   VAR_5->flags2 |= VAR_1;
   return 1;
  }
 }
 return 0;
}
