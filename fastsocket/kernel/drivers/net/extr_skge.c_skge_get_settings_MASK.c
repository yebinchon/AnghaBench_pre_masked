
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skge_port {int duplex; int speed; int autoneg; int advertising; struct skge_hw* hw; } ;
struct skge_hw {int phy_addr; scalar_t__ copper; } ;
struct net_device {int dummy; } ;
struct ethtool_cmd {int duplex; int speed; int autoneg; int advertising; int port; int phy_address; int supported; int transceiver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct skge_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct skge_hw*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3,
        struct ethtool_cmd *VAR_4)
{
 struct skge_port *VAR_5 = FUNC_0(VAR_3);
 struct skge_hw *VAR_6 = VAR_5->hw;

 VAR_4->transceiver = VAR_2;
 VAR_4->supported = FUNC_1(VAR_6);

 if (VAR_6->copper) {
  VAR_4->port = VAR_1;
  VAR_4->phy_address = VAR_6->phy_addr;
 } else
  VAR_4->port = VAR_0;

 VAR_4->advertising = VAR_5->advertising;
 VAR_4->autoneg = VAR_5->autoneg;
 VAR_4->speed = VAR_5->speed;
 VAR_4->duplex = VAR_5->duplex;
 return 0;
}
