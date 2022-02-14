
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tg3 {int phy_flags; TYPE_1__* mdio_bus; } ;
struct TYPE_2__ {int * phy_map; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct tg3 *VAR_2)
{
 if (VAR_2->phy_flags & VAR_0) {
  FUNC_0(VAR_2->mdio_bus->phy_map[VAR_1]);
  VAR_2->phy_flags &= ~VAR_0;
 }
}
