
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ssb_sprom {int revision; int boardflags2_lo; } ;
struct TYPE_4__ {int channel; struct b43_phy_n* n; } ;
struct b43_wldev {TYPE_2__ phy; int wl; TYPE_1__* dev; } ;
struct b43_phy_n {int gain_boost; } ;
struct TYPE_3__ {scalar_t__ board_vendor; scalar_t__ board_type; int board_rev; struct ssb_sprom* bus_sprom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (struct b43_wldev*,int ,int) ;
 int FUNC_1 (struct b43_wldev*,int ,int,int) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 int FUNC_3 (struct b43_wldev*,int ,int,int,int,int) ;
 int FUNC_4 (struct b43_wldev*,int ,int) ;
 int FUNC_5 (struct b43_wldev*,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct b43_wldev *VAR_18)
{
 struct b43_phy_n *VAR_19 = VAR_18->phy.n;
 struct ssb_sprom *VAR_20 = VAR_18->dev->bus_sprom;
 bool VAR_21 = 0;

 if (VAR_20->revision < 4)
  VAR_21 = (VAR_18->dev->board_vendor != VAR_16
         && VAR_18->dev->board_type == VAR_17
         && VAR_18->dev->board_rev >= 0x41);
 else
  VAR_21 =
   !(VAR_20->boardflags2_lo & VAR_15);

 FUNC_0(VAR_18, VAR_13, 0xFFF3);
 if (VAR_21) {
  FUNC_0(VAR_18, VAR_3, 0x7F);
  FUNC_0(VAR_18, VAR_8, 0x7F);
 }
 FUNC_1(VAR_18, VAR_14, 0xFFC0, 0x2C);
 FUNC_4(VAR_18, VAR_12, 0x3C);
 FUNC_0(VAR_18, VAR_12, 0xFFBE);
 FUNC_2(VAR_18, VAR_11, 0x80);
 FUNC_2(VAR_18, VAR_12, 0x1);
 FUNC_7(1);
 FUNC_2(VAR_18, VAR_12, 0x40);
 if (!FUNC_3(VAR_18, VAR_10, 0x80, 0x80, 10, 2000))
  FUNC_6(VAR_18->wl, "radio post init timeout\n");
 FUNC_0(VAR_18, VAR_11, 0xFF7F);
 FUNC_5(VAR_18, VAR_18->phy.channel);
 FUNC_4(VAR_18, VAR_1, 0x9);
 FUNC_4(VAR_18, VAR_6, 0x9);
 FUNC_4(VAR_18, VAR_2, 0x83);
 FUNC_4(VAR_18, VAR_7, 0x83);
 FUNC_1(VAR_18, VAR_0, 0xFFF8, 0x6);
 FUNC_1(VAR_18, VAR_5, 0xFFF8, 0x6);
 if (!VAR_19->gain_boost) {
  FUNC_2(VAR_18, VAR_4, 0x2);
  FUNC_2(VAR_18, VAR_9, 0x2);
 } else {
  FUNC_0(VAR_18, VAR_4, 0xFFFD);
  FUNC_0(VAR_18, VAR_9, 0xFFFD);
 }
 FUNC_8(2);
}
