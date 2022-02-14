
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint ;
typedef size_t u8 ;
typedef int u16 ;
struct lcnphy_txgains {int gm_gain; int pga_gain; int pad_gain; } ;
struct TYPE_3__ {int* txiqlocal_bestcoeffs; int txiqlocal_bestcoeffs_valid; } ;
struct brcms_phy_lcnphy {TYPE_1__ lcnphy_cal_results; int lcnphy_tssi_idx; } ;
struct TYPE_4__ {struct brcms_phy_lcnphy* pi_lcnphy; } ;
struct brcms_phy {scalar_t__ phy_tx_tone_freq; int radio_chanspec; TYPE_2__ u; } ;
typedef int ncorr_override ;
typedef enum lcnphy_cal_mode { ____Placeholder_lcnphy_cal_mode } lcnphy_cal_mode ;


 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int,int ) ;
 int* VAR_4 ;
 int* VAR_5 ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (struct brcms_phy*,int,int,int) ;
 int FUNC_7 (struct brcms_phy*,int,int) ;
 int FUNC_8 (struct brcms_phy*,int) ;
 int*** VAR_6 ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct brcms_phy*,int ,int*,int,int,int) ;
 int FUNC_11 (struct brcms_phy*,int ,int*,int,int,int) ;
 int FUNC_12 (struct brcms_phy*,struct lcnphy_txgains*) ;
 int FUNC_13 (struct brcms_phy*) ;
 int FUNC_14 (struct brcms_phy*) ;
 int FUNC_15 (struct brcms_phy*,struct lcnphy_txgains*) ;
 int FUNC_16 (struct brcms_phy*,int ) ;
 int FUNC_17 (struct brcms_phy*,int) ;
 int FUNC_18 (struct brcms_phy*,int,int,int) ;
 int FUNC_19 (struct brcms_phy*) ;
 int FUNC_20 (struct brcms_phy*) ;
 int FUNC_21 (struct brcms_phy*,int*) ;
 int FUNC_22 (struct brcms_phy*,int*) ;
 int FUNC_23 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void
FUNC_24(struct brcms_phy *VAR_7,
         struct lcnphy_txgains *VAR_8,
         enum lcnphy_cal_mode VAR_9, bool VAR_10)
{

 struct lcnphy_txgains VAR_11, VAR_12;
 u16 VAR_13;
 u8 VAR_14;
 int VAR_15;
 u16 VAR_16[5];
 u16 VAR_17[] = { 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
         0x0000, 0x0000, 0x0000, 0x0000, 0x0000};

 u16 VAR_18[] = {
  0x8434, 0x8334, 0x8084, 0x8267, 0x8056, 0x8234
 };

 u16 VAR_19[] = {
  0x8434, 0x8334, 0x8084, 0x8267, 0x8056, 0x8234
 };

 u16 VAR_20[] = {
  0x7a97, 0x7a97, 0x7a97, 0x7a87, 0x7a87, 0x7b97
 };

 u16 VAR_21[] = {
  0x7a97, 0x7a97, 0x7a97, 0x7a87, 0x7a87, 0x7b97
 };
 u16 *VAR_22 = VAR_20;

 u16 *VAR_23 = ((void*)0), *VAR_24 = ((void*)0), VAR_25, VAR_26;
 u16 VAR_27, VAR_28;
 u16 VAR_29, VAR_30;
 bool VAR_31;
 struct lcnphy_txgains VAR_32;
 uint VAR_33, VAR_34 = 0, VAR_35 = 0;
 u16 *VAR_36;
 struct brcms_phy_lcnphy *VAR_37 = VAR_7->u.pi_lcnphy;

 VAR_36 = FUNC_3(sizeof(u16) * 20, VAR_0);
 if (((void*)0) == VAR_36)
  return;

 VAR_30 = FUNC_8(VAR_7, 0x6db);
 VAR_29 = FUNC_8(VAR_7, 0x6da);

 FUNC_7(VAR_7, 0x6da, 0x40);
 FUNC_7(VAR_7, 0x6db, 0x3);

 switch (VAR_9) {
 case 129:
  VAR_23 = VAR_17;
  VAR_24 = VAR_18;
  VAR_34 = FUNC_0(VAR_18);
  break;

 case 128:
  VAR_23 = VAR_17;
  VAR_24 = VAR_19;
  VAR_34 = FUNC_0(VAR_19);
  VAR_22 = VAR_21;
  break;

 default:
  break;
 }

 FUNC_11(VAR_7, VAR_1,
          VAR_23, 11, 16, 64);

 FUNC_23(VAR_7, 0x6da, 0xffff);
 FUNC_6(VAR_7, 0x503, (0x1 << 3), (1) << 3);

 VAR_27 = FUNC_13(VAR_7);

 FUNC_6(VAR_7, 0x4a4, (0x1 << 12), (1) << 12);

 FUNC_17(VAR_7, VAR_2);

 VAR_28 = FUNC_8(VAR_7, 0x4db);

 FUNC_6(VAR_7, 0x4db, (0x3ff << 0), (0x2a6) << 0);

 FUNC_6(VAR_7, 0x4db, (0x7 << 12), (2) << 12);

