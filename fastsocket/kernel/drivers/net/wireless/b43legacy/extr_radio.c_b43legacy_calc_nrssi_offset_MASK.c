
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43legacy_phy {int rev; scalar_t__ analog; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; } ;
typedef int s16 ;


 int FUNC_0 (struct b43legacy_wldev*,int) ;
 int FUNC_1 (struct b43legacy_wldev*,int,int) ;
 int FUNC_2 (struct b43legacy_wldev*,int) ;
 int FUNC_3 (struct b43legacy_wldev*,int,int) ;
 int FUNC_4 (struct b43legacy_wldev*,int,int ,int) ;
 int FUNC_5 (struct b43legacy_wldev*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct b43legacy_wldev *VAR_0)
{
 struct b43legacy_phy *VAR_1 = &VAR_0->phy;
 u16 VAR_2[20] = { 0 };
 s16 VAR_3;
 u16 VAR_4;
 u16 VAR_5 = 0xFFFF;

 VAR_2[0] = FUNC_0(VAR_0, 0x0001);
 VAR_2[1] = FUNC_0(VAR_0, 0x0811);
 VAR_2[2] = FUNC_0(VAR_0, 0x0812);
 VAR_2[3] = FUNC_0(VAR_0, 0x0814);
 VAR_2[4] = FUNC_0(VAR_0, 0x0815);
 VAR_2[5] = FUNC_0(VAR_0, 0x005A);
 VAR_2[6] = FUNC_0(VAR_0, 0x0059);
 VAR_2[7] = FUNC_0(VAR_0, 0x0058);
 VAR_2[8] = FUNC_0(VAR_0, 0x000A);
 VAR_2[9] = FUNC_0(VAR_0, 0x0003);
 VAR_2[10] = FUNC_2(VAR_0, 0x007A);
 VAR_2[11] = FUNC_2(VAR_0, 0x0043);

 FUNC_1(VAR_0, 0x0429,
       FUNC_0(VAR_0, 0x0429) & 0x7FFF);
 FUNC_1(VAR_0, 0x0001,
       (FUNC_0(VAR_0, 0x0001) & 0x3FFF)
       | 0x4000);
 FUNC_1(VAR_0, 0x0811,
       FUNC_0(VAR_0, 0x0811) | 0x000C);
 FUNC_1(VAR_0, 0x0812,
       (FUNC_0(VAR_0, 0x0812) & 0xFFF3)
       | 0x0004);
 FUNC_1(VAR_0, 0x0802,
       FUNC_0(VAR_0, 0x0802) & ~(0x1 | 0x2));
 if (VAR_1->rev >= 6) {
  VAR_2[12] = FUNC_0(VAR_0, 0x002E);
  VAR_2[13] = FUNC_0(VAR_0, 0x002F);
  VAR_2[14] = FUNC_0(VAR_0, 0x080F);
  VAR_2[15] = FUNC_0(VAR_0, 0x0810);
  VAR_2[16] = FUNC_0(VAR_0, 0x0801);
  VAR_2[17] = FUNC_0(VAR_0, 0x0060);
  VAR_2[18] = FUNC_0(VAR_0, 0x0014);
  VAR_2[19] = FUNC_0(VAR_0, 0x0478);

  FUNC_1(VAR_0, 0x002E, 0);
  FUNC_1(VAR_0, 0x002F, 0);
  FUNC_1(VAR_0, 0x080F, 0);
  FUNC_1(VAR_0, 0x0810, 0);
  FUNC_1(VAR_0, 0x0478,
        FUNC_0(VAR_0, 0x0478) | 0x0100);
  FUNC_1(VAR_0, 0x0801,
        FUNC_0(VAR_0, 0x0801) | 0x0040);
  FUNC_1(VAR_0, 0x0060,
        FUNC_0(VAR_0, 0x0060) | 0x0040);
  FUNC_1(VAR_0, 0x0014,
        FUNC_0(VAR_0, 0x0014) | 0x0200);
 }
 FUNC_3(VAR_0, 0x007A,
    FUNC_2(VAR_0, 0x007A) | 0x0070);
 FUNC_3(VAR_0, 0x007A,
    FUNC_2(VAR_0, 0x007A) | 0x0080);
 FUNC_6(30);

 VAR_3 = (s16)((FUNC_0(VAR_0, 0x047F) >> 8) & 0x003F);
 if (VAR_3 >= 0x20)
  VAR_3 -= 0x40;
 if (VAR_3 == 31) {
  for (VAR_4 = 7; VAR_4 >= 4; VAR_4--) {
   FUNC_3(VAR_0, 0x007B, VAR_4);
   FUNC_6(20);
   VAR_3 = (s16)((FUNC_0(VAR_0, 0x047F) >> 8)
        & 0x003F);
   if (VAR_3 >= 0x20)
    VAR_3 -= 0x40;
   if (VAR_3 < 31 && VAR_5 == 0xFFFF)
    VAR_5 = VAR_4;
  }
  if (VAR_5 == 0xFFFF)
   VAR_5 = 4;
 } else {
  FUNC_3(VAR_0, 0x007A,
     FUNC_2(VAR_0, 0x007A)
     & 0x007F);
  FUNC_1(VAR_0, 0x0814,
        FUNC_0(VAR_0, 0x0814) | 0x0001);
  FUNC_1(VAR_0, 0x0815,
        FUNC_0(VAR_0, 0x0815) & 0xFFFE);
  FUNC_1(VAR_0, 0x0811,
        FUNC_0(VAR_0, 0x0811) | 0x000C);
  FUNC_1(VAR_0, 0x0812,
        FUNC_0(VAR_0, 0x0812) | 0x000C);
  FUNC_1(VAR_0, 0x0811,
        FUNC_0(VAR_0, 0x0811) | 0x0030);
  FUNC_1(VAR_0, 0x0812,
        FUNC_0(VAR_0, 0x0812) | 0x0030);
  FUNC_1(VAR_0, 0x005A, 0x0480);
  FUNC_1(VAR_0, 0x0059, 0x0810);
  FUNC_1(VAR_0, 0x0058, 0x000D);
  if (VAR_1->analog == 0)
   FUNC_1(VAR_0, 0x0003, 0x0122);
  else
   FUNC_1(VAR_0, 0x000A,
         FUNC_0(VAR_0, 0x000A)
         | 0x2000);
  FUNC_1(VAR_0, 0x0814,
        FUNC_0(VAR_0, 0x0814) | 0x0004);
  FUNC_1(VAR_0, 0x0815,
        FUNC_0(VAR_0, 0x0815) & 0xFFFB);
  FUNC_1(VAR_0, 0x0003,
        (FUNC_0(VAR_0, 0x0003) & 0xFF9F)
        | 0x0040);
  FUNC_3(VAR_0, 0x007A,
     FUNC_2(VAR_0, 0x007A)
     | 0x000F);
  FUNC_4(VAR_0, 3, 0, 1);
  FUNC_3(VAR_0, 0x0043,
     (FUNC_2(VAR_0, 0x0043)
     & 0x00F0) | 0x000F);
  FUNC_6(30);
  VAR_3 = (s16)((FUNC_0(VAR_0, 0x047F) >> 8) & 0x003F);
  if (VAR_3 >= 0x20)
   VAR_3 -= 0x40;
  if (VAR_3 == -32) {
   for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
    FUNC_3(VAR_0, 0x007B, VAR_4);
    FUNC_6(20);
    VAR_3 = (s16)((FUNC_0(VAR_0, 0x047F) >>
         8) & 0x003F);
    if (VAR_3 >= 0x20)
     VAR_3 -= 0x40;
    if (VAR_3 > -31 && VAR_5 == 0xFFFF)
     VAR_5 = VAR_4;
   }
   if (VAR_5 == 0xFFFF)
    VAR_5 = 3;
  } else
   VAR_5 = 0;
 }
 FUNC_3(VAR_0, 0x007B, VAR_5);

 if (VAR_1->rev >= 6) {
  FUNC_1(VAR_0, 0x002E, VAR_2[12]);
  FUNC_1(VAR_0, 0x002F, VAR_2[13]);
  FUNC_1(VAR_0, 0x080F, VAR_2[14]);
  FUNC_1(VAR_0, 0x0810, VAR_2[15]);
 }
 FUNC_1(VAR_0, 0x0814, VAR_2[3]);
 FUNC_1(VAR_0, 0x0815, VAR_2[4]);
 FUNC_1(VAR_0, 0x005A, VAR_2[5]);
 FUNC_1(VAR_0, 0x0059, VAR_2[6]);
 FUNC_1(VAR_0, 0x0058, VAR_2[7]);
 FUNC_1(VAR_0, 0x000A, VAR_2[8]);
 FUNC_1(VAR_0, 0x0003, VAR_2[9]);
 FUNC_3(VAR_0, 0x0043, VAR_2[11]);
 FUNC_3(VAR_0, 0x007A, VAR_2[10]);
 FUNC_1(VAR_0, 0x0802,
       FUNC_0(VAR_0, 0x0802) | 0x1 | 0x2);
 FUNC_1(VAR_0, 0x0429,
       FUNC_0(VAR_0, 0x0429) | 0x8000);
 FUNC_5(VAR_0);
 if (VAR_1->rev >= 6) {
  FUNC_1(VAR_0, 0x0801, VAR_2[16]);
  FUNC_1(VAR_0, 0x0060, VAR_2[17]);
  FUNC_1(VAR_0, 0x0014, VAR_2[18]);
  FUNC_1(VAR_0, 0x0478, VAR_2[19]);
 }
 FUNC_1(VAR_0, 0x0001, VAR_2[0]);
 FUNC_1(VAR_0, 0x0812, VAR_2[2]);
 FUNC_1(VAR_0, 0x0811, VAR_2[1]);
}
