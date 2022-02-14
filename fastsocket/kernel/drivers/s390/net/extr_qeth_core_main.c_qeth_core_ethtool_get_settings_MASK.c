
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; int link_type; scalar_t__ guestlan; } ;
struct qeth_card {TYPE_1__ info; } ;
struct net_device {struct qeth_card* ml_priv; } ;
struct ethtool_cmd {int supported; int advertising; void* port; int speed; int autoneg; int duplex; int transceiver; } ;
typedef enum qeth_link_types { ____Placeholder_qeth_link_types } qeth_link_types ;


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
 void* VAR_12 ;
 void* VAR_13 ;
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
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;

int FUNC_0(struct net_device *VAR_30,
     struct ethtool_cmd *VAR_31)
{
 struct qeth_card *VAR_32 = VAR_30->ml_priv;
 enum qeth_link_types VAR_33;

 if ((VAR_32->info.type == VAR_14) || (VAR_32->info.guestlan))
  VAR_33 = 132;
 else
  VAR_33 = VAR_32->info.link_type;

 VAR_31->transceiver = VAR_29;
 VAR_31->supported = VAR_26;
 VAR_31->advertising = VAR_7;
 VAR_31->duplex = VAR_11;
 VAR_31->autoneg = VAR_10;

 switch (VAR_33) {
 case 131:
 case 129:
  VAR_31->supported |= VAR_25 |
     VAR_24 |
     VAR_23 |
     VAR_22 |
     VAR_28;
  VAR_31->advertising |= VAR_6 |
     VAR_5 |
     VAR_4 |
     VAR_3 |
     VAR_9;
  VAR_31->speed = VAR_16;
  VAR_31->port = VAR_13;
  break;

 case 130:
 case 128:
  VAR_31->supported |= VAR_25 |
     VAR_24 |
     VAR_23 |
     VAR_22 |
     VAR_21 |
     VAR_20 |
     VAR_27;
  VAR_31->advertising |= VAR_6 |
     VAR_5 |
     VAR_4 |
     VAR_3 |
     VAR_2 |
     VAR_1 |
     VAR_8;
  VAR_31->speed = VAR_17;
  VAR_31->port = VAR_12;
  break;

 case 132:
  VAR_31->supported |= VAR_25 |
     VAR_24 |
     VAR_23 |
     VAR_22 |
     VAR_21 |
     VAR_20 |
     VAR_19 |
     VAR_27;
  VAR_31->advertising |= VAR_6 |
     VAR_5 |
     VAR_4 |
     VAR_3 |
     VAR_2 |
     VAR_1 |
     VAR_0 |
     VAR_8;
  VAR_31->speed = VAR_18;
  VAR_31->port = VAR_12;
  break;

 default:
  VAR_31->supported |= VAR_25 |
     VAR_24 |
     VAR_28;
  VAR_31->advertising |= VAR_6 |
     VAR_5 |
     VAR_9;
  VAR_31->speed = VAR_15;
  VAR_31->port = VAR_13;
 }

 return 0;
}