 FUNC_21(VAR_7, VAR_36);

 VAR_31 = FUNC_20(VAR_7);
 if (VAR_31)
  FUNC_12(VAR_7, &VAR_32);

 if (!VAR_8) {
  if (!VAR_31)
   FUNC_16(VAR_7,
             VAR_37->lcnphy_tssi_idx);
  FUNC_12(VAR_7, &VAR_12);
  VAR_8 = &VAR_12;
 }

 VAR_13 = (VAR_8->gm_gain << 8) |
        (VAR_8->pga_gain << 4) | (VAR_8->pad_gain);

 VAR_14 = (FUNC_1(VAR_7->radio_chanspec) ? 1 : 0);

 VAR_11 = *VAR_8;
 FUNC_5(VAR_16, 0, sizeof(VAR_16));
 for (VAR_15 = 0; VAR_15 < VAR_3[VAR_14]; VAR_15++) {
  if (VAR_13 == VAR_6[VAR_14][VAR_15][0]) {
   VAR_11.gm_gain =
    VAR_6[VAR_14][VAR_15][1];
   VAR_11.pga_gain =
    VAR_6[VAR_14][VAR_15][2];
   VAR_11.pad_gain =
    VAR_6[VAR_14][VAR_15][3];
   FUNC_4(VAR_16,
          &VAR_6[VAR_14][VAR_15][3],
          sizeof(VAR_16));
   break;
  }
 }

 FUNC_15(VAR_7, &VAR_11);

 FUNC_23(VAR_7, 0x453, 0xaa9);
 FUNC_23(VAR_7, 0x93d, 0xc0);

 FUNC_11(VAR_7, VAR_1,
          VAR_5,
          FUNC_0(VAR_5),
          16, 0);

 FUNC_11(VAR_7, VAR_1,
          VAR_4,
          FUNC_0(
           VAR_4), 16,
          32);

 if (VAR_7->phy_tx_tone_freq) {

  FUNC_19(VAR_7);
  FUNC_9(5);
  FUNC_18(VAR_7, 3750, 88, 1);
 } else {
  FUNC_18(VAR_7, 3750, 88, 1);
 }

 FUNC_23(VAR_7, 0x6da, 0xffff);

 for (VAR_33 = VAR_35; VAR_33 < VAR_34; VAR_33++) {
  u16 VAR_38 = 0;
  u16 VAR_39[11];
  u16 VAR_40;

  VAR_25 = (VAR_24[VAR_33] & 0x0f00) >> 8;

  VAR_40 = VAR_22[VAR_33];
  if (VAR_16[VAR_25])
   VAR_40 =
    VAR_16[VAR_25] << 8 | (VAR_40 &
         0xff);

  FUNC_23(VAR_7, 0x452, VAR_40);

  if ((VAR_25 == 3) || (VAR_25 == 4)) {
   FUNC_10(VAR_7, VAR_1,
           &VAR_26, 1, 16, 69);

   FUNC_11(VAR_7, VAR_1,
            &VAR_38, 1, 16, 69);
  }

  FUNC_23(VAR_7, 0x451, VAR_24[VAR_33]);

  if (!FUNC_14(VAR_7))
   goto cleanup;

  FUNC_10(VAR_7, VAR_1,
          VAR_39,
          FUNC_0(VAR_39), 16, 96);
  FUNC_11(VAR_7, VAR_1,
           VAR_39,
           FUNC_0(VAR_39), 16, 64);

  if ((VAR_25 == 3) || (VAR_25 == 4))
   FUNC_11(VAR_7, VAR_1,
            &VAR_26, 1, 16, 69);
  FUNC_10(VAR_7, VAR_1,
          VAR_37->lcnphy_cal_results.
          txiqlocal_bestcoeffs,
          FUNC_0(VAR_37->
       lcnphy_cal_results.
       txiqlocal_bestcoeffs),
          16, 96);
 }

 FUNC_10(VAR_7, VAR_1,
         VAR_37->lcnphy_cal_results.
         txiqlocal_bestcoeffs,
         FUNC_0(VAR_37->lcnphy_cal_results.
      txiqlocal_bestcoeffs), 16, 96);
 VAR_37->lcnphy_cal_results.txiqlocal_bestcoeffs_valid = 1;

 FUNC_11(VAR_7, VAR_1,
          &VAR_37->lcnphy_cal_results.
          txiqlocal_bestcoeffs[0], 4, 16, 80);

 FUNC_11(VAR_7, VAR_1,
          &VAR_37->lcnphy_cal_results.
          txiqlocal_bestcoeffs[5], 2, 16, 85);

cleanup:
 FUNC_22(VAR_7, VAR_36);
 FUNC_2(VAR_36);

 if (!VAR_10)
  FUNC_19(VAR_7);

 FUNC_23(VAR_7, 0x4db, VAR_28);

 FUNC_23(VAR_7, 0x453, 0);

 if (VAR_31)
  FUNC_15(VAR_7, &VAR_32);
 FUNC_17(VAR_7, VAR_27);

 FUNC_23(VAR_7, 0x6da, VAR_29);
 FUNC_23(VAR_7, 0x6db, VAR_30);

}
