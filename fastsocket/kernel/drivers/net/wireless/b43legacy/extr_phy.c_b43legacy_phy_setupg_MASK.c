
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct b43legacy_phy {scalar_t__ type; int rev; } ;
struct b43legacy_wldev {TYPE_4__* dev; struct b43legacy_phy phy; } ;
typedef int s16 ;
struct TYPE_8__ {TYPE_3__* bus; } ;
struct TYPE_6__ {int board_rev; } ;
struct TYPE_5__ {int type; } ;
struct TYPE_7__ {TYPE_2__ sprom; TYPE_1__ boardinfo; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int* VAR_9 ;
 int* VAR_10 ;
 int* VAR_11 ;
 int* VAR_12 ;
 int* VAR_13 ;
 int* VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int* VAR_17 ;
 int* VAR_18 ;
 int FUNC_1 (struct b43legacy_wldev*,int,int) ;
 int FUNC_2 (struct b43legacy_wldev*,int,int ) ;
 int FUNC_3 (struct b43legacy_wldev*,int,int ) ;
 int FUNC_4 (struct b43legacy_wldev*) ;
 int FUNC_5 (struct b43legacy_wldev*,int) ;
 int FUNC_6 (struct b43legacy_wldev*,int,int) ;
 scalar_t__ FUNC_7 (struct b43legacy_wldev*) ;

__attribute__((used)) static void FUNC_8(struct b43legacy_wldev *VAR_19)
{
 struct b43legacy_phy *VAR_20 = &VAR_19->phy;
 u16 VAR_21;

 FUNC_0(VAR_20->type != VAR_7);
 if (VAR_20->rev == 1) {
  FUNC_6(VAR_19, 0x0406, 0x4F19);
  FUNC_6(VAR_19, VAR_8,
        (FUNC_5(VAR_19,
        VAR_8) & 0xFC3F) | 0x0340);
  FUNC_6(VAR_19, 0x042C, 0x005A);
  FUNC_6(VAR_19, 0x0427, 0x001A);

  for (VAR_21 = 0; VAR_21 < VAR_0; VAR_21++)
   FUNC_1(VAR_19, 0x5800 + VAR_21,
         VAR_9[VAR_21]);
  for (VAR_21 = 0; VAR_21 < VAR_1; VAR_21++)
   FUNC_1(VAR_19, 0x1800 + VAR_21,
         VAR_10[VAR_21]);
  for (VAR_21 = 0; VAR_21 < VAR_5; VAR_21++)
   FUNC_2(VAR_19, 0x2000 + VAR_21,
           VAR_16[VAR_21]);
 } else {

  FUNC_3(VAR_19, 0xBA98, (s16)0x7654);

  if (VAR_20->rev == 2) {
   FUNC_6(VAR_19, 0x04C0, 0x1861);
   FUNC_6(VAR_19, 0x04C1, 0x0271);
  } else if (VAR_20->rev > 2) {
   FUNC_6(VAR_19, 0x04C0, 0x0098);
   FUNC_6(VAR_19, 0x04C1, 0x0070);
   FUNC_6(VAR_19, 0x04C9, 0x0080);
  }
  FUNC_6(VAR_19, 0x042B, FUNC_5(VAR_19,
        0x042B) | 0x800);

  for (VAR_21 = 0; VAR_21 < 64; VAR_21++)
   FUNC_1(VAR_19, 0x4000 + VAR_21, VAR_21);
  for (VAR_21 = 0; VAR_21 < VAR_2; VAR_21++)
   FUNC_1(VAR_19, 0x1800 + VAR_21,
         VAR_11[VAR_21]);
 }

 if (VAR_20->rev <= 2)
  for (VAR_21 = 0; VAR_21 < VAR_3; VAR_21++)
   FUNC_1(VAR_19, 0x1400 + VAR_21,
         VAR_12[VAR_21]);
 else if ((VAR_20->rev >= 7) && (FUNC_5(VAR_19, 0x0449) & 0x0200))
  for (VAR_21 = 0; VAR_21 < VAR_3; VAR_21++)
   FUNC_1(VAR_19, 0x1400 + VAR_21,
         VAR_14[VAR_21]);
 else
  for (VAR_21 = 0; VAR_21 < VAR_3; VAR_21++)
   FUNC_1(VAR_19, 0x1400 + VAR_21,
         VAR_13[VAR_21]);

 if (VAR_20->rev == 2)
  for (VAR_21 = 0; VAR_21 < VAR_6; VAR_21++)
   FUNC_1(VAR_19, 0x5000 + VAR_21,
         VAR_17[VAR_21]);
 else if ((VAR_20->rev > 2) && (VAR_20->rev <= 8))
  for (VAR_21 = 0; VAR_21 < VAR_6; VAR_21++)
   FUNC_1(VAR_19, 0x5000 + VAR_21,
         VAR_18[VAR_21]);

 if (VAR_20->rev == 1) {
  for (VAR_21 = 0; VAR_21 < VAR_4; VAR_21++)
   FUNC_2(VAR_19, 0x2400 + VAR_21,
           VAR_15[VAR_21]);
  for (VAR_21 = 4; VAR_21 < 20; VAR_21++)
   FUNC_1(VAR_19, 0x5400 + VAR_21, 0x0020);
  FUNC_4(VAR_19);

  if (FUNC_7(VAR_19) &&
      (VAR_19->dev->bus->boardinfo.type == 0x0416) &&
      (VAR_19->dev->bus->sprom.board_rev == 0x0017))
   return;

  FUNC_1(VAR_19, 0x5001, 0x0002);
  FUNC_1(VAR_19, 0x5002, 0x0001);
 } else {
  for (VAR_21 = 0; VAR_21 <= 0x20; VAR_21++)
   FUNC_1(VAR_19, 0x1000 + VAR_21, 0x0820);
  FUNC_4(VAR_19);
  FUNC_5(VAR_19, 0x0400);
  FUNC_6(VAR_19, 0x0403, 0x1000);
  FUNC_1(VAR_19, 0x3C02, 0x000F);
  FUNC_1(VAR_19, 0x3C03, 0x0014);

  if (FUNC_7(VAR_19) &&
      (VAR_19->dev->bus->boardinfo.type == 0x0416) &&
      (VAR_19->dev->bus->sprom.board_rev == 0x0017))
   return;

  FUNC_1(VAR_19, 0x0401, 0x0002);
  FUNC_1(VAR_19, 0x0402, 0x0001);
 }
}
