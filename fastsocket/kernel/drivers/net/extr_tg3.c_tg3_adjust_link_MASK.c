
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_4__ {scalar_t__ active_flowctrl; scalar_t__ active_speed; scalar_t__ active_duplex; int flowctrl; } ;
struct tg3 {int mac_mode; scalar_t__ old_link; int lock; TYPE_2__ link_config; TYPE_1__* mdio_bus; } ;
struct phy_device {scalar_t__ link; scalar_t__ speed; scalar_t__ duplex; scalar_t__ asym_pause; scalar_t__ pause; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {struct phy_device** phy_map; } ;


 scalar_t__ VAR_0 ;
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
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int ) ;
 struct tg3* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct tg3*) ;
 int FUNC_5 (struct tg3*) ;
 int FUNC_6 (struct tg3*,int,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_20)
{
 u8 VAR_21, VAR_22 = 0;
 u32 VAR_23, VAR_24, VAR_25;
 struct tg3 *VAR_26 = FUNC_1(VAR_20);
 struct phy_device *VAR_27 = VAR_26->mdio_bus->phy_map[VAR_16];

 FUNC_2(&VAR_26->lock);

 VAR_23 = VAR_26->mac_mode & ~(VAR_10 |
        VAR_8);

 VAR_21 = VAR_26->link_config.active_flowctrl;

 if (VAR_27->link) {
  VAR_24 = 0;
  VAR_25 = 0;

  if (VAR_27->speed == VAR_14 || VAR_27->speed == VAR_13)
   VAR_23 |= VAR_11;
  else if (VAR_27->speed == VAR_15 ||
    FUNC_4(VAR_26) != VAR_0)
   VAR_23 |= VAR_9;
  else
   VAR_23 |= VAR_11;

  if (VAR_27->duplex == VAR_1)
   VAR_23 |= VAR_8;
  else {
   VAR_24 = FUNC_0(
      VAR_26->link_config.flowctrl);

   if (VAR_27->pause)
    VAR_25 = VAR_3;
   if (VAR_27->asym_pause)
    VAR_25 |= VAR_2;
  }

  FUNC_6(VAR_26, VAR_24, VAR_25);
 } else
  VAR_23 |= VAR_9;

 if (VAR_23 != VAR_26->mac_mode) {
  VAR_26->mac_mode = VAR_23;
  FUNC_8(VAR_7, VAR_26->mac_mode);
  FUNC_9(40);
 }

 if (FUNC_4(VAR_26) == VAR_0) {
  if (VAR_27->speed == VAR_13)
   FUNC_7(VAR_4,
        VAR_5 |
        VAR_6);
  else
   FUNC_7(VAR_4, VAR_6);
 }

 if (VAR_27->speed == VAR_15 && VAR_27->duplex == VAR_1)
  FUNC_7(VAR_12,
       ((2 << VAR_17) |
        (6 << VAR_18) |
        (0xff << VAR_19)));
 else
  FUNC_7(VAR_12,
       ((2 << VAR_17) |
        (6 << VAR_18) |
        (32 << VAR_19)));

 if (VAR_27->link != VAR_26->old_link ||
     VAR_27->speed != VAR_26->link_config.active_speed ||
     VAR_27->duplex != VAR_26->link_config.active_duplex ||
     VAR_21 != VAR_26->link_config.active_flowctrl)
  VAR_22 = 1;

 VAR_26->old_link = VAR_27->link;
 VAR_26->link_config.active_speed = VAR_27->speed;
 VAR_26->link_config.active_duplex = VAR_27->duplex;

 FUNC_3(&VAR_26->lock);

 if (VAR_22)
  FUNC_5(VAR_26);
}
