
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct ssb_sprom {int boardflags_lo; int boardflags_hi; } ;
struct ssb_bus {int chipco; } ;
struct TYPE_6__ {int rev; struct b43_phy_lp* lp; } ;
struct b43_wldev {TYPE_3__ phy; int wl; TYPE_2__* dev; } ;
struct b43_phy_lp {int rx_pwr_offset; int rssi_vf; int rssi_vc; int bx_arch; } ;
struct TYPE_5__ {scalar_t__ board_type; int chip_id; scalar_t__ chip_pkg; struct ssb_sprom* bus_sprom; TYPE_1__* sdev; } ;
struct TYPE_4__ {struct ssb_bus* bus; } ;


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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 int VAR_46 ;
 scalar_t__ VAR_47 ;
 scalar_t__ VAR_48 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*,int) ;
 int FUNC_4 (struct b43_wldev*,int ,int) ;
 int FUNC_5 (struct b43_wldev*,int ,int ) ;
 int FUNC_6 (struct b43_wldev*,int ,int) ;
 int FUNC_7 (struct b43_wldev*,int ,int,int) ;
 int FUNC_8 (struct b43_wldev*,int ) ;
 int FUNC_9 (struct b43_wldev*,int ,int) ;
 int FUNC_10 (struct b43_wldev*,int ,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int ,int) ;

