
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct nphy_txgains {int dummy; } ;
struct nphy_iqcal_params {int cal_gain; int* ncorr; } ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {int phyhang_avoid; scalar_t__ mphase_cal_phase_id; int* mphase_txcal_bestcoeffs; int nphy_txiqlocal_coeffsvalid; int* nphy_txiqlocal_bestc; int mphase_txcal_cmdidx; int mphase_txcal_numcmds; TYPE_1__ pubpi; int radio_chanspec; int nphy_txiqlocal_chanspec; } ;


 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (struct brcms_phy*) ;
 int FUNC_8 (int,int) ;
 scalar_t__ FUNC_9 (int,char*) ;
 int FUNC_10 (struct brcms_phy*,int) ;
 int FUNC_11 (struct brcms_phy*,int,struct nphy_txgains,struct nphy_iqcal_params*) ;
 int FUNC_12 (struct brcms_phy*,int,int,int ,int,int ,int) ;
 int FUNC_13 (struct brcms_phy*,int) ;
 int FUNC_14 (struct brcms_phy*) ;
 int FUNC_15 (struct brcms_phy*,int ,int,int,int,int*) ;
 int FUNC_16 (struct brcms_phy*,int ,int,int,int,int*) ;
 int FUNC_17 (struct brcms_phy*) ;
 int FUNC_18 (struct brcms_phy*,int,int,int,int ,int) ;
 int FUNC_19 (struct brcms_phy*) ;
 int FUNC_20 (struct brcms_phy*) ;
 int FUNC_21 (struct brcms_phy*) ;
 int FUNC_22 (struct brcms_phy*) ;
 int FUNC_23 (struct brcms_phy*,int) ;
 int FUNC_24 (struct brcms_phy*,int,int) ;

