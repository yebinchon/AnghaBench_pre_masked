
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int giga; int mbit; int isup; int full; } ;
struct s6gmac {TYPE_1__ link; struct phy_device* phydev; } ;
struct phy_device {int speed; int duplex; } ;
struct net_device {int dummy; } ;


 struct s6gmac* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct s6gmac*) ;

__attribute__((used)) static inline void FUNC_4(struct net_device *VAR_0, int VAR_1)
{
 struct s6gmac *VAR_2 = FUNC_0(VAR_0);
 struct phy_device *VAR_3 = VAR_2->phydev;

 VAR_2->link.full = VAR_3->duplex;
 VAR_2->link.giga = (VAR_3->speed == 1000);
 if (VAR_2->link.mbit != VAR_3->speed) {
  VAR_2->link.mbit = VAR_3->speed;
  FUNC_3(VAR_2);
 }
 VAR_2->link.isup = VAR_1;
 if (VAR_1)
  FUNC_1(VAR_0);
 FUNC_2(VAR_3);
}
