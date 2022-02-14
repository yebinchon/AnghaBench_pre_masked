
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct b43_phy {int radio_rev; scalar_t__ type; int channel; int analog; struct b43_phy_g* g; } ;
struct b43_wldev {TYPE_2__* dev; struct b43_phy phy; } ;
struct b43_phy_g {int tx_control; int rfatt; int bbatt; } ;
struct TYPE_4__ {TYPE_1__* bus_sprom; } ;
struct TYPE_3__ {int boardflags_lo; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*,int,int ) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*,int) ;
 int FUNC_4 (struct b43_wldev*,int,int) ;
 int FUNC_5 (struct b43_wldev*,int,int,int) ;
 int FUNC_6 (struct b43_wldev*,int,int) ;
 int FUNC_7 (struct b43_wldev*,int,int) ;
 int FUNC_8 (struct b43_wldev*,int,int,int) ;
 int FUNC_9 (struct b43_wldev*,int) ;
 int FUNC_10 (struct b43_wldev*,int,int) ;
 int FUNC_11 (struct b43_wldev*,int,int) ;
 int FUNC_12 (struct b43_wldev*,int *,int *,int ) ;
 int FUNC_13 (struct b43_wldev*,int,int) ;
 int FUNC_14 (int) ;

__attribute__((used)) static void FUNC_15(struct b43_wldev *VAR_4)
{
 struct b43_phy *VAR_5 = &VAR_4->phy;
 struct b43_phy_g *VAR_6 = VAR_5->g;
 u16 VAR_7, VAR_8;
 u8 VAR_9;

 FUNC_7(VAR_4, 0x003E, 0x817A);
 FUNC_11(VAR_4, 0x007A,
     (FUNC_9(VAR_4, 0x007A) | 0x0058));
 if (VAR_5->radio_rev == 4 || VAR_5->radio_rev == 5) {
  FUNC_11(VAR_4, 0x51, 0x37);
  FUNC_11(VAR_4, 0x52, 0x70);
  FUNC_11(VAR_4, 0x53, 0xB3);
  FUNC_11(VAR_4, 0x54, 0x9B);
  FUNC_11(VAR_4, 0x5A, 0x88);
  FUNC_11(VAR_4, 0x5B, 0x88);
  FUNC_11(VAR_4, 0x5D, 0x88);
  FUNC_11(VAR_4, 0x5E, 0x88);
  FUNC_11(VAR_4, 0x7D, 0x88);
  FUNC_3(VAR_4, FUNC_2(VAR_4)
        | VAR_1);
 }
 FUNC_0(VAR_5->radio_rev == 6 || VAR_5->radio_rev == 7);
 if (VAR_5->radio_rev == 8) {
  FUNC_11(VAR_4, 0x51, 0);
  FUNC_11(VAR_4, 0x52, 0x40);
  FUNC_11(VAR_4, 0x53, 0xB7);
  FUNC_11(VAR_4, 0x54, 0x98);
  FUNC_11(VAR_4, 0x5A, 0x88);
  FUNC_11(VAR_4, 0x5B, 0x6B);
  FUNC_11(VAR_4, 0x5C, 0x0F);
  if (VAR_4->dev->bus_sprom->boardflags_lo & VAR_0) {
   FUNC_11(VAR_4, 0x5D, 0xFA);
   FUNC_11(VAR_4, 0x5E, 0xD8);
  } else {
   FUNC_11(VAR_4, 0x5D, 0xF5);
   FUNC_11(VAR_4, 0x5E, 0xB8);
  }
  FUNC_11(VAR_4, 0x0073, 0x0003);
  FUNC_11(VAR_4, 0x007D, 0x00A8);
  FUNC_11(VAR_4, 0x007C, 0x0001);
  FUNC_11(VAR_4, 0x007E, 0x0008);
 }
 VAR_8 = 0x1E1F;
 for (VAR_7 = 0x0088; VAR_7 < 0x0098; VAR_7++) {
  FUNC_7(VAR_4, VAR_7, VAR_8);
  VAR_8 -= 0x0202;
 }
 VAR_8 = 0x3E3F;
 for (VAR_7 = 0x0098; VAR_7 < 0x00A8; VAR_7++) {
  FUNC_7(VAR_4, VAR_7, VAR_8);
  VAR_8 -= 0x0202;
 }
 VAR_8 = 0x2120;
 for (VAR_7 = 0x00A8; VAR_7 < 0x00C8; VAR_7++) {
  FUNC_7(VAR_4, VAR_7, (VAR_8 & 0x3F3F));
  VAR_8 += 0x0202;
 }
 if (VAR_5->type == VAR_3) {
  FUNC_10(VAR_4, 0x007A, 0x0020);
  FUNC_10(VAR_4, 0x0051, 0x0004);
  FUNC_6(VAR_4, 0x0802, 0x0100);
  FUNC_6(VAR_4, 0x042B, 0x2000);
  FUNC_7(VAR_4, 0x5B, 0);
  FUNC_7(VAR_4, 0x5C, 0);
 }

 VAR_9 = VAR_5->channel;
 if (VAR_9 >= 8)
  FUNC_1(VAR_4, 1, 0);
 else
  FUNC_1(VAR_4, 13, 0);

 FUNC_11(VAR_4, 0x0050, 0x0020);
 FUNC_11(VAR_4, 0x0050, 0x0023);
 FUNC_14(40);
 if (VAR_5->radio_rev < 6 || VAR_5->radio_rev == 8) {
  FUNC_11(VAR_4, 0x7C, (FUNC_9(VAR_4, 0x7C)
           | 0x0002));
  FUNC_11(VAR_4, 0x50, 0x20);
 }
 if (VAR_5->radio_rev <= 2) {
  FUNC_11(VAR_4, 0x7C, 0x20);
  FUNC_11(VAR_4, 0x5A, 0x70);
  FUNC_11(VAR_4, 0x5B, 0x7B);
  FUNC_11(VAR_4, 0x5C, 0xB0);
 }
 FUNC_8(VAR_4, 0x007A, 0x00F8, 0x0007);

 FUNC_1(VAR_4, VAR_9, 0);

 FUNC_7(VAR_4, 0x0014, 0x0200);
 if (VAR_5->radio_rev >= 6)
  FUNC_7(VAR_4, 0x2A, 0x88C2);
 else
  FUNC_7(VAR_4, 0x2A, 0x8AC0);
 FUNC_7(VAR_4, 0x0038, 0x0668);
 FUNC_12(VAR_4, &VAR_6->bbatt, &VAR_6->rfatt, VAR_6->tx_control);
 if (VAR_5->radio_rev <= 5) {
  FUNC_5(VAR_4, 0x5D, 0xFF80, 0x0003);
 }
 if (VAR_5->radio_rev <= 2)
  FUNC_11(VAR_4, 0x005D, 0x000D);

 if (VAR_5->analog == 4) {
  FUNC_13(VAR_4, 0x3E4, 9);
  FUNC_4(VAR_4, 0x61, 0x0FFF);
 } else {
  FUNC_5(VAR_4, 0x0002, 0xFFC0, 0x0004);
 }
 if (VAR_5->type == VAR_2)
  FUNC_0(1);
 else if (VAR_5->type == VAR_3)
  FUNC_13(VAR_4, 0x03E6, 0x0);
}