__attribute__((used)) static void FUNC_13(struct b43_wldev *VAR_49)
{
 struct ssb_bus *VAR_50 = VAR_49->dev->sdev->bus;
 struct ssb_sprom *VAR_51 = VAR_49->dev->bus_sprom;
 struct b43_phy_lp *VAR_52 = VAR_49->phy.lp;
 u16 VAR_53, VAR_54;

 FUNC_6(VAR_49, VAR_12, 0xF7FF);
 FUNC_10(VAR_49, VAR_10, 0);
 FUNC_10(VAR_49, VAR_11, 0);
 FUNC_10(VAR_49, VAR_31, 0);
 FUNC_10(VAR_49, VAR_32, 0);
 FUNC_9(VAR_49, VAR_12, 0x0004);
 FUNC_7(VAR_49, VAR_30, 0xFF00, 0x0078);
 FUNC_7(VAR_49, VAR_15, 0x83FF, 0x5800);
 FUNC_10(VAR_49, VAR_8, 0x0016);
 FUNC_7(VAR_49, VAR_9, 0xFFF8, 0x0004);
 FUNC_7(VAR_49, VAR_43, 0x00FF, 0x5400);
 FUNC_7(VAR_49, VAR_23, 0x00FF, 0x2400);
 FUNC_7(VAR_49, VAR_26, 0x00FF, 0x2100);
 FUNC_7(VAR_49, VAR_43, 0xFF00, 0x0006);
 FUNC_6(VAR_49, VAR_33, 0xFFFE);
 FUNC_7(VAR_49, VAR_15, 0xFFE0, 0x0005);
 FUNC_7(VAR_49, VAR_15, 0xFC1F, 0x0180);
 FUNC_7(VAR_49, VAR_15, 0x83FF, 0x3C00);
 FUNC_7(VAR_49, VAR_19, 0xFFF0, 0x0005);
 FUNC_7(VAR_49, VAR_20, 0xFFC0, 0x001A);
 FUNC_7(VAR_49, VAR_17, 0xFF00, 0x00B3);
 FUNC_7(VAR_49, VAR_17, 0x00FF, 0xAD00);
 FUNC_7(VAR_49, VAR_25,
   0xFF00, VAR_52->rx_pwr_offset);
 if ((VAR_51->boardflags_lo & VAR_3) &&
    ((FUNC_1(VAR_49->wl) == VAR_45) ||
    (VAR_51->boardflags_hi & VAR_1))) {
  FUNC_12(&VAR_50->chipco, VAR_46, 0x28);
  FUNC_11(&VAR_50->chipco, 1);
  if (VAR_49->phy.rev == 0) {
   FUNC_7(VAR_49, VAR_28,
     0xFFCF, 0x0010);
  }
  FUNC_4(VAR_49, FUNC_0(11, 7), 60);
 } else {
  FUNC_11(&VAR_50->chipco, 0);
  FUNC_7(VAR_49, VAR_28,
    0xFFCF, 0x0020);
  FUNC_4(VAR_49, FUNC_0(11, 7), 100);
 }
 VAR_53 = VAR_52->rssi_vf | VAR_52->rssi_vc << 4 | 0xA000;
 FUNC_10(VAR_49, VAR_13, VAR_53);
 if (VAR_51->boardflags_hi & VAR_2)
  FUNC_7(VAR_49, VAR_14, 0xF000, 0x0AAA);
 else
  FUNC_7(VAR_49, VAR_14, 0xF000, 0x02AA);
 FUNC_4(VAR_49, FUNC_0(11, 1), 24);
 FUNC_7(VAR_49, VAR_33,
   0xFFF9, (VAR_52->bx_arch << 1));
 if (VAR_49->phy.rev == 1 &&
    (VAR_51->boardflags_hi & VAR_0)) {
  FUNC_7(VAR_49, VAR_35, 0xFFC0, 0x000A);
  FUNC_7(VAR_49, VAR_35, 0x3F00, 0x0900);
  FUNC_7(VAR_49, VAR_36, 0xFFC0, 0x000A);
  FUNC_7(VAR_49, VAR_36, 0xC0FF, 0x0B00);
  FUNC_7(VAR_49, VAR_37, 0xFFC0, 0x000A);
  FUNC_7(VAR_49, VAR_37, 0xC0FF, 0x0400);
  FUNC_7(VAR_49, VAR_38, 0xFFC0, 0x000A);
  FUNC_7(VAR_49, VAR_38, 0xC0FF, 0x0B00);
  FUNC_7(VAR_49, VAR_39, 0xFFC0, 0x000A);
  FUNC_7(VAR_49, VAR_39, 0xC0FF, 0x0900);
  FUNC_7(VAR_49, VAR_40, 0xFFC0, 0x000A);
  FUNC_7(VAR_49, VAR_40, 0xC0FF, 0x0B00);
  FUNC_7(VAR_49, VAR_41, 0xFFC0, 0x000A);
  FUNC_7(VAR_49, VAR_41, 0xC0FF, 0x0900);
  FUNC_7(VAR_49, VAR_42, 0xFFC0, 0x000A);
  FUNC_7(VAR_49, VAR_42, 0xC0FF, 0x0B00);
 } else if (FUNC_1(VAR_49->wl) == VAR_45 ||



     (VAR_49->phy.rev == 0 && (VAR_51->boardflags_lo & VAR_3))) {
  FUNC_7(VAR_49, VAR_35, 0xFFC0, 0x0001);
  FUNC_7(VAR_49, VAR_35, 0xC0FF, 0x0400);
  FUNC_7(VAR_49, VAR_36, 0xFFC0, 0x0001);
  FUNC_7(VAR_49, VAR_36, 0xC0FF, 0x0500);
  FUNC_7(VAR_49, VAR_37, 0xFFC0, 0x0002);
  FUNC_7(VAR_49, VAR_37, 0xC0FF, 0x0800);
  FUNC_7(VAR_49, VAR_38, 0xFFC0, 0x0002);
  FUNC_7(VAR_49, VAR_38, 0xC0FF, 0x0A00);
 } else if (VAR_49->phy.rev == 1 ||
    (VAR_51->boardflags_lo & VAR_3)) {
  FUNC_7(VAR_49, VAR_35, 0xFFC0, 0x0004);
  FUNC_7(VAR_49, VAR_35, 0xC0FF, 0x0800);
  FUNC_7(VAR_49, VAR_36, 0xFFC0, 0x0004);
  FUNC_7(VAR_49, VAR_36, 0xC0FF, 0x0C00);
  FUNC_7(VAR_49, VAR_37, 0xFFC0, 0x0002);
  FUNC_7(VAR_49, VAR_37, 0xC0FF, 0x0100);
  FUNC_7(VAR_49, VAR_38, 0xFFC0, 0x0002);
  FUNC_7(VAR_49, VAR_38, 0xC0FF, 0x0300);
 } else {
  FUNC_7(VAR_49, VAR_35, 0xFFC0, 0x000A);
  FUNC_7(VAR_49, VAR_35, 0xC0FF, 0x0900);
  FUNC_7(VAR_49, VAR_36, 0xFFC0, 0x000A);
  FUNC_7(VAR_49, VAR_36, 0xC0FF, 0x0B00);
  FUNC_7(VAR_49, VAR_37, 0xFFC0, 0x0006);
  FUNC_7(VAR_49, VAR_37, 0xC0FF, 0x0500);
  FUNC_7(VAR_49, VAR_38, 0xFFC0, 0x0006);
  FUNC_7(VAR_49, VAR_38, 0xC0FF, 0x0700);
 }
 if (VAR_49->phy.rev == 1 && (VAR_51->boardflags_hi & VAR_1)) {
  FUNC_5(VAR_49, VAR_39, VAR_35);
  FUNC_5(VAR_49, VAR_40, VAR_36);
  FUNC_5(VAR_49, VAR_41, VAR_37);
  FUNC_5(VAR_49, VAR_42, VAR_38);
 }
 if ((VAR_51->boardflags_hi & VAR_0) &&
     (VAR_49->dev->chip_id == 0x5354) &&
     (VAR_49->dev->chip_pkg == VAR_48)) {
  FUNC_9(VAR_49, VAR_16, 0x0006);
  FUNC_10(VAR_49, VAR_22, 0x0005);
  FUNC_10(VAR_49, VAR_21, 0xFFFF);

  FUNC_3(VAR_49, FUNC_2(VAR_49) | VAR_4);
 }
 if (FUNC_1(VAR_49->wl) == VAR_44) {
  FUNC_9(VAR_49, VAR_27, 0x8000);
  FUNC_9(VAR_49, VAR_16, 0x0040);
  FUNC_7(VAR_49, VAR_29, 0x00FF, 0xA400);
  FUNC_7(VAR_49, VAR_16, 0xF0FF, 0x0B00);
  FUNC_7(VAR_49, VAR_34, 0xFFF8, 0x0007);
  FUNC_7(VAR_49, VAR_18, 0xFFF8, 0x0003);
  FUNC_7(VAR_49, VAR_18, 0xFFC7, 0x0020);
  FUNC_6(VAR_49, VAR_24, 0x00FF);
 } else {
  FUNC_6(VAR_49, VAR_27, 0x7FFF);
  FUNC_6(VAR_49, VAR_16, 0xFFBF);
 }
 if (VAR_49->phy.rev == 1) {
  VAR_53 = FUNC_8(VAR_49, VAR_15);
  VAR_54 = (VAR_53 & 0x03E0) >> 5;
  VAR_54 |= VAR_54 << 5;
  FUNC_10(VAR_49, VAR_5, VAR_54);
  VAR_53 = FUNC_8(VAR_49, VAR_19);
  VAR_54 = (VAR_53 & 0x1F00) >> 8;
  VAR_54 |= VAR_54 << 5;
  FUNC_10(VAR_49, VAR_6, VAR_54);
  VAR_53 = FUNC_8(VAR_49, VAR_43);
  VAR_54 = VAR_53 & 0x00FF;
  VAR_54 |= VAR_53 << 8;
  FUNC_10(VAR_49, VAR_7, VAR_54);
 }
}
