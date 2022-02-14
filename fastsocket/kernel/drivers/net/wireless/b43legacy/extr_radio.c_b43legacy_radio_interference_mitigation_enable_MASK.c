
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct b43legacy_phy {int* interfstack; int rev; int aci_enable; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct b43legacy_wldev*) ;
 int FUNC_2 (struct b43legacy_wldev*) ;
 int FUNC_3 (struct b43legacy_wldev*,int,int) ;
 int FUNC_4 (struct b43legacy_wldev*,int) ;
 int FUNC_5 (struct b43legacy_wldev*,int,int) ;
 int FUNC_6 (struct b43legacy_wldev*,int) ;
 int FUNC_7 (struct b43legacy_wldev*,int,int) ;
 int FUNC_8 (struct b43legacy_wldev*,int ,int ) ;
 int FUNC_9 (struct b43legacy_wldev*,int ,int ,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;

__attribute__((used)) static void
FUNC_14(struct b43legacy_wldev *VAR_4,
            int VAR_5)
{
 struct b43legacy_phy *VAR_6 = &VAR_4->phy;
 u16 VAR_7;
 u16 VAR_8;
 u32 VAR_9;
 size_t VAR_10 = 0;
 u32 *VAR_11 = VAR_6->interfstack;

 switch (VAR_5) {
 case 128:
  if (VAR_6->rev != 1) {
   FUNC_5(VAR_4, 0x042B,
         FUNC_4(VAR_4, 0x042B)
         | 0x0800);
   FUNC_5(VAR_4, VAR_0,
         FUNC_4(VAR_4,
         VAR_0) & ~0x4000);
   break;
  }
  FUNC_13(0x0078);
  VAR_7 = (FUNC_6(VAR_4, 0x0078) & 0x001E);
  VAR_8 = FUNC_10(VAR_7);
  if (VAR_8 < 10 && VAR_8 >= 8)
   VAR_8 = 7;
  else if (VAR_8 >= 10)
   VAR_8 -= 3;
  VAR_8 = FUNC_10(VAR_8);
  VAR_8 = (VAR_8 << 1) | 0x0020;
  FUNC_7(VAR_4, 0x0078, VAR_8);

  FUNC_2(VAR_4);

  FUNC_12(0x0406);
  FUNC_5(VAR_4, 0x0406, 0x7E28);

  FUNC_5(VAR_4, 0x042B,
        FUNC_4(VAR_4, 0x042B) | 0x0800);
  FUNC_5(VAR_4, VAR_1,
        FUNC_4(VAR_4,
        VAR_1) | 0x1000);

  FUNC_12(0x04A0);
  FUNC_5(VAR_4, 0x04A0,
        (FUNC_4(VAR_4, 0x04A0) & 0xC0C0)
        | 0x0008);
  FUNC_12(0x04A1);
  FUNC_5(VAR_4, 0x04A1,
        (FUNC_4(VAR_4, 0x04A1) & 0xC0C0)
        | 0x0605);
  FUNC_12(0x04A2);
  FUNC_5(VAR_4, 0x04A2,
        (FUNC_4(VAR_4, 0x04A2) & 0xC0C0)
        | 0x0204);
  FUNC_12(0x04A8);
  FUNC_5(VAR_4, 0x04A8,
        (FUNC_4(VAR_4, 0x04A8) & 0xC0C0)
        | 0x0803);
  FUNC_12(0x04AB);
  FUNC_5(VAR_4, 0x04AB,
        (FUNC_4(VAR_4, 0x04AB) & 0xC0C0)
        | 0x0605);

  FUNC_12(0x04A7);
  FUNC_5(VAR_4, 0x04A7, 0x0002);
  FUNC_12(0x04A3);
  FUNC_5(VAR_4, 0x04A3, 0x287A);
  FUNC_12(0x04A9);
  FUNC_5(VAR_4, 0x04A9, 0x2027);
  FUNC_12(0x0493);
  FUNC_5(VAR_4, 0x0493, 0x32F5);
  FUNC_12(0x04AA);
  FUNC_5(VAR_4, 0x04AA, 0x2027);
  FUNC_12(0x04AC);
  FUNC_5(VAR_4, 0x04AC, 0x32F5);
  break;
 case 129:
  if (FUNC_4(VAR_4, 0x0033) & 0x0800)
   break;

  VAR_6->aci_enable = 1;

  FUNC_12(VAR_1);
  FUNC_12(VAR_0);
  if (VAR_6->rev < 2)
   FUNC_12(0x0406);
  else {
   FUNC_12(0x04C0);
   FUNC_12(0x04C1);
  }
  FUNC_12(0x0033);
  FUNC_12(0x04A7);
  FUNC_12(0x04A3);
  FUNC_12(0x04A9);
  FUNC_12(0x04AA);
  FUNC_12(0x04AC);
  FUNC_12(0x0493);
  FUNC_12(0x04A1);
  FUNC_12(0x04A0);
  FUNC_12(0x04A2);
  FUNC_12(0x048A);
  FUNC_12(0x04A8);
  FUNC_12(0x04AB);
  if (VAR_6->rev == 2) {
   FUNC_12(0x04AD);
   FUNC_12(0x04AE);
  } else if (VAR_6->rev >= 3) {
   FUNC_12(0x04AD);
   FUNC_12(0x0415);
   FUNC_12(0x0416);
   FUNC_12(0x0417);
   FUNC_11(0x1A00 + 0x2);
   FUNC_11(0x1A00 + 0x3);
  }
  FUNC_12(0x042B);
  FUNC_12(0x048C);

  FUNC_5(VAR_4, VAR_1,
        FUNC_4(VAR_4,
        VAR_1) & ~0x1000);
  FUNC_5(VAR_4, VAR_0,
        (FUNC_4(VAR_4,
        VAR_0)
        & 0xFFFC) | 0x0002);

  FUNC_5(VAR_4, 0x0033, 0x0800);
  FUNC_5(VAR_4, 0x04A3, 0x2027);
  FUNC_5(VAR_4, 0x04A9, 0x1CA8);
  FUNC_5(VAR_4, 0x0493, 0x287A);
  FUNC_5(VAR_4, 0x04AA, 0x1CA8);
  FUNC_5(VAR_4, 0x04AC, 0x287A);

  FUNC_5(VAR_4, 0x04A0,
        (FUNC_4(VAR_4, 0x04A0)
        & 0xFFC0) | 0x001A);
  FUNC_5(VAR_4, 0x04A7, 0x000D);

  if (VAR_6->rev < 2)
   FUNC_5(VAR_4, 0x0406, 0xFF0D);
  else if (VAR_6->rev == 2) {
   FUNC_5(VAR_4, 0x04C0, 0xFFFF);
   FUNC_5(VAR_4, 0x04C1, 0x00A9);
  } else {
   FUNC_5(VAR_4, 0x04C0, 0x00C1);
   FUNC_5(VAR_4, 0x04C1, 0x0059);
  }

  FUNC_5(VAR_4, 0x04A1,
        (FUNC_4(VAR_4, 0x04A1)
        & 0xC0FF) | 0x1800);
  FUNC_5(VAR_4, 0x04A1,
        (FUNC_4(VAR_4, 0x04A1)
        & 0xFFC0) | 0x0015);
  FUNC_5(VAR_4, 0x04A8,
        (FUNC_4(VAR_4, 0x04A8)
        & 0xCFFF) | 0x1000);
  FUNC_5(VAR_4, 0x04A8,
        (FUNC_4(VAR_4, 0x04A8)
        & 0xF0FF) | 0x0A00);
  FUNC_5(VAR_4, 0x04AB,
        (FUNC_4(VAR_4, 0x04AB)
        & 0xCFFF) | 0x1000);
  FUNC_5(VAR_4, 0x04AB,
        (FUNC_4(VAR_4, 0x04AB)
        & 0xF0FF) | 0x0800);
  FUNC_5(VAR_4, 0x04AB,
        (FUNC_4(VAR_4, 0x04AB)
        & 0xFFCF) | 0x0010);
  FUNC_5(VAR_4, 0x04AB,
        (FUNC_4(VAR_4, 0x04AB)
        & 0xFFF0) | 0x0005);
  FUNC_5(VAR_4, 0x04A8,
        (FUNC_4(VAR_4, 0x04A8)
        & 0xFFCF) | 0x0010);
  FUNC_5(VAR_4, 0x04A8,
        (FUNC_4(VAR_4, 0x04A8)
        & 0xFFF0) | 0x0006);
  FUNC_5(VAR_4, 0x04A2,
        (FUNC_4(VAR_4, 0x04A2)
        & 0xF0FF) | 0x0800);
  FUNC_5(VAR_4, 0x04A0,
        (FUNC_4(VAR_4, 0x04A0)
        & 0xF0FF) | 0x0500);
  FUNC_5(VAR_4, 0x04A2,
        (FUNC_4(VAR_4, 0x04A2)
        & 0xFFF0) | 0x000B);

  if (VAR_6->rev >= 3) {
   FUNC_5(VAR_4, 0x048A,
         FUNC_4(VAR_4, 0x048A)
         & ~0x8000);
   FUNC_5(VAR_4, 0x0415,
         (FUNC_4(VAR_4, 0x0415)
         & 0x8000) | 0x36D8);
   FUNC_5(VAR_4, 0x0416,
         (FUNC_4(VAR_4, 0x0416)
         & 0x8000) | 0x36D8);
   FUNC_5(VAR_4, 0x0417,
         (FUNC_4(VAR_4, 0x0417)
         & 0xFE00) | 0x016D);
  } else {
   FUNC_5(VAR_4, 0x048A,
         FUNC_4(VAR_4, 0x048A)
         | 0x1000);
   FUNC_5(VAR_4, 0x048A,
         (FUNC_4(VAR_4, 0x048A)
         & 0x9FFF) | 0x2000);
   VAR_9 = FUNC_8(VAR_4, VAR_2,
         VAR_3);
   if (!(VAR_9 & 0x800)) {
    VAR_9 |= 0x800;
    FUNC_9(VAR_4, VAR_2,
         VAR_3,
         VAR_9);
   }
  }
  if (VAR_6->rev >= 2)
   FUNC_5(VAR_4, 0x042B,
         FUNC_4(VAR_4, 0x042B)
         | 0x0800);
  FUNC_5(VAR_4, 0x048C,
        (FUNC_4(VAR_4, 0x048C)
        & 0xF0FF) | 0x0200);
  if (VAR_6->rev == 2) {
   FUNC_5(VAR_4, 0x04AE,
         (FUNC_4(VAR_4, 0x04AE)
         & 0xFF00) | 0x007F);
   FUNC_5(VAR_4, 0x04AD,
         (FUNC_4(VAR_4, 0x04AD)
         & 0x00FF) | 0x1300);
  } else if (VAR_6->rev >= 6) {
   FUNC_3(VAR_4, 0x1A00 + 0x3, 0x007F);
   FUNC_3(VAR_4, 0x1A00 + 0x2, 0x007F);
   FUNC_5(VAR_4, 0x04AD,
         FUNC_4(VAR_4, 0x04AD)
         & 0x00FF);
  }
  FUNC_1(VAR_4);
  break;
 default:
  FUNC_0(1);
 }
}
