
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {int rev; struct b43_phy_g* g; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_phy_g {scalar_t__ cur_idle_tssi; scalar_t__ tgt_idle_tssi; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*,int) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*) ;
 int FUNC_5 (struct b43_wldev*) ;
 int FUNC_6 (struct b43_wldev*,int) ;
 int FUNC_7 (struct b43_wldev*,int,int) ;
 int FUNC_8 (struct b43_wldev*,int,int,scalar_t__) ;
 int FUNC_9 (struct b43_wldev*,int,int) ;
 int FUNC_10 (struct b43_wldev*,int,int) ;

__attribute__((used)) static void FUNC_11(struct b43_wldev *VAR_1)
{
 struct b43_phy *VAR_2 = &VAR_1->phy;
 struct b43_phy_g *VAR_3 = VAR_2->g;

 if (!FUNC_4(VAR_1)) {

  FUNC_6(VAR_1, FUNC_5(VAR_1) & ~VAR_0);
  return;
 }

 FUNC_8(VAR_1, 0x0036, 0xFFC0, (VAR_3->tgt_idle_tssi - VAR_3->cur_idle_tssi));
 FUNC_8(VAR_1, 0x0478, 0xFF00, (VAR_3->tgt_idle_tssi - VAR_3->cur_idle_tssi));
 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
 FUNC_7(VAR_1, 0x0060, 0xFFBF);
 FUNC_10(VAR_1, 0x0014, 0x0000);

 FUNC_0(VAR_2->rev < 6);
 FUNC_9(VAR_1, 0x0478, 0x0800);
 FUNC_7(VAR_1, 0x0478, 0xFEFF);
 FUNC_7(VAR_1, 0x0801, 0xFFBF);

 FUNC_1(VAR_1, 1);


 FUNC_6(VAR_1, FUNC_5(VAR_1) | VAR_0);
}
