
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw {int supp_cals; TYPE_1__* caldata; int * cal_list_curr; int * cal_list; int iq_caldata; int adcdc_caldata; int adcgain_caldata; int * cal_list_last; } ;
struct ath_common {int dummy; } ;
struct ath9k_channel {int dummy; } ;
struct TYPE_2__ {int nfcal_pending; scalar_t__ CalValid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 scalar_t__ FUNC_5 (struct ath_hw*) ;
 scalar_t__ FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath_hw*) ;
 int VAR_8 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ath_hw*,int *) ;
 int VAR_9 ;
 int FUNC_10 (struct ath_hw*,int ,int ) ;
 int FUNC_11 (struct ath_hw*,int ) ;
 int FUNC_12 (struct ath_hw*,int ,int ) ;
 int FUNC_13 (struct ath_hw*,int ,int) ;
 scalar_t__ FUNC_14 (struct ath_hw*,struct ath9k_channel*,int) ;
 int FUNC_15 (struct ath_hw*,int) ;
 int FUNC_16 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_17 (struct ath_hw*,struct ath9k_channel*) ;
 struct ath_common* FUNC_18 (struct ath_hw*) ;
 int FUNC_19 (struct ath_hw*,int *) ;
 int FUNC_20 (struct ath_hw*,int ,int,int ,int) ;
 int FUNC_21 (struct ath_common*,int ,char*,...) ;

__attribute__((used)) static bool FUNC_22(struct ath_hw *VAR_10, struct ath9k_channel *VAR_11)
{
 struct ath_common *VAR_12 = FUNC_18(VAR_10);

 if (FUNC_2(VAR_10)) {
  if (!FUNC_16(VAR_10, VAR_11))
   return 0;
 } else if (FUNC_4(VAR_10) && FUNC_5(VAR_10)) {
  if (!FUNC_17(VAR_10, VAR_11))
   return 0;
 } else {
  if (FUNC_3(VAR_10)) {
   if (!FUNC_7(VAR_10))
    FUNC_10(VAR_10, VAR_3,
         VAR_4);
   FUNC_12(VAR_10, VAR_5,
        VAR_7);
  }


  FUNC_13(VAR_10, VAR_5,
     FUNC_11(VAR_10, VAR_5) |
     VAR_6);


  if (!FUNC_20(VAR_10, VAR_5,
       VAR_6,
       0, VAR_2)) {
   FUNC_21(VAR_12, VAR_8,
    "offset calibration failed to complete in %d ms; noisy environment?\n",
    VAR_2 / 1000);
   return 0;
  }

  if (FUNC_3(VAR_10)) {
   if (!FUNC_7(VAR_10))
    FUNC_12(VAR_10, VAR_3,
         VAR_4);
   FUNC_10(VAR_10, VAR_5,
        VAR_7);
  }
 }


 FUNC_15(VAR_10, 1);

 if (VAR_10->caldata)
  VAR_10->caldata->nfcal_pending = 1;

 VAR_10->cal_list = VAR_10->cal_list_last = VAR_10->cal_list_curr = ((void*)0);


 if (FUNC_0(VAR_10) || FUNC_1(VAR_10)) {
  VAR_10->supp_cals = VAR_9;

  if (FUNC_1(VAR_10))
   VAR_10->supp_cals |= VAR_1 | VAR_0;

  if (FUNC_6(VAR_10))
   VAR_10->supp_cals &= ~VAR_1;

  if (FUNC_14(VAR_10, VAR_11, VAR_1)) {
   FUNC_8(&VAR_10->adcgain_caldata);
   FUNC_9(VAR_10, &VAR_10->adcgain_caldata);
   FUNC_21(VAR_12, VAR_8,
     "enabling ADC Gain Calibration\n");
  }

  if (FUNC_14(VAR_10, VAR_11, VAR_0)) {
   FUNC_8(&VAR_10->adcdc_caldata);
   FUNC_9(VAR_10, &VAR_10->adcdc_caldata);
   FUNC_21(VAR_12, VAR_8,
     "enabling ADC DC Calibration\n");
  }

  if (FUNC_14(VAR_10, VAR_11, VAR_9)) {
   FUNC_8(&VAR_10->iq_caldata);
   FUNC_9(VAR_10, &VAR_10->iq_caldata);
   FUNC_21(VAR_12, VAR_8, "enabling IQ Calibration\n");
  }

  VAR_10->cal_list_curr = VAR_10->cal_list;

  if (VAR_10->cal_list_curr)
   FUNC_19(VAR_10, VAR_10->cal_list_curr);
 }

 if (VAR_10->caldata)
  VAR_10->caldata->CalValid = 0;

 return 1;
}
