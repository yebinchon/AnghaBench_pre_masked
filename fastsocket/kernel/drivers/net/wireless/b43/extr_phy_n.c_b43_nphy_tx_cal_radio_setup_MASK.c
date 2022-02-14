
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int rev; struct b43_phy_n* n; } ;
struct b43_wldev {TYPE_1__ phy; int wl; } ;
struct b43_phy_n {int* tx_rx_cal_radio_saveregs; scalar_t__ ipa2g_on; scalar_t__ ipa5g_on; } ;


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
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct b43_wldev*,int ) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 int FUNC_3 (struct b43_wldev*,int) ;
 int FUNC_4 (struct b43_wldev*,int ,int) ;
 int FUNC_5 (struct b43_wldev*,int,int) ;

__attribute__((used)) static void FUNC_6(struct b43_wldev *VAR_22)
{
 struct b43_phy_n *VAR_23 = VAR_22->phy.n;
 u16 *VAR_24 = VAR_23->tx_rx_cal_radio_saveregs;
 u16 VAR_25;
 u8 VAR_26, VAR_27;

 if (VAR_22->phy.rev >= 3) {
     for (VAR_27 = 0; VAR_27 < 2; VAR_27++) {
  VAR_25 = (VAR_27 == 0) ? 0x2000 : 0x3000;
  VAR_26 = VAR_27 * 11;

  VAR_24[VAR_26 + 0] = FUNC_3(VAR_22, VAR_11);
  VAR_24[VAR_26 + 1] = FUNC_3(VAR_22, VAR_8);
  VAR_24[VAR_26 + 2] = FUNC_3(VAR_22, VAR_12);
  VAR_24[VAR_26 + 3] = FUNC_3(VAR_22, VAR_10);
  VAR_24[VAR_26 + 4] = FUNC_3(VAR_22, VAR_9);
  VAR_24[VAR_26 + 5] = FUNC_3(VAR_22, VAR_13);
  VAR_24[VAR_26 + 6] = FUNC_3(VAR_22, VAR_15);
  VAR_24[VAR_26 + 7] = FUNC_3(VAR_22, VAR_16);
  VAR_24[VAR_26 + 8] = FUNC_3(VAR_22, VAR_18);
  VAR_24[VAR_26 + 9] = FUNC_3(VAR_22, VAR_17);
  VAR_24[VAR_26 + 10] = FUNC_3(VAR_22, VAR_14);

  if (FUNC_0(VAR_22->wl) == VAR_21) {
   FUNC_5(VAR_22, VAR_25 | VAR_11, 0x0A);
   FUNC_5(VAR_22, VAR_25 | VAR_8, 0x40);
   FUNC_5(VAR_22, VAR_25 | VAR_12, 0x55);
   FUNC_5(VAR_22, VAR_25 | VAR_10, 0);
   FUNC_5(VAR_22, VAR_25 | VAR_9, 0);
   if (VAR_23->ipa5g_on) {
    FUNC_5(VAR_22, VAR_25 | VAR_13, 4);
    FUNC_5(VAR_22, VAR_25 | VAR_15, 1);
   } else {
    FUNC_5(VAR_22, VAR_25 | VAR_13, 0);
    FUNC_5(VAR_22, VAR_25 | VAR_15, 0x2F);
   }
   FUNC_5(VAR_22, VAR_25 | VAR_16, 0);
  } else {
   FUNC_5(VAR_22, VAR_25 | VAR_11, 0x06);
   FUNC_5(VAR_22, VAR_25 | VAR_8, 0x40);
   FUNC_5(VAR_22, VAR_25 | VAR_12, 0x55);
   FUNC_5(VAR_22, VAR_25 | VAR_10, 0);
   FUNC_5(VAR_22, VAR_25 | VAR_9, 0);
   FUNC_5(VAR_22, VAR_25 | VAR_15, 0);
   if (VAR_23->ipa2g_on) {
    FUNC_5(VAR_22, VAR_25 | VAR_13, 6);
    FUNC_5(VAR_22, VAR_25 | VAR_16,
     (VAR_22->phy.rev < 5) ? 0x11 : 0x01);
   } else {
    FUNC_5(VAR_22, VAR_25 | VAR_13, 0);
    FUNC_5(VAR_22, VAR_25 | VAR_16, 0);
   }
  }
  FUNC_5(VAR_22, VAR_25 | VAR_18, 0);
  FUNC_5(VAR_22, VAR_25 | VAR_17, 0);
  FUNC_5(VAR_22, VAR_25 | VAR_14, 0);
     }
 } else {
  VAR_24[0] = FUNC_3(VAR_22, VAR_2);
  FUNC_5(VAR_22, VAR_2, 0x29);

  VAR_24[1] = FUNC_3(VAR_22, VAR_3);
  FUNC_5(VAR_22, VAR_3, 0x54);

  VAR_24[2] = FUNC_3(VAR_22, VAR_6);
  FUNC_5(VAR_22, VAR_6, 0x29);

  VAR_24[3] = FUNC_3(VAR_22, VAR_7);
  FUNC_5(VAR_22, VAR_7, 0x54);

  VAR_24[3] = FUNC_3(VAR_22, VAR_0);
  VAR_24[4] = FUNC_3(VAR_22, VAR_4);

  if (!(FUNC_1(VAR_22, VAR_19) &
      VAR_20)) {
   FUNC_5(VAR_22, VAR_0, 0x04);
   FUNC_5(VAR_22, VAR_4, 0x04);
  } else {
   FUNC_5(VAR_22, VAR_0, 0x20);
   FUNC_5(VAR_22, VAR_4, 0x20);
  }

  if (VAR_22->phy.rev < 2) {
   FUNC_4(VAR_22, VAR_1, 0x20);
   FUNC_4(VAR_22, VAR_5, 0x20);
  } else {
   FUNC_2(VAR_22, VAR_1, ~0x20);
   FUNC_2(VAR_22, VAR_5, ~0x20);
  }
 }
}
