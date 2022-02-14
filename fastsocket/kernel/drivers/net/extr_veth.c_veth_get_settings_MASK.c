
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_cmd {scalar_t__ maxrxpkt; scalar_t__ maxtxpkt; int autoneg; int transceiver; scalar_t__ phy_address; int port; int duplex; int speed; scalar_t__ advertising; scalar_t__ supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct net_device *VAR_5, struct ethtool_cmd *VAR_6)
{
 VAR_6->supported = 0;
 VAR_6->advertising = 0;
 VAR_6->speed = VAR_3;
 VAR_6->duplex = VAR_1;
 VAR_6->port = VAR_2;
 VAR_6->phy_address = 0;
 VAR_6->transceiver = VAR_4;
 VAR_6->autoneg = VAR_0;
 VAR_6->maxtxpkt = 0;
 VAR_6->maxrxpkt = 0;
 return 0;
}
