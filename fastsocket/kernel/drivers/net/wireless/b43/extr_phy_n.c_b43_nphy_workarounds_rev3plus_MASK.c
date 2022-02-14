
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ssb_sprom {int boardflags2_lo; } ;
struct TYPE_4__ {int rev; int is_40mhz; struct b43_phy_n* n; } ;
struct b43_wldev {TYPE_2__ phy; int wl; TYPE_1__* dev; } ;
struct b43_phy_n {int hw_phyrxchain; int hw_phytxchain; } ;
struct TYPE_3__ {struct ssb_sprom* bus_sprom; } ;


 int FUNC_0 (int*) ;
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
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct b43_wldev*) ;
 scalar_t__ FUNC_5 (struct b43_wldev*) ;
 int FUNC_6 (struct b43_wldev*,int,int*,int*,int ) ;
 int FUNC_7 (struct b43_wldev*,int ) ;
 int FUNC_8 (struct b43_wldev*,int ,int) ;
 int FUNC_9 (struct b43_wldev*,int ,int,int) ;
 int FUNC_10 (struct b43_wldev*,int ,int) ;
 int FUNC_11 (struct b43_wldev*,int,int) ;

__attribute__((used)) static void FUNC_12(struct b43_wldev *VAR_39)
{
 struct b43_phy_n *VAR_40 = VAR_39->phy.n;
 struct ssb_sprom *VAR_41 = VAR_39->dev->bus_sprom;


 u8 VAR_42[8] = { 0x4, 0x3, 0x6, 0x5, 0x2, 0x1, 0x8, 0x1F };
 u8 VAR_43[8] = { 8, 4, 2, 2, 4, 4, 6, 1 };

 u8 VAR_44[9] = { 0x0, 0x1, 0x2, 0x8, 0x5, 0x6, 0xF, 0x3,
     0x1F };
 u8 VAR_45[9] = { 8, 6, 6, 4, 4, 16, 43, 1, 1 };
 u8 VAR_46[9] = { 0x0, 0x1, 0x2, 0x8, 0x5, 0x6, 0x3, 0x4, 0x1F };
 u8 VAR_47[9] = { 8, 6, 6, 4, 4, 18, 42, 1, 1 };

 u16 VAR_48;
 u32 VAR_49;

 FUNC_10(VAR_39, VAR_26, 0x1f8);
 FUNC_10(VAR_39, VAR_27, 0x1f8);

 VAR_49 = FUNC_7(VAR_39, FUNC_2(30, 0));
 VAR_49 &= 0xffffff;
 FUNC_8(VAR_39, FUNC_2(30, 0), VAR_49);

 FUNC_10(VAR_39, VAR_28, 0x0125);
 FUNC_10(VAR_39, VAR_29, 0x01B3);
 FUNC_10(VAR_39, VAR_30, 0x0105);
 FUNC_10(VAR_39, VAR_31, 0x016E);
 FUNC_10(VAR_39, VAR_32, 0x00CD);
 FUNC_10(VAR_39, VAR_33, 0x0020);

 FUNC_10(VAR_39, VAR_34, 0x000C);
 FUNC_10(VAR_39, VAR_35, 0x000C);


 FUNC_6(VAR_39, 1, VAR_42, VAR_43,
     FUNC_0(VAR_42));


 if (FUNC_5(VAR_39))
  FUNC_6(VAR_39, 0, VAR_44,
    VAR_45, FUNC_0(VAR_44));
 if (VAR_40->hw_phyrxchain != 3 &&
     VAR_40->hw_phyrxchain != VAR_40->hw_phytxchain) {
  if (FUNC_5(VAR_39)) {
   VAR_47[5] = 59;
   VAR_47[6] = 1;
   VAR_46[7] = 0x1F;
  }
  FUNC_6(VAR_39, 0, VAR_46, VAR_47,
      FUNC_0(VAR_46));
 }

 VAR_48 = (FUNC_3(VAR_39->wl) == VAR_37) ?
  0x2 : 0x9C40;
 FUNC_10(VAR_39, VAR_25, VAR_48);

 FUNC_9(VAR_39, VAR_36, 0xF0FF, 0x0700);

 if (!VAR_39->phy.is_40mhz) {
  FUNC_8(VAR_39, FUNC_2(16, 3), 0x18D);
  FUNC_8(VAR_39, FUNC_2(16, 127), 0x18D);
 } else {
  FUNC_8(VAR_39, FUNC_2(16, 3), 0x14D);
  FUNC_8(VAR_39, FUNC_2(16, 127), 0x14D);
 }

 FUNC_4(VAR_39);

 FUNC_8(VAR_39, FUNC_1(8, 0), 2);
 FUNC_8(VAR_39, FUNC_1(8, 16), 2);



 FUNC_11(VAR_39, VAR_0 | VAR_6, 0x00);
 FUNC_11(VAR_39, VAR_1 | VAR_6, 0x00);
 FUNC_11(VAR_39, VAR_0 | VAR_3, 0x06);
 FUNC_11(VAR_39, VAR_1 | VAR_3, 0x06);
 FUNC_11(VAR_39, VAR_0 | VAR_2, 0x07);
 FUNC_11(VAR_39, VAR_1 | VAR_2, 0x07);
 FUNC_11(VAR_39, VAR_0 | VAR_5, 0x88);
 FUNC_11(VAR_39, VAR_1 | VAR_5, 0x88);
 FUNC_11(VAR_39, VAR_0 | VAR_4, 0x00);
 FUNC_11(VAR_39, VAR_1 | VAR_4, 0x00);
 FUNC_11(VAR_39, VAR_0 | VAR_7, 0x00);
 FUNC_11(VAR_39, VAR_1 | VAR_7, 0x00);



 if ((VAR_41->boardflags2_lo & VAR_11 &&
      FUNC_3(VAR_39->wl) == VAR_38) ||
     (VAR_41->boardflags2_lo & VAR_12 &&
      FUNC_3(VAR_39->wl) == VAR_37))
  VAR_49 = 0x00088888;
 else
  VAR_49 = 0x88888888;
 FUNC_8(VAR_39, FUNC_2(30, 1), VAR_49);
 FUNC_8(VAR_39, FUNC_2(30, 2), VAR_49);
 FUNC_8(VAR_39, FUNC_2(30, 3), VAR_49);

 if (VAR_39->phy.rev == 4 &&
     FUNC_3(VAR_39->wl) == VAR_38) {
  FUNC_11(VAR_39, VAR_8 | VAR_10,
    0x70);
  FUNC_11(VAR_39, VAR_9 | VAR_10,
    0x70);
 }


 FUNC_10(VAR_39, VAR_22, 0x03eb);
 FUNC_10(VAR_39, VAR_23, 0x03eb);
 FUNC_10(VAR_39, VAR_24, 0x0341);
 FUNC_10(VAR_39, VAR_24, 0x0341);
 FUNC_10(VAR_39, VAR_14, 0x042b);
 FUNC_10(VAR_39, VAR_15, 0x042b);
 FUNC_10(VAR_39, VAR_16, 0x0381);
 FUNC_10(VAR_39, VAR_17, 0x0381);
 FUNC_10(VAR_39, VAR_18, 0x042b);
 FUNC_10(VAR_39, VAR_19, 0x042b);
 FUNC_10(VAR_39, VAR_20, 0x0381);
 FUNC_10(VAR_39, VAR_21, 0x0381);

 if (VAR_39->phy.rev >= 6 && VAR_41->boardflags2_lo & VAR_13)
  ;
}
