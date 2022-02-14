
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_cmd {int supported; scalar_t__ speed; void* duplex; int autoneg; int phy_address; int transceiver; int port; } ;
struct TYPE_4__ {int phy; } ;
typedef TYPE_1__ rtl8150_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 short VAR_4 ;
 short VAR_5 ;
 short VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 short VAR_9 ;
 short VAR_10 ;
 short VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (TYPE_1__*,int ,int,short*) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_23, struct ethtool_cmd *VAR_24)
{
 rtl8150_t *VAR_25 = FUNC_1(VAR_23);
 short VAR_26, VAR_27;

 VAR_24->supported = (VAR_18 |
     VAR_17 |
     VAR_16 |
     VAR_15 |
     VAR_19 |
     VAR_21 | VAR_20);
 VAR_24->port = VAR_12;
 VAR_24->transceiver = VAR_22;
 VAR_24->phy_address = VAR_25->phy;
 FUNC_0(VAR_25, VAR_3, 2, &VAR_27);
 FUNC_0(VAR_25, VAR_0, 2, &VAR_26);
 if (VAR_27 & VAR_4) {
  VAR_24->autoneg = VAR_2;
  VAR_24->speed = (VAR_26 & (VAR_10 | VAR_9)) ?
        VAR_14 : VAR_13;
  if (VAR_24->speed == VAR_14)
   VAR_24->duplex = (VAR_26 & VAR_9) ?
       VAR_7 : VAR_8;
  else
   VAR_24->duplex = (VAR_26 & VAR_11) ?
       VAR_7 : VAR_8;
 } else {
  VAR_24->autoneg = VAR_1;
  VAR_24->speed = (VAR_27 & VAR_6) ?
      VAR_14 : VAR_13;
  VAR_24->duplex = (VAR_27 & VAR_5) ?
      VAR_7 : VAR_8;
 }
 return 0;
}