int
FUNC_25(struct brcms_phy *VAR_7, struct nphy_txgains VAR_8,
   bool VAR_9, bool VAR_10)
{
 u16 VAR_11;
 u16 VAR_12[11];
 u8 VAR_13;
 u16 VAR_14;
 u8 VAR_15, VAR_16;
 u16 VAR_17, VAR_18;
 u16 VAR_19 = 0;
 u8 VAR_20;
 u16 VAR_21;
 u16 VAR_22;
 u16 VAR_23[2];
 u16 VAR_24[2];
 struct nphy_iqcal_params VAR_25[2];
 u32 VAR_26;
 void *VAR_27;
 bool VAR_28[2];
 u8 VAR_29 = 0;
 int VAR_30 = 0;
 bool VAR_31 = 0;

 u16 VAR_32[] = {
  0x0300, 0x0500, 0x0700, 0x0900, 0x0d00, 0x1100, 0x1900, 0x1901,
  0x1902,
  0x1903, 0x1904, 0x1905, 0x1906, 0x1907, 0x2407, 0x3207, 0x4607,
  0x6407
 };

 u16 VAR_33[] = {
  0x0200, 0x0300, 0x0600, 0x0900, 0x0d00, 0x1100, 0x1900, 0x2400,
  0x3200,
  0x4600, 0x6400, 0x6401, 0x6402, 0x6403, 0x6404, 0x6405, 0x6406,
  0x6407
 };

 u16 VAR_34[] = {
  0x0200, 0x0300, 0x0400, 0x0700, 0x0900, 0x0c00, 0x1200, 0x1201,
  0x1202,
  0x1203, 0x1204, 0x1205, 0x1206, 0x1207, 0x1907, 0x2307, 0x3207,
  0x4707
 };

 u16 VAR_35[] = {
  0x0100, 0x0200, 0x0400, 0x0700, 0x0900, 0x0c00, 0x1200, 0x1900,
  0x2300,
  0x3200, 0x4700, 0x4701, 0x4702, 0x4703, 0x4704, 0x4705, 0x4706,
  0x4707
 };

 u16 VAR_36[] = {
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000
 };

 u16 VAR_37[] = {
  0x8123, 0x8264, 0x8086, 0x8245, 0x8056,
  0x9123, 0x9264, 0x9086, 0x9245, 0x9056
 };

 u16 VAR_38[] = {
  0x8101, 0x8253, 0x8053, 0x8234, 0x8034,
  0x9101, 0x9253, 0x9053, 0x9234, 0x9034
 };

 u16 VAR_39[] = {
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
  0x0000
 };

 u16 VAR_40[] = {
  0x8434, 0x8334, 0x8084, 0x8267, 0x8056, 0x8234,
  0x9434, 0x9334, 0x9084, 0x9267, 0x9056, 0x9234
 };

 u16 VAR_41[] = {
  0x8423, 0x8323, 0x8073, 0x8256, 0x8045, 0x8223,
  0x9423, 0x9323, 0x9073, 0x9256, 0x9045, 0x9223
 };

 FUNC_13(VAR_7, 1);

 if (FUNC_3(VAR_7->pubpi.phy_rev, 4)) {
  VAR_31 = VAR_7->phyhang_avoid;
  VAR_7->phyhang_avoid = 0;
 }

 if (FUNC_2(VAR_7->radio_chanspec))
  VAR_20 = 40;
 else
  VAR_20 = 20;

 FUNC_15(VAR_7, VAR_6, 2, 0x110, 16, VAR_23);

 for (VAR_17 = 0; VAR_17 <= 1; VAR_17++) {
  FUNC_11(VAR_7, VAR_17, VAR_8,
           &VAR_25[VAR_17]);
  VAR_24[VAR_17] = VAR_25[VAR_17].cal_gain;
 }

 FUNC_16(VAR_7, VAR_6, 2, 0x110, 16, VAR_24);

 FUNC_22(VAR_7);

 FUNC_20(VAR_7);

 VAR_28[0] = VAR_28[1] = 0;
 if (!(FUNC_3(VAR_7->pubpi.phy_rev, 6) ||
       (FUNC_4(VAR_7->pubpi.phy_rev, 5) && FUNC_7(VAR_7)
        && (FUNC_1(VAR_7->radio_chanspec))))) {

  if (VAR_20 == 40) {
   VAR_27 = VAR_34;
   VAR_26 = FUNC_0(VAR_34);
  } else {
   VAR_27 = VAR_32;
   VAR_26 = FUNC_0(VAR_32);
  }
  FUNC_16(VAR_7, VAR_5, VAR_26, 0,
      16, VAR_27);

  if (VAR_20 == 40) {
   VAR_27 = VAR_35;
   VAR_26 = FUNC_0(VAR_35);
  } else {
   VAR_27 = VAR_33;
   VAR_26 = FUNC_0(VAR_33);
  }
  FUNC_16(VAR_7, VAR_5, VAR_26, 32,
      16, VAR_27);
 }

 if (FUNC_3(VAR_7->pubpi.phy_rev, 7))
  FUNC_24(VAR_7, 0xc2, 0x8ad9);
 else
  FUNC_24(VAR_7, 0xc2, 0x8aa9);

 VAR_21 = 250;
 VAR_22 = (VAR_20 == 20) ? 2500 : 5000;

 if (VAR_7->mphase_cal_phase_id > VAR_1) {
  FUNC_12(VAR_7, VAR_20 * 8, 0xffff, 0, 1, 0, 0);
  VAR_30 = 0;
 } else {
  VAR_30 =
   FUNC_18(VAR_7, VAR_22, VAR_21, 1, 0,
          0);
 }

 if (VAR_30 == 0) {

  if (VAR_7->mphase_cal_phase_id > VAR_1) {
   VAR_27 = VAR_7->mphase_txcal_bestcoeffs;
   VAR_26 = FUNC_0(VAR_7->mphase_txcal_bestcoeffs);
   if (FUNC_6(VAR_7->pubpi.phy_rev, 3))
    VAR_26 -= 2;
  } else {
   if ((!VAR_9) && (VAR_7->nphy_txiqlocal_coeffsvalid)) {

    VAR_27 = VAR_7->nphy_txiqlocal_bestc;
    VAR_26 = FUNC_0(VAR_7->nphy_txiqlocal_bestc);
    if (FUNC_6(VAR_7->pubpi.phy_rev, 3))
     VAR_26 -= 2;
   } else {

    VAR_9 = 1;

    if (FUNC_3(VAR_7->pubpi.phy_rev, 3)) {
     VAR_27 =
         VAR_39;
     VAR_26 = FUNC_0(
        VAR_39);
    } else {
     VAR_27 = VAR_36;
     VAR_26 = FUNC_0(
          VAR_36);
    }
   }
  }
  FUNC_16(VAR_7, VAR_5, VAR_26, 64,
      16, VAR_27);

  if (VAR_9) {
   VAR_16 = (FUNC_3(VAR_7->pubpi.phy_rev, 3)) ?
           FUNC_0(
    VAR_40) :
           FUNC_0(VAR_37);
  } else {
   VAR_16 = (FUNC_3(VAR_7->pubpi.phy_rev, 3)) ?
           FUNC_0(
    VAR_41) :
           FUNC_0(VAR_38);
  }

  if (VAR_10) {
   VAR_13 = VAR_7->mphase_txcal_cmdidx;
   if ((VAR_13 + VAR_7->mphase_txcal_numcmds) < VAR_16)
    VAR_15 = VAR_13 + VAR_7->mphase_txcal_numcmds;
   else
    VAR_15 = VAR_16;
  } else {
   VAR_13 = 0;
   VAR_15 = VAR_16;
  }

  for (; VAR_13 < VAR_15; VAR_13++) {

   if (VAR_9) {
    VAR_14 = (FUNC_3(VAR_7->pubpi.phy_rev, 3)) ?
       VAR_40
       [VAR_13] :
       VAR_37[VAR_13];
   } else {
    VAR_14 = (FUNC_3(VAR_7->pubpi.phy_rev, 3)) ?
       VAR_41[
     VAR_13]
       : VAR_38[VAR_13];
   }

   VAR_17 = ((VAR_14 & 0x3000) >> 12);
   VAR_18 = ((VAR_14 & 0x0F00) >> 8);

   if (FUNC_3(VAR_7->pubpi.phy_rev, 6) ||
       (FUNC_4(VAR_7->pubpi.phy_rev, 5) &&
        FUNC_7(VAR_7)
        && (FUNC_1(VAR_7->radio_chanspec)))) {
    if (!VAR_28[VAR_17]) {
     FUNC_23(
      VAR_7,
      VAR_17);
     VAR_28[VAR_17] = 1;
    }
   }

   VAR_11 =
    (VAR_25[VAR_17].
     ncorr[VAR_18] << 8) | VAR_4;
   FUNC_24(VAR_7, 0xc1, VAR_11);

   if ((VAR_18 == 1) || (VAR_18 == 3)
       || (VAR_18 == 4)) {

    FUNC_15(VAR_7, VAR_5,
       1, 69 + VAR_17, 16,
       VAR_12);

    VAR_19 = VAR_12[0];

    VAR_12[0] = 0;
    FUNC_16(VAR_7,
        VAR_5, 1,
        69 + VAR_17, 16,
        VAR_12);
   }

   FUNC_24(VAR_7, 0xc0, VAR_14);

   FUNC_8(((FUNC_10(VAR_7, 0xc0) & 0xc000) != 0),
     20000);
   if (FUNC_9(FUNC_10(VAR_7, 0xc0) & 0xc000,
     "HW error: txiq calib"))
    return -VAR_0;

   FUNC_15(VAR_7, VAR_5,
      VAR_26, 96, 16, VAR_12);
   FUNC_16(VAR_7, VAR_5,
       VAR_26, 64, 16, VAR_12);

   if ((VAR_18 == 1) || (VAR_18 == 3)
       || (VAR_18 == 4)) {

    VAR_12[0] = VAR_19;

   }

  }

  if (VAR_10) {
   VAR_7->mphase_txcal_cmdidx = VAR_15;
   if (VAR_7->mphase_txcal_cmdidx >= VAR_16)
    VAR_7->mphase_txcal_cmdidx = 0;
  }

  VAR_29 =
   (FUNC_5(VAR_7->pubpi.phy_rev, 2)) ?
   VAR_2 : VAR_3;

  if (!VAR_10
      || (VAR_7->mphase_cal_phase_id == VAR_29)) {

   FUNC_15(VAR_7, VAR_5, 4, 96,
      16, VAR_12);
   FUNC_16(VAR_7, VAR_5, 4, 80,
       16, VAR_12);

   if (FUNC_6(VAR_7->pubpi.phy_rev, 2)) {

    VAR_12[0] = 0;
    VAR_12[1] = 0;
    VAR_12[2] = 0;
    VAR_12[3] = 0;

   }
   FUNC_16(VAR_7, VAR_5, 4, 88,
       16, VAR_12);

   FUNC_15(VAR_7, VAR_5, 2, 101,
      16, VAR_12);
   FUNC_16(VAR_7, VAR_5, 2, 85,
       16, VAR_12);

   FUNC_16(VAR_7, VAR_5, 2, 93,
       16, VAR_12);

   VAR_26 = FUNC_0(VAR_7->nphy_txiqlocal_bestc);
   if (FUNC_6(VAR_7->pubpi.phy_rev, 3))
    VAR_26 -= 2;

   FUNC_15(VAR_7, VAR_5,
      VAR_26, 96, 16,
      VAR_7->nphy_txiqlocal_bestc);

   VAR_7->nphy_txiqlocal_coeffsvalid = 1;
   VAR_7->nphy_txiqlocal_chanspec = VAR_7->radio_chanspec;
  } else {
   VAR_26 = FUNC_0(VAR_7->mphase_txcal_bestcoeffs);
   if (FUNC_6(VAR_7->pubpi.phy_rev, 3))
    VAR_26 -= 2;

   FUNC_15(VAR_7, VAR_5,
      VAR_26, 96, 16,
      VAR_7->mphase_txcal_bestcoeffs);
  }

  FUNC_14(VAR_7);

  FUNC_24(VAR_7, 0xc2, 0x0000);

 }

 FUNC_19(VAR_7);

 FUNC_16(VAR_7, VAR_6, 2, 0x110, 16,
     VAR_23);

 FUNC_21(VAR_7);

 if (FUNC_6(VAR_7->pubpi.phy_rev, 2)) {
  if (!VAR_10
      || (VAR_7->mphase_cal_phase_id == VAR_29))
   FUNC_17(VAR_7);
 }

 if (FUNC_3(VAR_7->pubpi.phy_rev, 4))
  VAR_7->phyhang_avoid = VAR_31;

 FUNC_13(VAR_7, 0);

 return VAR_30;
}
