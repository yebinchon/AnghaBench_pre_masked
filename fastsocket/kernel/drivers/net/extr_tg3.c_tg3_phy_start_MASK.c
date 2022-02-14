
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int advertising; int autoneg; int duplex; int speed; } ;
struct tg3 {int phy_flags; TYPE_1__ link_config; TYPE_2__* mdio_bus; } ;
struct phy_device {int advertising; int autoneg; int duplex; int speed; } ;
struct TYPE_4__ {struct phy_device** phy_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*) ;

__attribute__((used)) static void FUNC_2(struct tg3 *VAR_3)
{
 struct phy_device *VAR_4;

 if (!(VAR_3->phy_flags & VAR_0))
  return;

 VAR_4 = VAR_3->mdio_bus->phy_map[VAR_2];

 if (VAR_3->phy_flags & VAR_1) {
  VAR_3->phy_flags &= ~VAR_1;
  VAR_4->speed = VAR_3->link_config.speed;
  VAR_4->duplex = VAR_3->link_config.duplex;
  VAR_4->autoneg = VAR_3->link_config.autoneg;
  VAR_4->advertising = VAR_3->link_config.advertising;
 }

 FUNC_0(VAR_4);

 FUNC_1(VAR_4);
}
