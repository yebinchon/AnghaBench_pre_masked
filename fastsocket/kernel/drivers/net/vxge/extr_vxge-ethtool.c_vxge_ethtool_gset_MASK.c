
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_cmd {int supported; int advertising; int speed; int duplex; int autoneg; int transceiver; int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_9, struct ethtool_cmd *VAR_10)
{
 VAR_10->supported = (VAR_6 | VAR_7);
 VAR_10->advertising = (VAR_0 | VAR_1);
 VAR_10->port = VAR_4;

 VAR_10->transceiver = VAR_8;

 if (FUNC_0(VAR_9)) {
  VAR_10->speed = VAR_5;
  VAR_10->duplex = VAR_3;
 } else {
  VAR_10->speed = -1;
  VAR_10->duplex = -1;
 }

 VAR_10->autoneg = VAR_2;
 return 0;
}
