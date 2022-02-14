
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int autoneg; int addr; int duplex; int speed; int advertising; int supported; } ;
struct ethtool_cmd {int autoneg; int transceiver; int phy_address; int port; int duplex; int speed; int advertising; int supported; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct phy_device *VAR_2, struct ethtool_cmd *VAR_3)
{
 VAR_3->supported = VAR_2->supported;

 VAR_3->advertising = VAR_2->advertising;

 VAR_3->speed = VAR_2->speed;
 VAR_3->duplex = VAR_2->duplex;
 VAR_3->port = VAR_0;
 VAR_3->phy_address = VAR_2->addr;
 VAR_3->transceiver = VAR_1;
 VAR_3->autoneg = VAR_2->autoneg;

 return 0;
}
