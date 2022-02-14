
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {int radio_ver; int radio_rev; } ;
struct b43_wldev {struct b43_phy phy; } ;


 int FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_wldev*,int,int) ;
 int FUNC_2 (struct b43_wldev*,int,int,int) ;
 int FUNC_3 (struct b43_wldev*,int,int) ;
 int FUNC_4 (struct b43_wldev*,int,int) ;

__attribute__((used)) static void FUNC_5(struct b43_wldev *VAR_0)
{
 struct b43_phy *VAR_1 = &VAR_0->phy;

 if (!FUNC_0(VAR_0)) {
  FUNC_4(VAR_0, 0x047A, 0xC111);
  return;
 }

 FUNC_1(VAR_0, 0x0036, 0xFEFF);
 FUNC_4(VAR_0, 0x002F, 0x0202);
 FUNC_3(VAR_0, 0x047C, 0x0002);
 FUNC_3(VAR_0, 0x047A, 0xF000);
 if (VAR_1->radio_ver == 0x2050 && VAR_1->radio_rev == 8) {
  FUNC_2(VAR_0, 0x047A, 0xFF0F, 0x0010);
  FUNC_3(VAR_0, 0x005D, 0x8000);
  FUNC_2(VAR_0, 0x004E, 0xFFC0, 0x0010);
  FUNC_4(VAR_0, 0x002E, 0xC07F);
  FUNC_3(VAR_0, 0x0036, 0x0400);
 } else {
  FUNC_3(VAR_0, 0x0036, 0x0200);
  FUNC_3(VAR_0, 0x0036, 0x0400);
  FUNC_1(VAR_0, 0x005D, 0x7FFF);
  FUNC_1(VAR_0, 0x004F, 0xFFFE);
  FUNC_2(VAR_0, 0x004E, 0xFFC0, 0x0010);
  FUNC_4(VAR_0, 0x002E, 0xC07F);
  FUNC_2(VAR_0, 0x047A, 0xFF0F, 0x0010);
 }
}
