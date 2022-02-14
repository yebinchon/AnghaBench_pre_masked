
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {struct b43_phy_ht* ht; } ;
struct b43_wldev {int wl; TYPE_2__* dev; TYPE_1__ phy; } ;
struct b43_phy_ht {int tx_pwr_ctl; } ;
struct TYPE_4__ {scalar_t__ bus_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_13 ;
 int FUNC_5 (struct b43_wldev*,int ) ;
 int FUNC_6 (struct b43_wldev*,int ,int) ;
 int FUNC_7 (struct b43_wldev*,int ,int ,int ) ;
 int FUNC_8 (struct b43_wldev*,int ,int,int,int,...) ;
 int FUNC_9 (struct b43_wldev*,int) ;
 int FUNC_10 (struct b43_wldev*,int) ;
 int FUNC_11 (struct b43_wldev*) ;
 int FUNC_12 (struct b43_wldev*) ;
 int FUNC_13 (struct b43_wldev*,int ,int ) ;
 int FUNC_14 (struct b43_wldev*,int ) ;
 int FUNC_15 (struct b43_wldev*,int) ;
 int FUNC_16 (struct b43_wldev*,int*) ;
 int FUNC_17 (struct b43_wldev*) ;
 int FUNC_18 (struct b43_wldev*) ;
 int FUNC_19 (struct b43_wldev*,int) ;
 int FUNC_20 (struct b43_wldev*) ;
 int FUNC_21 (struct b43_wldev*) ;
 int FUNC_22 (struct b43_wldev*) ;
 int FUNC_23 (struct b43_wldev*) ;
 int FUNC_24 (struct b43_wldev*,int,int) ;
 int FUNC_25 (struct b43_wldev*,int,int,int) ;
 int FUNC_26 (struct b43_wldev*,int) ;
 int FUNC_27 (struct b43_wldev*,int,int) ;
 int FUNC_28 (struct b43_wldev*,int,int) ;
 int FUNC_29 (int ,char*) ;

__attribute__((used)) static int FUNC_30(struct b43_wldev *VAR_14)
{
 struct b43_phy_ht *VAR_15 = VAR_14->phy.ht;
 u16 VAR_16;
 u16 VAR_17[3];
 bool VAR_18;

 if (VAR_14->dev->bus_type != VAR_0) {
  FUNC_29(VAR_14->wl, "HT-PHY is supported only on BCMA bus!\n");
  return -VAR_10;
 }

 FUNC_17(VAR_14);

 FUNC_24(VAR_14, 0x0be, ~0x2);
 FUNC_27(VAR_14, 0x23f, 0x7ff);
 FUNC_27(VAR_14, 0x240, 0x7ff);
 FUNC_27(VAR_14, 0x241, 0x7ff);

 FUNC_23(VAR_14);

 FUNC_24(VAR_14, FUNC_2(0), ~0x3);

 FUNC_28(VAR_14, VAR_2, 0);
 FUNC_28(VAR_14, VAR_3, 0);
 FUNC_28(VAR_14, VAR_4, 0);

 FUNC_28(VAR_14, FUNC_2(0x103), 0x20);
 FUNC_28(VAR_14, FUNC_2(0x101), 0x20);
 FUNC_28(VAR_14, 0x20d, 0xb8);
 FUNC_28(VAR_14, FUNC_2(0x14f), 0xc8);
 FUNC_28(VAR_14, 0x70, 0x50);
 FUNC_28(VAR_14, 0x1ff, 0x30);

 if (0)
  ;

 if (FUNC_4(VAR_14->wl) == VAR_12)
  FUNC_13(VAR_14, VAR_7, 0);
 else
  FUNC_13(VAR_14, VAR_7,
          VAR_7);

 FUNC_27(VAR_14, 0xb1, 0x91);
 FUNC_28(VAR_14, 0x32f, 0x0003);
 FUNC_28(VAR_14, 0x077, 0x0010);
 FUNC_28(VAR_14, 0x0b4, 0x0258);
 FUNC_24(VAR_14, 0x17e, ~0x4000);

 FUNC_28(VAR_14, 0x0b9, 0x0072);

 FUNC_8(VAR_14, FUNC_0(7, 0x14e), 2, 0x010f, 0x010f);
 FUNC_8(VAR_14, FUNC_0(7, 0x15e), 2, 0x010f, 0x010f);
 FUNC_8(VAR_14, FUNC_0(7, 0x16e), 2, 0x010f, 0x010f);

 FUNC_11(VAR_14);

 FUNC_8(VAR_14, FUNC_0(7, 0x130), 9, 0x777, 0x111, 0x111,
       0x777, 0x111, 0x111, 0x777, 0x111, 0x111);

 FUNC_6(VAR_14, FUNC_0(7, 0x120), 0x0777);
 FUNC_6(VAR_14, FUNC_0(7, 0x124), 0x0777);

 FUNC_6(VAR_14, FUNC_0(8, 0x00), 0x02);
 FUNC_6(VAR_14, FUNC_0(8, 0x10), 0x02);
 FUNC_6(VAR_14, FUNC_0(8, 0x20), 0x02);

 FUNC_8(VAR_14, FUNC_0(8, 0x08), 4,
       0x8e, 0x96, 0x96, 0x96);
 FUNC_8(VAR_14, FUNC_0(8, 0x18), 4,
       0x8f, 0x9f, 0x9f, 0x9f);
 FUNC_8(VAR_14, FUNC_0(8, 0x28), 4,
       0x8f, 0x9f, 0x9f, 0x9f);

 FUNC_8(VAR_14, FUNC_0(8, 0x0c), 4, 0x2, 0x2, 0x2, 0x2);
 FUNC_8(VAR_14, FUNC_0(8, 0x1c), 4, 0x2, 0x2, 0x2, 0x2);
 FUNC_8(VAR_14, FUNC_0(8, 0x2c), 4, 0x2, 0x2, 0x2, 0x2);

 FUNC_25(VAR_14, 0x0280, 0xff00, 0x3e);
 FUNC_25(VAR_14, 0x0283, 0xff00, 0x3e);
 FUNC_25(VAR_14, FUNC_3(0x0141), 0xff00, 0x46);
 FUNC_25(VAR_14, 0x0283, 0xff00, 0x40);

 FUNC_8(VAR_14, FUNC_0(00, 0x8), 4,
       0x09, 0x0e, 0x13, 0x18);
 FUNC_8(VAR_14, FUNC_0(01, 0x8), 4,
       0x09, 0x0e, 0x13, 0x18);

 FUNC_8(VAR_14, FUNC_0(40, 0x8), 4,
       0x09, 0x0e, 0x13, 0x18);

 FUNC_25(VAR_14, FUNC_3(0x24), 0x3f, 0xd);
 FUNC_25(VAR_14, FUNC_3(0x64), 0x3f, 0xd);
 FUNC_25(VAR_14, FUNC_3(0xa4), 0x3f, 0xd);

 FUNC_27(VAR_14, FUNC_2(0x060), 0x1);
 FUNC_27(VAR_14, FUNC_2(0x064), 0x1);
 FUNC_27(VAR_14, FUNC_2(0x080), 0x1);
 FUNC_27(VAR_14, FUNC_2(0x084), 0x1);


 VAR_16 = FUNC_5(VAR_14, FUNC_0(7, 0x144));
 FUNC_6(VAR_14, FUNC_0(7, 0x14a), VAR_16);
 VAR_16 = FUNC_5(VAR_14, FUNC_0(7, 0x154));
 FUNC_6(VAR_14, FUNC_0(7, 0x15a), VAR_16);
 VAR_16 = FUNC_5(VAR_14, FUNC_0(7, 0x164));
 FUNC_6(VAR_14, FUNC_0(7, 0x16a), VAR_16);


 FUNC_10(VAR_14, 1);
 VAR_16 = FUNC_26(VAR_14, VAR_5);
 FUNC_28(VAR_14, VAR_5, VAR_16 | VAR_6);
 FUNC_28(VAR_14, VAR_5, VAR_16 & ~VAR_6);
 FUNC_10(VAR_14, 0);

 FUNC_9(VAR_14, 1);

 FUNC_15(VAR_14, 0);
 FUNC_14(VAR_14, VAR_9);
 FUNC_14(VAR_14, VAR_8);
 FUNC_15(VAR_14, 1);


 FUNC_13(VAR_14, 0, 0);
 FUNC_16(VAR_14, VAR_17);

 if (FUNC_4(VAR_14->wl) == VAR_11)
  FUNC_12(VAR_14);

 FUNC_7(VAR_14, FUNC_1(0x1a, 0xc0),
   VAR_1, VAR_13);

 VAR_18 = VAR_15->tx_pwr_ctl;
 FUNC_22(VAR_14);
 FUNC_19(VAR_14, 0);
 FUNC_20(VAR_14);
 FUNC_21(VAR_14);
 FUNC_18(VAR_14);
 FUNC_19(VAR_14, VAR_18);

 return 0;
}
