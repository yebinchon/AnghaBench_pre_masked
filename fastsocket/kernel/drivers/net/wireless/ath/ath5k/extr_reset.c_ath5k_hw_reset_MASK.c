
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ieee80211_channel {int hw_value; int center_freq; } ;
struct ath5k_hw {scalar_t__ ah_radio; scalar_t__ ah_version; scalar_t__ ah_mac_srev; scalar_t__ ah_use_32khz_clock; int * ah_rf_banks; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ath5k_hw*,int ,int ) ;
 int FUNC_3 (struct ath5k_hw*,int ,int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (struct ath5k_hw*,int ,char*) ;
 int VAR_16 ;
 int FUNC_5 (struct ath5k_hw*,char*,...) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_6 (struct ath5k_hw*,struct ieee80211_channel*) ;
 int FUNC_7 (struct ath5k_hw*) ;
 int FUNC_8 (struct ath5k_hw*) ;
 int FUNC_9 (struct ath5k_hw*) ;
 int FUNC_10 (struct ath5k_hw*) ;
 int FUNC_11 (struct ath5k_hw*) ;
 int FUNC_12 (struct ath5k_hw*,struct ieee80211_channel*) ;
 int FUNC_13 (struct ath5k_hw*,int) ;
 int FUNC_14 (struct ath5k_hw*,struct ieee80211_channel*,int,int) ;
 int FUNC_15 (struct ath5k_hw*,int ) ;
 int FUNC_16 (struct ath5k_hw*,int,int ) ;
 int FUNC_17 (struct ath5k_hw*) ;
 int FUNC_18 (struct ath5k_hw*,int) ;
 int FUNC_19 (struct ath5k_hw*) ;
 int FUNC_20 (struct ath5k_hw*,struct ieee80211_channel*) ;
 int FUNC_21 (struct ath5k_hw*,int,int) ;

int
FUNC_22(struct ath5k_hw *VAR_19, enum nl80211_iftype VAR_20,
  struct ieee80211_channel *VAR_21, bool VAR_22, bool VAR_23)
{
 u32 VAR_24[10], VAR_25[3], VAR_26, VAR_27;
 u8 VAR_28;
 int VAR_29, VAR_30;

 VAR_26 = 0;
 VAR_27 = 0;
 VAR_28 = 0;






 if (VAR_22 && (VAR_19->ah_radio != VAR_10) &&
 (VAR_19->ah_radio != VAR_12))
  VAR_22 = 0;




 if (VAR_19->ah_version == VAR_2)
  FUNC_18(VAR_19, 0);




 FUNC_19(VAR_19);







 VAR_30 = FUNC_8(VAR_19);



 if (VAR_30 && VAR_22) {
  FUNC_4(VAR_19, VAR_16,
   "DMA didn't stop, falling back to normal reset\n");
  VAR_22 = 0;


  VAR_30 = 0;
 }

 VAR_28 = VAR_21->hw_value;
 switch (VAR_28) {
 case 130:
  break;
 case 128:
  if (VAR_19->ah_version <= VAR_1) {
   FUNC_5(VAR_19,
    "G mode not available on 5210/5211");
   return -VAR_17;
  }
  break;
 case 129:
  if (VAR_19->ah_version < VAR_1) {
   FUNC_5(VAR_19,
    "B mode not available on 5210");
   return -VAR_17;
  }
  break;
 default:
  FUNC_5(VAR_19,
   "invalid channel: %d\n", VAR_21->center_freq);
  return -VAR_17;
 }





 if (VAR_22) {
  VAR_30 = FUNC_14(VAR_19, VAR_21, VAR_28, 1);
  if (VAR_30) {
   FUNC_4(VAR_19, VAR_16,
    "fast chan change failed, falling back to normal reset\n");


   VAR_30 = 0;
  } else {
   FUNC_4(VAR_19, VAR_16,
    "fast chan change successful\n");
   return 0;
  }
 }




 if (VAR_19->ah_version != VAR_0) {





  if (VAR_19->ah_mac_srev < VAR_13) {

   for (VAR_29 = 0; VAR_29 < 10; VAR_29++)
    VAR_24[VAR_29] = FUNC_15(VAR_19,
     FUNC_1(VAR_29));

  } else {
   VAR_24[0] = FUNC_15(VAR_19,
     FUNC_1(0));
  }
  if (VAR_19->ah_version == VAR_1) {
   VAR_26 = FUNC_15(VAR_19, VAR_15);
   VAR_27 = FUNC_15(VAR_19, VAR_14);
  }
 }



 VAR_25[0] = FUNC_15(VAR_19, VAR_7) &
     VAR_8;
 VAR_25[1] = FUNC_15(VAR_19, VAR_5);
 VAR_25[2] = FUNC_15(VAR_19, VAR_6);







 if (VAR_19->ah_version == VAR_2 &&
 (VAR_19->ah_radio <= VAR_11)) {
  if (!VAR_22 && VAR_19->ah_rf_banks != ((void*)0))
    FUNC_9(VAR_19);
 }


 VAR_30 = FUNC_12(VAR_19, VAR_21);
 if (VAR_30)
  return VAR_30;


 if (VAR_19->ah_mac_srev >= VAR_13)
  FUNC_16(VAR_19, VAR_9, FUNC_0(0));
 else
  FUNC_16(VAR_19, VAR_9 | 0x40,
       FUNC_0(0));


 VAR_30 = FUNC_21(VAR_19, VAR_28, VAR_23);
 if (VAR_30)
  return VAR_30;


 FUNC_10(VAR_19);






 FUNC_20(VAR_19, VAR_21);


 FUNC_6(VAR_19, VAR_21);







 if (VAR_19->ah_version != VAR_0) {
  if (VAR_19->ah_mac_srev < VAR_13) {
   for (VAR_29 = 0; VAR_29 < 10; VAR_29++)
    FUNC_16(VAR_19, VAR_24[VAR_29],
     FUNC_1(VAR_29));
  } else {
   FUNC_16(VAR_19, VAR_24[0],
    FUNC_1(0));
  }

  if (VAR_19->ah_version == VAR_1) {
   FUNC_16(VAR_19, VAR_26, VAR_15);
   FUNC_16(VAR_19, VAR_27, VAR_14);
  }
 }


 FUNC_3(VAR_19, VAR_7, VAR_25[0]);


 FUNC_16(VAR_19, VAR_25[1], VAR_5);
 FUNC_16(VAR_19, VAR_25[2], VAR_6);




 FUNC_13(VAR_19, VAR_20);




 VAR_30 = FUNC_14(VAR_19, VAR_21, VAR_28, 0);
 if (VAR_30) {
  FUNC_5(VAR_19,
   "failed to initialize PHY (%i) !\n", VAR_30);
  return VAR_30;
 }




 VAR_30 = FUNC_11(VAR_19);
 if (VAR_30)
  return VAR_30;





 FUNC_7(VAR_19);
 if (VAR_19->ah_use_32khz_clock && VAR_19->ah_version == VAR_2 &&
     VAR_20 != VAR_18)
  FUNC_18(VAR_19, 1);




 FUNC_2(VAR_19, VAR_3, VAR_4);
 FUNC_17(VAR_19);
 return 0;
}
