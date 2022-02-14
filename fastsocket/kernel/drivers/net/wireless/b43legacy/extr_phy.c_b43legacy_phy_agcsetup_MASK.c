
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43legacy_phy {int rev; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; } ;


 int FUNC_0 (struct b43legacy_wldev*,int,int) ;
 int FUNC_1 (struct b43legacy_wldev*,int) ;
 int FUNC_2 (struct b43legacy_wldev*,int,int) ;
 int FUNC_3 (struct b43legacy_wldev*,int) ;
 int FUNC_4 (struct b43legacy_wldev*,int,int) ;

__attribute__((used)) static void FUNC_5(struct b43legacy_wldev *VAR_0)
{
 struct b43legacy_phy *VAR_1 = &VAR_0->phy;
 u16 VAR_2 = 0x0000;

 if (VAR_1->rev == 1)
  VAR_2 = 0x4C00;

 FUNC_0(VAR_0, VAR_2, 0x00FE);
 FUNC_0(VAR_0, VAR_2 + 1, 0x000D);
 FUNC_0(VAR_0, VAR_2 + 2, 0x0013);
 FUNC_0(VAR_0, VAR_2 + 3, 0x0019);

 if (VAR_1->rev == 1) {
  FUNC_0(VAR_0, 0x1800, 0x2710);
  FUNC_0(VAR_0, 0x1801, 0x9B83);
  FUNC_0(VAR_0, 0x1802, 0x9B83);
  FUNC_0(VAR_0, 0x1803, 0x0F8D);
  FUNC_2(VAR_0, 0x0455, 0x0004);
 }

 FUNC_2(VAR_0, 0x04A5, (FUNC_1(VAR_0, 0x04A5)
       & 0x00FF) | 0x5700);
 FUNC_2(VAR_0, 0x041A, (FUNC_1(VAR_0, 0x041A)
       & 0xFF80) | 0x000F);
 FUNC_2(VAR_0, 0x041A, (FUNC_1(VAR_0, 0x041A)
       & 0xC07F) | 0x2B80);
 FUNC_2(VAR_0, 0x048C, (FUNC_1(VAR_0, 0x048C)
       & 0xF0FF) | 0x0300);

 FUNC_4(VAR_0, 0x007A,
    FUNC_3(VAR_0, 0x007A)
    | 0x0008);

 FUNC_2(VAR_0, 0x04A0, (FUNC_1(VAR_0, 0x04A0)
       & 0xFFF0) | 0x0008);
 FUNC_2(VAR_0, 0x04A1, (FUNC_1(VAR_0, 0x04A1)
       & 0xF0FF) | 0x0600);
 FUNC_2(VAR_0, 0x04A2, (FUNC_1(VAR_0, 0x04A2)
       & 0xF0FF) | 0x0700);
 FUNC_2(VAR_0, 0x04A0, (FUNC_1(VAR_0, 0x04A0)
       & 0xF0FF) | 0x0100);

 if (VAR_1->rev == 1)
  FUNC_2(VAR_0, 0x04A2,
        (FUNC_1(VAR_0, 0x04A2)
        & 0xFFF0) | 0x0007);

 FUNC_2(VAR_0, 0x0488, (FUNC_1(VAR_0, 0x0488)
       & 0xFF00) | 0x001C);
 FUNC_2(VAR_0, 0x0488, (FUNC_1(VAR_0, 0x0488)
       & 0xC0FF) | 0x0200);
 FUNC_2(VAR_0, 0x0496, (FUNC_1(VAR_0, 0x0496)
       & 0xFF00) | 0x001C);
 FUNC_2(VAR_0, 0x0489, (FUNC_1(VAR_0, 0x0489)
       & 0xFF00) | 0x0020);
 FUNC_2(VAR_0, 0x0489, (FUNC_1(VAR_0, 0x0489)
       & 0xC0FF) | 0x0200);
 FUNC_2(VAR_0, 0x0482, (FUNC_1(VAR_0, 0x0482)
       & 0xFF00) | 0x002E);
 FUNC_2(VAR_0, 0x0496, (FUNC_1(VAR_0, 0x0496)
       & 0x00FF) | 0x1A00);
 FUNC_2(VAR_0, 0x0481, (FUNC_1(VAR_0, 0x0481)
       & 0xFF00) | 0x0028);
 FUNC_2(VAR_0, 0x0481, (FUNC_1(VAR_0, 0x0481)
       & 0x00FF) | 0x2C00);

 if (VAR_1->rev == 1) {
  FUNC_2(VAR_0, 0x0430, 0x092B);
  FUNC_2(VAR_0, 0x041B,
        (FUNC_1(VAR_0, 0x041B)
        & 0xFFE1) | 0x0002);
 } else {
  FUNC_2(VAR_0, 0x041B,
        FUNC_1(VAR_0, 0x041B) & 0xFFE1);
  FUNC_2(VAR_0, 0x041F, 0x287A);
  FUNC_2(VAR_0, 0x0420,
        (FUNC_1(VAR_0, 0x0420)
        & 0xFFF0) | 0x0004);
 }

 if (VAR_1->rev > 2) {
  FUNC_2(VAR_0, 0x0422, 0x287A);
  FUNC_2(VAR_0, 0x0420,
        (FUNC_1(VAR_0, 0x0420)
        & 0x0FFF) | 0x3000);
 }

 FUNC_2(VAR_0, 0x04A8, (FUNC_1(VAR_0, 0x04A8)
       & 0x8080) | 0x7874);
 FUNC_2(VAR_0, 0x048E, 0x1C00);

 if (VAR_1->rev == 1) {
  FUNC_2(VAR_0, 0x04AB,
        (FUNC_1(VAR_0, 0x04AB)
        & 0xF0FF) | 0x0600);
  FUNC_2(VAR_0, 0x048B, 0x005E);
  FUNC_2(VAR_0, 0x048C,
        (FUNC_1(VAR_0, 0x048C) & 0xFF00)
        | 0x001E);
  FUNC_2(VAR_0, 0x048D, 0x0002);
 }

 FUNC_0(VAR_0, VAR_2 + 0x0800, 0);
 FUNC_0(VAR_0, VAR_2 + 0x0801, 7);
 FUNC_0(VAR_0, VAR_2 + 0x0802, 16);
 FUNC_0(VAR_0, VAR_2 + 0x0803, 28);

 if (VAR_1->rev >= 6) {
  FUNC_2(VAR_0, 0x0426,
        (FUNC_1(VAR_0, 0x0426) & 0xFFFC));
  FUNC_2(VAR_0, 0x0426,
        (FUNC_1(VAR_0, 0x0426) & 0xEFFF));
 }
}
