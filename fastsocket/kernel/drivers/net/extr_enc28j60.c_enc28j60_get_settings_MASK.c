
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_cmd {int supported; int autoneg; int port; int duplex; int speed; int transceiver; } ;
struct enc28j60_net {scalar_t__ full_duplex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct enc28j60_net* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int
FUNC_1(struct net_device *VAR_9, struct ethtool_cmd *VAR_10)
{
 struct enc28j60_net *VAR_11 = FUNC_0(VAR_9);

 VAR_10->transceiver = VAR_8;
 VAR_10->supported = VAR_6
   | VAR_5
   | VAR_7;
 VAR_10->speed = VAR_4;
 VAR_10->duplex = VAR_11->full_duplex ? VAR_1 : VAR_2;
 VAR_10->port = VAR_3;
 VAR_10->autoneg = VAR_0;

 return 0;
}
