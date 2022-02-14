
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_phy {int rev; } ;
struct b43_wldev {struct b43_phy phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct b43_wldev*,int ,int ,int) ;
 int FUNC_1 (struct b43_wldev*,int ,int) ;
 int FUNC_2 (struct b43_wldev*,int,int,int) ;
 int FUNC_3 (struct b43_wldev*,int,int) ;
 int FUNC_4 (struct b43_wldev*,int,int) ;

void FUNC_5(struct b43_wldev *VAR_3)
{
 struct b43_phy *VAR_4 = &VAR_3->phy;

 FUNC_3(VAR_3, VAR_1, 0x1FF9);
 FUNC_1(VAR_3, VAR_2, 0xFF0F);
 if (VAR_4->rev <= 2)
  FUNC_0(VAR_3, VAR_0, 0, 0x1FBF);
 FUNC_4(VAR_3, 0x0002, 0x1FBF);

 FUNC_3(VAR_3, 0x0024, 0x4680);
 FUNC_3(VAR_3, 0x0020, 0x0003);
 FUNC_3(VAR_3, 0x001D, 0x0F40);
 FUNC_3(VAR_3, 0x001F, 0x1C00);
 if (VAR_4->rev <= 3)
  FUNC_2(VAR_3, 0x002A, 0x00FF, 0x0400);
 else if (VAR_4->rev == 5) {
  FUNC_2(VAR_3, 0x002A, 0x00FF, 0x1A00);
  FUNC_3(VAR_3, 0x00CC, 0x2121);
 }
 if (VAR_4->rev >= 3)
  FUNC_3(VAR_3, 0x00BA, 0x3ED5);
}
