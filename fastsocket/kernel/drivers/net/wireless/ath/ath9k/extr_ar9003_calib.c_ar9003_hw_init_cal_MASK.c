
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int hw_caps; int tx_chainmask; int rx_chainmask; } ;
struct ath_hw {int enabled_cals; int ah_flags; int * cal_list_curr; int * cal_list; int iq_caldata; int * cal_list_last; int txchainmask; int rxchainmask; TYPE_1__ caps; struct ath9k_hw_cal_data* caldata; } ;
struct ath_common {int dummy; } ;
struct ath9k_hw_cal_data {scalar_t__ CalValid; scalar_t__ done_txiqcal_once; scalar_t__ done_txclcal_once; } ;
struct ath9k_channel {int dummy; } ;


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
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ath_hw*,int *) ;
 scalar_t__ FUNC_2 (struct ath9k_channel*) ;
 scalar_t__ FUNC_3 (struct ath9k_channel*) ;
 scalar_t__ FUNC_4 (struct ath9k_channel*) ;
 int FUNC_5 (struct ath_hw*,int ,int ) ;
 int FUNC_6 (struct ath_hw*,int ) ;
 int FUNC_7 (struct ath_hw*,int ,int ,int ) ;
 int FUNC_8 (struct ath_hw*,int ,int ) ;
 int FUNC_9 (struct ath_hw*,int ,int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_10 (struct ath_hw*,int) ;
 int FUNC_11 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_12 (struct ath_hw*) ;
 int FUNC_13 (struct ath_hw*) ;
 int FUNC_14 (struct ath_hw*) ;
 int FUNC_15 (struct ath_hw*) ;
 int FUNC_16 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_17 (struct ath_hw*,int) ;
 int FUNC_18 (struct ath_hw*,int ,int ) ;
 int FUNC_19 (struct ath_hw*,int) ;
 int FUNC_20 (struct ath_hw*) ;
 int FUNC_21 (struct ath_hw*) ;
 int FUNC_22 (struct ath_hw*) ;
 int FUNC_23 (struct ath_hw*,int*) ;
 struct ath_common* FUNC_24 (struct ath_hw*) ;
 scalar_t__ FUNC_25 (struct ath_hw*) ;
 int FUNC_26 (struct ath_hw*,int *) ;
 int FUNC_27 (struct ath_hw*) ;
 int FUNC_28 (struct ath_hw*) ;
 int FUNC_29 (struct ath_hw*,int ,int,int ,int) ;
 int FUNC_30 (struct ath_common*,int ,char*,...) ;
 int FUNC_31 (struct ath_common*,char*) ;
 int FUNC_32 (int) ;

__attribute__((used)) static bool FUNC_33(struct ath_hw *VAR_22,
          struct ath9k_channel *VAR_23)
{
 struct ath_common *VAR_24 = FUNC_24(VAR_22);
 struct ath9k_hw_cal_data *VAR_25 = VAR_22->caldata;
 bool VAR_26 = 0;
 bool VAR_27 = 1, VAR_28 = 1;
 bool VAR_29 = 0, VAR_30, VAR_31 = 0;
 bool VAR_32 = !!(VAR_22->caps.hw_caps & VAR_16);
 u32 VAR_33 = 0, VAR_34 = VAR_8 |
       VAR_7 |
       VAR_9;


 FUNC_18(VAR_22, VAR_22->caps.rx_chainmask, VAR_22->caps.tx_chainmask);

 if (VAR_32) {
  if (!FUNC_16(VAR_22, VAR_23))
   VAR_29 = 1;

  if (VAR_29)
   FUNC_30(VAR_24, VAR_17, "RTT calibration to be done\n");
 }

 VAR_30 = VAR_29;

 if (VAR_29) {
  FUNC_14(VAR_22);
  FUNC_17(VAR_22, 0x00);
  FUNC_12(VAR_22);
 }

 if (VAR_32 && !VAR_29) {
  VAR_33 = FUNC_6(VAR_22, VAR_5);
  VAR_34 &= VAR_33;
  VAR_33 &= ~(VAR_8 |
        VAR_7 |
        VAR_9);
  FUNC_9(VAR_22, VAR_5, VAR_33);
 }

 if (VAR_22->enabled_cals & VAR_19) {
  if (VAR_25 && VAR_25->done_txclcal_once)
   FUNC_5(VAR_22, VAR_10,
        VAR_11);
  else {
   FUNC_8(VAR_22, VAR_10,
        VAR_11);
   VAR_30 = 1;
  }
 }

 if ((FUNC_3(VAR_23) || FUNC_4(VAR_23)) ||
     !(VAR_22->enabled_cals & VAR_20))
  goto skip_tx_iqcal;


 FUNC_7(VAR_22, VAR_14,
        VAR_15,
        VAR_18);





 if (VAR_22->enabled_cals & VAR_21) {
  if (VAR_25 && !VAR_25->done_txiqcal_once)
   FUNC_8(VAR_22, VAR_12,
        VAR_13);
  else
   FUNC_5(VAR_22, VAR_12,
        VAR_13);
  VAR_26 = VAR_30 = 1;
 } else if (VAR_25 && !VAR_25->done_txiqcal_once) {
  VAR_30 = 1;
  VAR_31 = 1;
 }

skip_tx_iqcal:
 if (FUNC_25(VAR_22) && FUNC_2(VAR_23) && VAR_30)
  FUNC_23(VAR_22, &VAR_27);

 if (VAR_31) {
  VAR_26 = FUNC_21(VAR_22);
  FUNC_9(VAR_22, VAR_2, VAR_3);
  FUNC_32(5);
  FUNC_9(VAR_22, VAR_2, VAR_4);
 }

 if (VAR_30 || !(VAR_22->ah_flags & VAR_0)) {

  FUNC_9(VAR_22, VAR_5,
     FUNC_6(VAR_22, VAR_5) |
     VAR_6);


  VAR_28 = FUNC_29(VAR_22, VAR_5,
           VAR_6,
           0, VAR_1);

  FUNC_11(VAR_22, VAR_23);
 }

 if (FUNC_25(VAR_22) && FUNC_2(VAR_23) && VAR_30)
  FUNC_22(VAR_22);

 if (VAR_32 && !VAR_29) {
  VAR_33 |= VAR_34;
  FUNC_9(VAR_22, VAR_5, VAR_33);
 }

 if (!VAR_28) {
  if (VAR_29)
   FUNC_13(VAR_22);

  FUNC_30(VAR_24, VAR_17,
   "offset calibration failed to complete in %d ms; noisy environment?\n",
   VAR_1 / 1000);
  return 0;
 }

 if (VAR_26)
  FUNC_19(VAR_22, VAR_27);
 else if (VAR_25 && VAR_25->done_txiqcal_once)
  FUNC_20(VAR_22);

 FUNC_10(VAR_22, VAR_27);

 if (VAR_29 && VAR_25) {
  if (VAR_27) {
   if (!FUNC_28(VAR_22))
    FUNC_31(FUNC_24(VAR_22),
     "Could not stop baseband\n");
   else
    FUNC_15(VAR_22);

   FUNC_27(VAR_22);
  }

  FUNC_13(VAR_22);
 }


 FUNC_18(VAR_22, VAR_22->rxchainmask, VAR_22->txchainmask);


 VAR_22->cal_list = VAR_22->cal_list_last = VAR_22->cal_list_curr = ((void*)0);

 FUNC_0(&VAR_22->iq_caldata);
 FUNC_1(VAR_22, &VAR_22->iq_caldata);
 FUNC_30(VAR_24, VAR_17, "enabling IQ Calibration\n");


 VAR_22->cal_list_curr = VAR_22->cal_list;

 if (VAR_22->cal_list_curr)
  FUNC_26(VAR_22, VAR_22->cal_list_curr);

 if (VAR_25)
  VAR_25->CalValid = 0;

 return 1;
}
