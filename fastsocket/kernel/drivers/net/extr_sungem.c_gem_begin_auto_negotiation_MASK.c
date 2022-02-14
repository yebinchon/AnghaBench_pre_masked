
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int advertising; int speed; int duplex; int autoneg; TYPE_2__* def; } ;
struct gem {scalar_t__ phy_type; int want_autoneg; int link_timer; scalar_t__ timer_ticks; int lstate; TYPE_3__ phy_mii; scalar_t__ asleep; } ;
struct ethtool_cmd {scalar_t__ autoneg; int advertising; int speed; int duplex; } ;
struct TYPE_6__ {int features; TYPE_1__* ops; } ;
struct TYPE_5__ {int (* setup_forced ) (TYPE_3__*,int,int) ;int (* setup_aneg ) (TYPE_3__*,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 scalar_t__ FUNC_0 (struct gem*) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,int,int) ;

__attribute__((used)) static void FUNC_4(struct gem *VAR_19, struct ethtool_cmd *VAR_20)
{
 u32 VAR_21, VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;

 if (VAR_19->phy_type != VAR_17 &&
          VAR_19->phy_type != VAR_18)
           goto non_mii;


 if (FUNC_0(VAR_19))
  VAR_22 = VAR_19->phy_mii.def->features;
 else
  VAR_22 = 0;

 VAR_21 = VAR_22 & VAR_0;
 if (VAR_19->phy_mii.advertising != 0)
  VAR_21 &= VAR_19->phy_mii.advertising;

 VAR_23 = VAR_19->want_autoneg;
 VAR_24 = VAR_19->phy_mii.speed;
 VAR_25 = VAR_19->phy_mii.duplex;


 if (!VAR_20)
  goto start_aneg;
 if (VAR_20->autoneg == VAR_1) {
  VAR_21 = VAR_20->advertising;
  VAR_23 = 1;
 } else {
  VAR_23 = 0;
  VAR_24 = VAR_20->speed;
  VAR_25 = VAR_20->duplex;
 }

start_aneg:

 if ((VAR_22 & VAR_13) == 0)
  VAR_23 = 0;
 if (VAR_24 == VAR_7 &&
     !(VAR_22 & (VAR_9 | VAR_8)))
  VAR_24 = VAR_6;
 if (VAR_24 == VAR_6 &&
     !(VAR_22 & (VAR_11 | VAR_10)))
  VAR_24 = VAR_5;
 if (VAR_25 == VAR_2 &&
     !(VAR_22 & (VAR_8 |
         VAR_10 |
         VAR_12)))
      VAR_25 = VAR_3;
 if (VAR_24 == 0)
  VAR_24 = VAR_5;




 if (VAR_19->asleep) {
  VAR_19->phy_mii.autoneg = VAR_19->want_autoneg = VAR_23;
  VAR_19->phy_mii.speed = VAR_24;
  VAR_19->phy_mii.duplex = VAR_25;
  return;
 }


 VAR_19->want_autoneg = VAR_23;
 if (VAR_23) {
  if (FUNC_0(VAR_19))
   VAR_19->phy_mii.def->ops->setup_aneg(&VAR_19->phy_mii, VAR_21);
  VAR_19->lstate = VAR_15;
 } else {
  if (FUNC_0(VAR_19))
   VAR_19->phy_mii.def->ops->setup_forced(&VAR_19->phy_mii, VAR_24, VAR_25);
  VAR_19->lstate = VAR_16;
 }

non_mii:
 VAR_19->timer_ticks = 0;
 FUNC_1(&VAR_19->link_timer, VAR_14 + ((12 * VAR_4) / 10));
}
