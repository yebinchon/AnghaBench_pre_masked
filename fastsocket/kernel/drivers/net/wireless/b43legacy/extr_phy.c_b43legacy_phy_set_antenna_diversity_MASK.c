
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct b43legacy_phy {int antenna_diversity; int type; int rev; } ;
struct b43legacy_wldev {TYPE_2__* dev; struct b43legacy_phy phy; } ;
struct TYPE_3__ {int revision; } ;
struct TYPE_4__ {TYPE_1__ id; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43legacy_wldev*,int) ;
 int FUNC_2 (struct b43legacy_wldev*,int,int) ;
 int FUNC_3 (struct b43legacy_wldev*,int ,int ) ;
 int FUNC_4 (struct b43legacy_wldev*,int ,int ,int) ;

void FUNC_5(struct b43legacy_wldev *VAR_3)
{
 struct b43legacy_phy *VAR_4 = &VAR_3->phy;
 u16 VAR_5;
 u16 VAR_6;
 u16 VAR_7;
 u32 VAR_8;

 VAR_5 = VAR_4->antenna_diversity;

 if (VAR_5 == 0xFFFF)
  VAR_5 = 3;
 FUNC_0(VAR_5 > 3);

 VAR_8 = FUNC_3(VAR_3, VAR_0,
       VAR_1);
 FUNC_4(VAR_3, VAR_0,
         VAR_1,
         VAR_8 & ~VAR_2);

 switch (VAR_4->type) {
 case 128:
  VAR_6 = 0x0400;

  if (VAR_5 == 2)
   VAR_7 = (3 << 7);
  else
   VAR_7 = (VAR_5 << 7);
  FUNC_2(VAR_3, VAR_6 + 1,
        (FUNC_1(VAR_3, VAR_6 + 1)
        & 0x7E7F) | VAR_7);

  if (VAR_5 >= 2) {
   if (VAR_5 == 2)
    VAR_7 = (VAR_5 << 7);
   else
    VAR_7 = (0 << 7);
   FUNC_2(VAR_3, VAR_6 + 0x2B,
         (FUNC_1(VAR_3,
         VAR_6 + 0x2B)
         & 0xFEFF) | VAR_7);
  }

  if (VAR_4->type == 128) {
   if (VAR_5 >= 2)
    FUNC_2(VAR_3, 0x048C,
          FUNC_1(VAR_3,
          0x048C) | 0x2000);
   else
    FUNC_2(VAR_3, 0x048C,
          FUNC_1(VAR_3,
          0x048C) & ~0x2000);
   if (VAR_4->rev >= 2) {
    FUNC_2(VAR_3, 0x0461,
          FUNC_1(VAR_3,
          0x0461) | 0x0010);
    FUNC_2(VAR_3, 0x04AD,
          (FUNC_1(VAR_3,
          0x04AD)
          & 0x00FF) | 0x0015);
    if (VAR_4->rev == 2)
     FUNC_2(VAR_3, 0x0427,
           0x0008);
    else
     FUNC_2(VAR_3, 0x0427,
      (FUNC_1(VAR_3, 0x0427)
       & 0x00FF) | 0x0008);
   } else if (VAR_4->rev >= 6)
    FUNC_2(VAR_3, 0x049B, 0x00DC);
  } else {
   if (VAR_4->rev < 3)
    FUNC_2(VAR_3, 0x002B,
          (FUNC_1(VAR_3,
          0x002B) & 0x00FF)
          | 0x0024);
   else {
    FUNC_2(VAR_3, 0x0061,
          FUNC_1(VAR_3,
          0x0061) | 0x0010);
    if (VAR_4->rev == 3) {
     FUNC_2(VAR_3, 0x0093,
           0x001D);
     FUNC_2(VAR_3, 0x0027,
           0x0008);
    } else {
     FUNC_2(VAR_3, 0x0093,
           0x003A);
     FUNC_2(VAR_3, 0x0027,
      (FUNC_1(VAR_3, 0x0027)
       & 0x00FF) | 0x0008);
    }
   }
  }
  break;
 case 129:
  if (VAR_3->dev->id.revision == 2)
   VAR_7 = (3 << 7);
  else
   VAR_7 = (VAR_5 << 7);
  FUNC_2(VAR_3, 0x03E2,
        (FUNC_1(VAR_3, 0x03E2)
        & 0xFE7F) | VAR_7);
  break;
 default:
  FUNC_0(1);
 }

 if (VAR_5 >= 2) {
  VAR_8 = FUNC_3(VAR_3, VAR_0,
        VAR_1);
  FUNC_4(VAR_3, VAR_0,
          VAR_1,
          VAR_8 | VAR_2);
 }

 VAR_4->antenna_diversity = VAR_5;
}
