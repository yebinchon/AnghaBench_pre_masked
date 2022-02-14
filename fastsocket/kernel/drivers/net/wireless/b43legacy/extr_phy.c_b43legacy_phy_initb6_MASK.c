
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct b43legacy_phy {int radio_rev; scalar_t__ type; int channel; int analog; } ;
struct b43legacy_wldev {TYPE_3__* dev; struct b43legacy_phy phy; } ;
struct TYPE_6__ {TYPE_2__* bus; } ;
struct TYPE_4__ {int boardflags_lo; } ;
struct TYPE_5__ {TYPE_1__ sprom; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct b43legacy_wldev*) ;
 int FUNC_1 (struct b43legacy_wldev*) ;
 int FUNC_2 (struct b43legacy_wldev*) ;
 int FUNC_3 (struct b43legacy_wldev*) ;
 int FUNC_4 (struct b43legacy_wldev*,int) ;
 int FUNC_5 (struct b43legacy_wldev*,int,int) ;
 int FUNC_6 (struct b43legacy_wldev*) ;
 int FUNC_7 (struct b43legacy_wldev*,int) ;
 int FUNC_8 (struct b43legacy_wldev*,int,int ) ;
 int FUNC_9 (struct b43legacy_wldev*,int,int,int) ;
 int FUNC_10 (struct b43legacy_wldev*,int,int) ;
 int FUNC_11 (struct b43legacy_wldev*,int ,int ) ;
 int FUNC_12 (struct b43legacy_wldev*,int ,int ,int) ;
 int FUNC_13 (struct b43legacy_wldev*,int,int) ;
 int FUNC_14 (int) ;

