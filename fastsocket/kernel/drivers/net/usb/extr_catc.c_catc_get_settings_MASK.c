
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_cmd {int supported; int advertising; int maxtxpkt; int maxrxpkt; int autoneg; int transceiver; scalar_t__ phy_address; int port; int duplex; int speed; } ;
struct catc {int is_f5u011; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct catc* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_10, struct ethtool_cmd *VAR_11)
{
 struct catc *VAR_12 = FUNC_0(VAR_10);
 if (!VAR_12->is_f5u011)
  return -VAR_4;

 VAR_11->supported = VAR_7 | VAR_8;
 VAR_11->advertising = VAR_0 | VAR_1;
 VAR_11->speed = VAR_6;
 VAR_11->duplex = VAR_3;
 VAR_11->port = VAR_5;
 VAR_11->phy_address = 0;
 VAR_11->transceiver = VAR_9;
 VAR_11->autoneg = VAR_2;
 VAR_11->maxtxpkt = 1;
 VAR_11->maxrxpkt = 1;
 return 0;
}
