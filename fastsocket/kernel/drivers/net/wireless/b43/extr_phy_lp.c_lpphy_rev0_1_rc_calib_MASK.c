
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct lpphy_tx_gains {int dummy; } ;
struct lpphy_iq_est {int i_pwr; int q_pwr; } ;
struct TYPE_2__ {struct b43_phy_lp* lp; } ;
struct b43_wldev {int wl; TYPE_1__ phy; } ;
struct b43_phy_lp {int txpctl_mode; int rc_cap; } ;
typedef int iq_est ;
typedef enum b43_lpphy_txpctl_mode { ____Placeholder_b43_lpphy_txpctl_mode } b43_lpphy_txpctl_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct b43_wldev*,int) ;
 int FUNC_1 (struct b43_wldev*,int ,int,int) ;
 int FUNC_2 (struct b43_wldev*,int ) ;
 int FUNC_3 (struct b43_wldev*,int ,int) ;
 int FUNC_4 (struct b43_wldev*,int ,int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (struct b43_wldev*,int) ;
 int FUNC_7 (struct b43_wldev*) ;
 struct lpphy_tx_gains FUNC_8 (struct b43_wldev*) ;
 int FUNC_9 (struct b43_wldev*) ;
 int FUNC_10 (int,int,int) ;
 int FUNC_11 (struct b43_wldev*) ;
 int FUNC_12 (struct b43_wldev*,int) ;
 int FUNC_13 (struct b43_wldev*,int,int,int,int,int ) ;
 int FUNC_14 (struct b43_wldev*,int,int,struct lpphy_iq_est*) ;
 int FUNC_15 (struct b43_wldev*,int ) ;
 int FUNC_16 (struct b43_wldev*) ;
 int FUNC_17 (struct b43_wldev*,int) ;
 int FUNC_18 (struct b43_wldev*,struct lpphy_tx_gains) ;
 int FUNC_19 (struct b43_wldev*,int) ;
 int FUNC_20 (struct b43_wldev*) ;
 int FUNC_21 (struct lpphy_iq_est*,int ,int) ;

__attribute__((used)) static void FUNC_22(struct b43_wldev *VAR_9)
{
 struct b43_phy_lp *VAR_10 = VAR_9->phy.lp;
 struct lpphy_iq_est VAR_11;
 struct lpphy_tx_gains VAR_12;
 static const u32 VAR_13[21] = {
  0x10000, 0x10557, 0x10e2d, 0x113e0, 0x10f22, 0x0ff64,
  0x0eda2, 0x0e5d4, 0x0efd1, 0x0fbe8, 0x0b7b8, 0x04b35,
  0x01a5e, 0x00a0b, 0x00444, 0x001fd, 0x000ff, 0x00088,
  0x0004c, 0x0002c, 0x0001a,
 };
 bool VAR_14;
 u8 VAR_15;
 u16 VAR_16, VAR_17, VAR_18, VAR_19,
     VAR_20, VAR_21, VAR_22;
 enum b43_lpphy_txpctl_mode VAR_23;
 u32 VAR_24, VAR_25, VAR_26, VAR_27 = 0, VAR_28 = 0;
 int VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;

 FUNC_21(&VAR_11, 0, sizeof(VAR_11));

 VAR_33 = FUNC_0(VAR_9, 7);
 if (VAR_33) {
  FUNC_5(VAR_9->wl,
         "RC calib: Failed to switch to channel 7, error = %d\n",
         VAR_33);
 }
 VAR_14 = !!(FUNC_2(VAR_9, VAR_1) & 0x40);
 VAR_15 = FUNC_7(VAR_9);
 if (VAR_14)
  VAR_12 = FUNC_8(VAR_9);
 VAR_16 = FUNC_2(VAR_9, VAR_4);
 VAR_17 = FUNC_2(VAR_9, VAR_7);
 VAR_18 = FUNC_2(VAR_9, VAR_1);
 VAR_19 = FUNC_2(VAR_9, VAR_2);
 VAR_20 = FUNC_2(VAR_9, VAR_5);
 VAR_21 = FUNC_2(VAR_9, VAR_6);
 VAR_22 = FUNC_2(VAR_9, VAR_3);
 FUNC_11(VAR_9);
 VAR_23 = VAR_10->txpctl_mode;

 FUNC_19(VAR_9, VAR_8);
 FUNC_6(VAR_9, 1);
 VAR_29 = FUNC_9(VAR_9);
 if (VAR_29 == -1)
  goto finish;
 FUNC_17(VAR_9, VAR_29);
 FUNC_1(VAR_9, VAR_3, 0xFFBF, 0x40);
 FUNC_1(VAR_9, VAR_6, 0xFFF8, 0x1);
 FUNC_1(VAR_9, VAR_6, 0xFFC7, 0x8);
 FUNC_1(VAR_9, VAR_6, 0xFF3F, 0xC0);
 for (VAR_30 = 128; VAR_30 <= 159; VAR_30++) {
  FUNC_4(VAR_9, VAR_0, VAR_30);
  VAR_32 = 0;
  for (VAR_31 = 5; VAR_31 <= 25; VAR_31++) {
   FUNC_13(VAR_9, 1, 1, VAR_31, VAR_31, 0);
   if (!(FUNC_14(VAR_9, 1000, 32, &VAR_11)))
    goto finish;
   VAR_26 = VAR_11.i_pwr + VAR_11.q_pwr;
   if (VAR_31 == 5)
    VAR_27 = VAR_26;
   VAR_25 = ((VAR_13[VAR_31-5] >> 3) + 1) >> 1;
   VAR_24 = FUNC_10(VAR_26, VAR_27, 12);
   VAR_26 = VAR_25 - VAR_24;
   VAR_26 *= VAR_26;
   VAR_32 += VAR_26;
   if ((VAR_30 == 128) || (VAR_32 < VAR_28)) {
    VAR_10->rc_cap = VAR_30;
    VAR_28 = VAR_32;
   }
  }
 }
 FUNC_20(VAR_9);

finish:
 FUNC_12(VAR_9, 1);
 FUNC_3(VAR_9, VAR_7, VAR_17);
 FUNC_3(VAR_9, VAR_4, VAR_16);
 FUNC_3(VAR_9, VAR_2, VAR_19);
 FUNC_3(VAR_9, VAR_1, VAR_18);
 FUNC_3(VAR_9, VAR_6, VAR_21);
 FUNC_3(VAR_9, VAR_5, VAR_20);
 FUNC_3(VAR_9, VAR_3, VAR_22);

 FUNC_15(VAR_9, VAR_15);
 if (VAR_14) {







  FUNC_18(VAR_9, VAR_12);
 }
 FUNC_19(VAR_9, VAR_23);
 if (VAR_10->rc_cap)
  FUNC_16(VAR_9);
}
