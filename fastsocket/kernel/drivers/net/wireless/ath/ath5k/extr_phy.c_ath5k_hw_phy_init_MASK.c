
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct ieee80211_channel {scalar_t__ hw_value; int center_freq; int band; } ;
struct TYPE_2__ {int txp_requested; } ;
struct ath5k_hw {scalar_t__ ah_version; scalar_t__ ah_mac_srev; scalar_t__ ah_radio; int ah_iq_cal_needed; int ah_ant_mode; TYPE_1__ ah_txpower; struct ieee80211_channel* ah_current_channel; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int FUNC_0 (struct ath5k_hw*,int ,int) ;
 int FUNC_1 (struct ath5k_hw*,int ,int) ;
 int FUNC_2 (struct ath5k_hw*,int ,int ,int) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_3 (struct ath5k_hw*,char*,int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_4 (struct ath5k_hw*,struct ieee80211_channel*) ;
 int FUNC_5 (struct ath5k_hw*,int ) ;
 int FUNC_6 (struct ath5k_hw*,int,int ) ;
 scalar_t__ FUNC_7 (struct ath5k_hw*,int ,int,int ,int) ;
 int FUNC_8 (struct ath5k_hw*,int ) ;
 int FUNC_9 (struct ath5k_hw*,struct ieee80211_channel*,scalar_t__) ;
 int FUNC_10 (struct ath5k_hw*,int ) ;
 int FUNC_11 (struct ath5k_hw*,struct ieee80211_channel*) ;
 int FUNC_12 (struct ath5k_hw*,struct ieee80211_channel*,int) ;
 int FUNC_13 (struct ath5k_hw*,struct ieee80211_channel*) ;
 int FUNC_14 (struct ath5k_hw*,struct ieee80211_channel*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int,int) ;

int
FUNC_17(struct ath5k_hw *VAR_25, struct ieee80211_channel *VAR_26,
        u8 VAR_27, bool VAR_28)
{
 struct ieee80211_channel *VAR_29;
 int VAR_30, VAR_31;
 u32 VAR_32;
 VAR_30 = 0;







 VAR_29 = VAR_25->ah_current_channel;
 if (VAR_28 && (VAR_26->hw_value != VAR_29->hw_value))
  return -VAR_23;





 if (VAR_28) {
  FUNC_1(VAR_25, VAR_14,
        VAR_15);
  for (VAR_31 = 0; VAR_31 < 100; VAR_31++) {
   if (FUNC_5(VAR_25, VAR_13))
    break;
   FUNC_15(5);
  }

  if (VAR_31 >= 100)
   return -VAR_24;


  VAR_30 = FUNC_4(VAR_25, VAR_26);
  if (VAR_30)
   return VAR_30;

  FUNC_13(VAR_25, VAR_26);
 }
 VAR_30 = FUNC_12(VAR_25, VAR_26, VAR_25->ah_txpower.txp_requested ?
     VAR_25->ah_txpower.txp_requested * 2 :
     VAR_20);
 if (VAR_30)
  return VAR_30;


 if (VAR_25->ah_version == VAR_1 &&
  VAR_26->hw_value != VAR_2) {

  VAR_30 = FUNC_14(VAR_25, VAR_26);
  if (VAR_30)
   return VAR_30;




  if (VAR_25->ah_mac_srev >= VAR_19)
   FUNC_11(VAR_25,
           VAR_26);
 }
 if (VAR_28) {



  FUNC_0(VAR_25, VAR_14,
        VAR_15);




  FUNC_1(VAR_25, VAR_7,
     VAR_9);

  return VAR_30;
 }







 if (VAR_25->ah_version != VAR_0) {





  VAR_30 = FUNC_8(VAR_25, VAR_26->band);
  if (VAR_30)
   return VAR_30;

  FUNC_16(1000, 1500);




  VAR_30 = FUNC_9(VAR_25, VAR_26, VAR_27);
  if (VAR_30)
   return VAR_30;



  if (VAR_25->ah_radio == VAR_18) {
   if (VAR_27 == VAR_2)
    FUNC_1(VAR_25, VAR_21,
        VAR_22);
   else
    FUNC_0(VAR_25, VAR_21,
        VAR_22);
  }

 } else if (VAR_25->ah_version == VAR_0) {
  FUNC_16(1000, 1500);

  FUNC_6(VAR_25, VAR_4, VAR_3);
  FUNC_16(1000, 1500);
 }


 VAR_30 = FUNC_4(VAR_25, VAR_26);
 if (VAR_30)
  return VAR_30;






 FUNC_6(VAR_25, VAR_5, VAR_3);

 FUNC_13(VAR_25, VAR_26);





 VAR_32 = FUNC_5(VAR_25, VAR_16);
 FUNC_6(VAR_25, VAR_17, VAR_16);
 for (VAR_31 = 0; VAR_31 <= 20; VAR_31++) {
  if (!(FUNC_5(VAR_25, VAR_6) & 0x10))
   break;
  FUNC_16(200, 250);
 }
 FUNC_6(VAR_25, VAR_32, VAR_16);
 FUNC_1(VAR_25, VAR_7,
    VAR_8 | VAR_9);



 VAR_25->ah_iq_cal_needed = 0;
 if (!(VAR_27 == VAR_2)) {
  VAR_25->ah_iq_cal_needed = 1;
  FUNC_2(VAR_25, VAR_10,
    VAR_11, 15);
  FUNC_1(VAR_25, VAR_10,
    VAR_12);
 }



 if (FUNC_7(VAR_25, VAR_7,
   VAR_8, 0, 0)) {
  FUNC_3(VAR_25, "gain calibration timeout (%uMHz)\n",
   VAR_26->center_freq);
 }


 FUNC_10(VAR_25, VAR_25->ah_ant_mode);

 return VAR_30;
}
