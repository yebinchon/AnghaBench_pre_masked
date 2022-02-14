
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_cmd {int supported; int advertising; int maxrxpkt; scalar_t__ maxtxpkt; int autoneg; int transceiver; scalar_t__ phy_address; int port; int duplex; int speed; } ;


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
 int VAR_10 ;

__attribute__((used)) static int FUNC_0(struct net_device *VAR_11, struct ethtool_cmd *VAR_12)
{
 VAR_12->supported = (VAR_7 | VAR_8 |
    VAR_9);
 VAR_12->advertising = (VAR_0 | VAR_1 |
    VAR_2);
 VAR_12->speed = VAR_6;
 VAR_12->duplex = VAR_4;
 VAR_12->port = VAR_5;
 VAR_12->phy_address = 0;
 VAR_12->transceiver = VAR_10;
 VAR_12->autoneg = VAR_3;
 VAR_12->maxtxpkt = 0;
 VAR_12->maxrxpkt = 1;
 return 0;
}
