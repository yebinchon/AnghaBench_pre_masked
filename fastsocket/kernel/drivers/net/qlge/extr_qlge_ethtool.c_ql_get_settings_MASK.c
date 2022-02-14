
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int link_status; } ;
struct net_device {int dummy; } ;
struct ethtool_cmd {int supported; int advertising; int duplex; int speed; int port; int autoneg; int transceiver; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct ql_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_16,
         struct ethtool_cmd *VAR_17)
{
 struct ql_adapter *VAR_18 = FUNC_0(VAR_16);

 VAR_17->supported = VAR_11;
 VAR_17->advertising = VAR_0;
 VAR_17->transceiver = VAR_15;
 if ((VAR_18->link_status & VAR_10) ==
    VAR_9) {
  VAR_17->supported |= (VAR_14 | VAR_12);
  VAR_17->advertising |= (VAR_3 | VAR_1);
  VAR_17->port = VAR_7;
  VAR_17->autoneg = VAR_4;
 } else {
  VAR_17->supported |= VAR_13;
  VAR_17->advertising |= VAR_2;
  VAR_17->port = VAR_6;
 }

 VAR_17->speed = VAR_8;
 VAR_17->duplex = VAR_5;

 return 0;
}