__attribute__((used)) static void FUNC_15(struct b43legacy_wldev *VAR_5)
{
 struct b43legacy_phy *VAR_6 = &VAR_5->phy;
 u16 VAR_7;
 u16 VAR_8;
 u8 VAR_9;

 FUNC_5(VAR_5, 0x003E, 0x817A);
 FUNC_10(VAR_5, 0x007A,
    (FUNC_7(VAR_5, 0x007A) | 0x0058));
 if (VAR_6->radio_rev == 4 ||
      VAR_6->radio_rev == 5) {
  FUNC_10(VAR_5, 0x0051, 0x0037);
  FUNC_10(VAR_5, 0x0052, 0x0070);
  FUNC_10(VAR_5, 0x0053, 0x00B3);
  FUNC_10(VAR_5, 0x0054, 0x009B);
  FUNC_10(VAR_5, 0x005A, 0x0088);
  FUNC_10(VAR_5, 0x005B, 0x0088);
  FUNC_10(VAR_5, 0x005D, 0x0088);
  FUNC_10(VAR_5, 0x005E, 0x0088);
  FUNC_10(VAR_5, 0x007D, 0x0088);
  FUNC_12(VAR_5, VAR_3,
          VAR_4,
          (FUNC_11(VAR_5,
          VAR_3,
          VAR_4)
          | 0x00000200));
 }
 if (VAR_6->radio_rev == 8) {
  FUNC_10(VAR_5, 0x0051, 0x0000);
  FUNC_10(VAR_5, 0x0052, 0x0040);
  FUNC_10(VAR_5, 0x0053, 0x00B7);
  FUNC_10(VAR_5, 0x0054, 0x0098);
  FUNC_10(VAR_5, 0x005A, 0x0088);
  FUNC_10(VAR_5, 0x005B, 0x006B);
  FUNC_10(VAR_5, 0x005C, 0x000F);
  if (VAR_5->dev->bus->sprom.boardflags_lo & 0x8000) {
   FUNC_10(VAR_5, 0x005D, 0x00FA);
   FUNC_10(VAR_5, 0x005E, 0x00D8);
  } else {
   FUNC_10(VAR_5, 0x005D, 0x00F5);
   FUNC_10(VAR_5, 0x005E, 0x00B8);
  }
  FUNC_10(VAR_5, 0x0073, 0x0003);
  FUNC_10(VAR_5, 0x007D, 0x00A8);
  FUNC_10(VAR_5, 0x007C, 0x0001);
  FUNC_10(VAR_5, 0x007E, 0x0008);
 }
 VAR_8 = 0x1E1F;
 for (VAR_7 = 0x0088; VAR_7 < 0x0098; VAR_7++) {
  FUNC_5(VAR_5, VAR_7, VAR_8);
  VAR_8 -= 0x0202;
 }
 VAR_8 = 0x3E3F;
 for (VAR_7 = 0x0098; VAR_7 < 0x00A8; VAR_7++) {
  FUNC_5(VAR_5, VAR_7, VAR_8);
  VAR_8 -= 0x0202;
 }
 VAR_8 = 0x2120;
 for (VAR_7 = 0x00A8; VAR_7 < 0x00C8; VAR_7++) {
  FUNC_5(VAR_5, VAR_7, (VAR_8 & 0x3F3F));
  VAR_8 += 0x0202;
 }
 if (VAR_6->type == VAR_2) {
  FUNC_10(VAR_5, 0x007A,
     FUNC_7(VAR_5, 0x007A) |
     0x0020);
  FUNC_10(VAR_5, 0x0051,
     FUNC_7(VAR_5, 0x0051) |
     0x0004);
  FUNC_5(VAR_5, 0x0802,
        FUNC_4(VAR_5, 0x0802) | 0x0100);
  FUNC_5(VAR_5, 0x042B,
        FUNC_4(VAR_5, 0x042B) | 0x2000);
  FUNC_5(VAR_5, 0x5B, 0x0000);
  FUNC_5(VAR_5, 0x5C, 0x0000);
 }

 VAR_9 = VAR_6->channel;
 if (VAR_9 >= 8)
  FUNC_8(VAR_5, 1, 0);
 else
  FUNC_8(VAR_5, 13, 0);

 FUNC_10(VAR_5, 0x0050, 0x0020);
 FUNC_10(VAR_5, 0x0050, 0x0023);
 FUNC_14(40);
 if (VAR_6->radio_rev < 6 || VAR_6->radio_rev == 8) {
  FUNC_10(VAR_5, 0x007C,
     (FUNC_7(VAR_5, 0x007C)
     | 0x0002));
  FUNC_10(VAR_5, 0x0050, 0x0020);
 }
 if (VAR_6->radio_rev <= 2) {
  FUNC_10(VAR_5, 0x0050, 0x0020);
  FUNC_10(VAR_5, 0x005A, 0x0070);
  FUNC_10(VAR_5, 0x005B, 0x007B);
  FUNC_10(VAR_5, 0x005C, 0x00B0);
 }
 FUNC_10(VAR_5, 0x007A,
    (FUNC_7(VAR_5,
    0x007A) & 0x00F8) | 0x0007);

 FUNC_8(VAR_5, VAR_9, 0);

 FUNC_5(VAR_5, 0x0014, 0x0200);
 if (VAR_6->radio_rev >= 6)
  FUNC_5(VAR_5, 0x002A, 0x88C2);
 else
  FUNC_5(VAR_5, 0x002A, 0x8AC0);
 FUNC_5(VAR_5, 0x0038, 0x0668);
 FUNC_9(VAR_5, 0xFFFF, 0xFFFF, 0xFFFF);
 if (VAR_6->radio_rev == 4 || VAR_6->radio_rev == 5)
  FUNC_5(VAR_5, 0x005D, (FUNC_4(VAR_5,
        0x005D) & 0xFF80) | 0x0003);
 if (VAR_6->radio_rev <= 2)
  FUNC_10(VAR_5, 0x005D, 0x000D);

 if (VAR_6->analog == 4) {
  FUNC_13(VAR_5, 0x03E4, 0x0009);
  FUNC_5(VAR_5, 0x61, FUNC_4(VAR_5, 0x61)
        & 0xFFF);
 } else
  FUNC_5(VAR_5, 0x0002, (FUNC_4(VAR_5,
        0x0002) & 0xFFC0) | 0x0004);
 if (VAR_6->type == VAR_2)
  FUNC_13(VAR_5, 0x03E6, 0x0);
 if (VAR_6->type == VAR_1) {
  FUNC_13(VAR_5, 0x03E6, 0x8140);
  FUNC_5(VAR_5, 0x0016, 0x0410);
  FUNC_5(VAR_5, 0x0017, 0x0820);
  FUNC_5(VAR_5, 0x0062, 0x0007);
  FUNC_6(VAR_5);
  FUNC_3(VAR_5);
  if (VAR_5->dev->bus->sprom.boardflags_lo &
      VAR_0) {
   FUNC_0(VAR_5);
   FUNC_1(VAR_5);
  }
  FUNC_2(VAR_5);
 }
}
