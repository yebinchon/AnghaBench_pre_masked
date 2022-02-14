
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {int radio_ver; int radio_rev; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_bbatt {int att; } ;



__attribute__((used)) static void FUNC_0(struct b43_wldev *VAR_0,
      struct b43_bbatt *VAR_1)
{
 struct b43_phy *VAR_2 = &VAR_0->phy;

 if (VAR_2->radio_ver == 0x2050 && VAR_2->radio_rev < 6)
  VAR_1->att = 0;
 else
  VAR_1->att = 2;
}
