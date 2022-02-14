
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_cmd {int duplex; scalar_t__ speed; int supported; int advertising; int autoneg; int port; } ;
struct ehea_port {int port_speed; int full_duplex; int autoneg; } ;


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
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (struct ehea_port*) ;
 int FUNC_1 (struct ethtool_cmd*,int) ;
 struct ehea_port* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_24, struct ethtool_cmd *VAR_25)
{
 struct ehea_port *VAR_26 = FUNC_2(VAR_24);
 u32 VAR_27;
 int VAR_28;

 VAR_28 = FUNC_0(VAR_26);

 if (VAR_28)
  return VAR_28;

 if (FUNC_3(VAR_24)) {
  switch (VAR_26->port_speed) {
  case 129:
   VAR_27 = VAR_11;
   break;
  case 131:
   VAR_27 = VAR_12;
   break;
  case 128:
   VAR_27 = VAR_13;
   break;
  case 130:
   VAR_27 = VAR_14;
   break;
  default:
   VAR_27 = -1;
   break;
  }
  VAR_25->duplex = VAR_26->full_duplex == 1 ?
           VAR_7 : VAR_8;
 } else {
  VAR_27 = ~0;
  VAR_25->duplex = -1;
 }
 FUNC_1(VAR_25, VAR_27);

 if (VAR_25->speed == VAR_14) {
  VAR_25->supported = (VAR_15 | VAR_22);
  VAR_25->advertising = (VAR_0 | VAR_3);
  VAR_25->port = VAR_9;
 } else {
  VAR_25->supported = (VAR_16 | VAR_17
          | VAR_18 | VAR_19
          | VAR_20 | VAR_21
          | VAR_23);
  VAR_25->advertising = (VAR_1 | VAR_2
     | VAR_4);
  VAR_25->port = VAR_10;
 }

 VAR_25->autoneg = VAR_26->autoneg == 1 ? VAR_6 : VAR_5;

 return 0;
}
