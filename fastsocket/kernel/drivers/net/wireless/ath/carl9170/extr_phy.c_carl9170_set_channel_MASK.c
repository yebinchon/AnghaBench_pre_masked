
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_channel {scalar_t__ band; int center_freq; } ;
struct carl9170_rf_init_result {int ret; } ;
struct carl9170_rf_init {int ht_settings; void* finiteLoopCount; void* delta_slope_coeff_man_shgi; void* delta_slope_coeff_exp_shgi; void* delta_slope_coeff_man; void* delta_slope_coeff_exp; void* freq; } ;
struct carl9170_phy_freq_params {int coeff_exp; int coeff_man; int coeff_exp_shgi; int coeff_man_shgi; } ;
struct TYPE_3__ {int tx_mask; } ;
struct ar9170 {int chan_fail; int heavy_clip; int ht_settings; struct ieee80211_channel* channel; TYPE_2__* hw; int total_chan_fail; TYPE_1__ eeprom; } ;
typedef int rf_res ;
typedef int rf ;
typedef enum nl80211_channel_type { ____Placeholder_nl80211_channel_type } nl80211_channel_type ;
typedef enum carl9170_bw { ____Placeholder_carl9170_bw } carl9170_bw ;
struct TYPE_4__ {int wiphy; int conf; } ;


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
 int FUNC_0 () ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;



 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (struct ar9170*,int ,int,struct carl9170_rf_init*,int,struct carl9170_rf_init_result*) ;
 struct carl9170_phy_freq_params* FUNC_3 (struct ieee80211_channel*,int) ;
 int FUNC_4 (struct ar9170*,scalar_t__) ;
 int FUNC_5 (struct ar9170*,int,int,int) ;
 int FUNC_6 (struct ar9170*,int) ;
 int FUNC_7 (struct ar9170*,int ) ;
 int FUNC_8 (struct ar9170*,struct ieee80211_channel*) ;
 int FUNC_9 (struct ar9170*,struct ieee80211_channel*) ;
 int FUNC_10 (struct ar9170*,int,int) ;
 int FUNC_11 (struct ar9170*,int ,int) ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 void* FUNC_14 (int) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 () ;
 int FUNC_17 (int) ;
 int FUNC_18 (int ,char*,...) ;

int FUNC_19(struct ar9170 *VAR_18, struct ieee80211_channel *VAR_19,
    enum nl80211_channel_type VAR_20)
{
 const struct carl9170_phy_freq_params *VAR_21;
 struct carl9170_rf_init_result VAR_22;
 struct carl9170_rf_init VAR_23;
 u32 VAR_24, VAR_25 = 0, VAR_26 = 0;
 int VAR_27;
 enum carl9170_bw VAR_28;
 struct ieee80211_channel *VAR_29 = ((void*)0);

 VAR_28 = FUNC_17(VAR_20);

 if (FUNC_12(&VAR_18->hw->conf))
  VAR_26 |= VAR_11;

 if (FUNC_13(&VAR_18->hw->conf))
  VAR_26 |= VAR_10;


 if (VAR_18->channel) {
  VAR_29 = VAR_18->channel;
  VAR_18->channel = ((void*)0);
 }


 VAR_27 = FUNC_11(VAR_18, VAR_8,
     VAR_9);
 if (VAR_27)
  return VAR_27;

 VAR_27 = FUNC_11(VAR_18, VAR_8, 0x0);
 if (VAR_27)
  return VAR_27;

 VAR_27 = FUNC_4(VAR_18, VAR_19->band);
 if (VAR_27)
  return VAR_27;

 VAR_27 = FUNC_6(VAR_18,
      VAR_19->band == VAR_17);
 if (VAR_27)
  return VAR_27;

 VAR_27 = FUNC_2(VAR_18, VAR_13, 0, ((void*)0), 0, ((void*)0));
 if (VAR_27)
  return VAR_27;

 VAR_27 = FUNC_11(VAR_18, VAR_0,
     0x200);
 if (VAR_27)
  return VAR_27;

 VAR_27 = FUNC_5(VAR_18,
      VAR_19->band == VAR_17,
      VAR_19->center_freq, VAR_28);
 if (VAR_27)
  return VAR_27;

 VAR_24 = VAR_6 |
       VAR_4;

 switch (VAR_28) {
 case 130:
  break;
 case 128:
  VAR_24 |= VAR_2 |
         VAR_5;
  VAR_25 = 3;
  break;
 case 129:
  VAR_24 |= VAR_2 |
         VAR_5 |
         VAR_3;
  VAR_25 = 1;
  break;
 default:
  FUNC_0();
  return -VAR_16;
 }

 if (VAR_18->eeprom.tx_mask != 1)
  VAR_24 |= VAR_7;

 VAR_27 = FUNC_11(VAR_18, VAR_1, VAR_24);
 if (VAR_27)
  return VAR_27;

 VAR_27 = FUNC_8(VAR_18, VAR_19);
 if (VAR_27)
  return VAR_27;

 FUNC_10(VAR_18, VAR_19->center_freq, VAR_28);

 VAR_27 = FUNC_9(VAR_18, VAR_19);
 if (VAR_27)
  return VAR_27;

 VAR_21 = FUNC_3(VAR_19, VAR_28);

 VAR_23.ht_settings = VAR_26;
 if (FUNC_13(&VAR_18->hw->conf))
  FUNC_1(VAR_12, VAR_23.ht_settings, VAR_25);

 VAR_23.freq = FUNC_14(VAR_19->center_freq * 1000);
 VAR_23.delta_slope_coeff_exp = FUNC_14(VAR_21->coeff_exp);
 VAR_23.delta_slope_coeff_man = FUNC_14(VAR_21->coeff_man);
 VAR_23.delta_slope_coeff_exp_shgi = FUNC_14(VAR_21->coeff_exp_shgi);
 VAR_23.delta_slope_coeff_man_shgi = FUNC_14(VAR_21->coeff_man_shgi);
 VAR_23.finiteLoopCount = FUNC_14(2000);
 VAR_27 = FUNC_2(VAR_18, VAR_14, sizeof(VAR_23), &VAR_23,
    sizeof(VAR_22), &VAR_22);
 if (VAR_27)
  return VAR_27;

 VAR_27 = FUNC_15(VAR_22.ret);
 if (VAR_27 != 0) {
  VAR_18->chan_fail++;
  VAR_18->total_chan_fail++;

  FUNC_18(VAR_18->hw->wiphy, "channel change: %d -> %d "
     "failed (%d).\n", VAR_29 ?
     VAR_29->center_freq : -1, VAR_19->center_freq,
     VAR_27);

  if (VAR_18->chan_fail > 3) {






   FUNC_7(VAR_18, VAR_15);
   return 0;
  }

  VAR_27 = FUNC_19(VAR_18, VAR_19, VAR_20);
  if (VAR_27)
   return VAR_27;
 } else {
  VAR_18->chan_fail = 0;
 }

 if (VAR_18->heavy_clip) {
  VAR_27 = FUNC_11(VAR_18, VAR_0,
      0x200 | VAR_18->heavy_clip);
  if (VAR_27) {
   if (FUNC_16()) {
    FUNC_18(VAR_18->hw->wiphy, "failed to set "
           "heavy clip\n");
   }

   return VAR_27;
  }
 }

 VAR_18->channel = VAR_19;
 VAR_18->ht_settings = VAR_26;
 return 0;
}
