
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct happy_meal {int sw_bmcr; int sw_lpa; int happy_lock; int tcvregs; } ;
struct ethtool_cmd {int supported; scalar_t__ speed; void* duplex; int autoneg; scalar_t__ phy_address; int transceiver; int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
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
 void* FUNC_0 (struct happy_meal*,int ,int ) ;
 struct happy_meal* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_23, struct ethtool_cmd *VAR_24)
{
 struct happy_meal *VAR_25 = FUNC_1(VAR_23);

 VAR_24->supported =
  (VAR_18 | VAR_17 |
   VAR_16 | VAR_15 |
   VAR_19 | VAR_21 | VAR_20);


 VAR_24->port = VAR_12;
 VAR_24->transceiver = VAR_22;
 VAR_24->phy_address = 0;


 FUNC_2(&VAR_25->happy_lock);
 VAR_25->sw_bmcr = FUNC_0(VAR_25, VAR_25->tcvregs, VAR_10);
 VAR_25->sw_lpa = FUNC_0(VAR_25, VAR_25->tcvregs, VAR_11);
 FUNC_3(&VAR_25->happy_lock);

 if (VAR_25->sw_bmcr & VAR_2) {
  VAR_24->autoneg = VAR_1;
  VAR_24->speed =
   (VAR_25->sw_lpa & (VAR_8 | VAR_7)) ?
   VAR_14 : VAR_13;
  if (VAR_24->speed == VAR_14)
   VAR_24->duplex =
    (VAR_25->sw_lpa & (VAR_7)) ?
    VAR_5 : VAR_6;
  else
   VAR_24->duplex =
    (VAR_25->sw_lpa & (VAR_9)) ?
    VAR_5 : VAR_6;
 } else {
  VAR_24->autoneg = VAR_0;
  VAR_24->speed =
   (VAR_25->sw_bmcr & VAR_4) ?
   VAR_14 : VAR_13;
  VAR_24->duplex =
   (VAR_25->sw_bmcr & VAR_3) ?
   VAR_5 : VAR_6;
 }
 return 0;
}
