
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_rate {int dummy; } ;
struct ieee80211_channel {scalar_t__ band; } ;
struct ath5k_hw {scalar_t__ ah_version; TYPE_1__* sbands; struct ieee80211_channel* ah_current_channel; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_2__ {struct ieee80211_rate* bitrates; } ;


 scalar_t__ VAR_0 ;
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
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct ath5k_hw*,int ,int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_2 (struct ath5k_hw*) ;
 int FUNC_3 (struct ath5k_hw*,int,int,struct ieee80211_rate*,int) ;
 int FUNC_4 (struct ath5k_hw*,int) ;
 int FUNC_5 (struct ath5k_hw*,int,int ) ;

int FUNC_6(struct ath5k_hw *VAR_18, unsigned int VAR_19)
{
 struct ieee80211_channel *VAR_20 = VAR_18->ah_current_channel;
 enum ieee80211_band VAR_21;
 struct ieee80211_rate *VAR_22;
 u32 VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
 u32 VAR_28 = FUNC_4(VAR_18, VAR_19);

 if (VAR_19 < 6 || VAR_28 > VAR_14)
  return -VAR_15;

 VAR_26 = FUNC_2(VAR_18);
 VAR_27 = FUNC_4(VAR_18, VAR_26 - 2);
 if (VAR_20->band == VAR_17)
  VAR_21 = VAR_17;
 else
  VAR_21 = VAR_16;

 VAR_22 = &VAR_18->sbands[VAR_21].bitrates[0];
 VAR_23 = FUNC_3(VAR_18, VAR_21, 10, VAR_22, 0);


 VAR_24 = VAR_23 + VAR_26 + 2 * VAR_19;
 VAR_25 = FUNC_4(VAR_18, VAR_24);


 if (VAR_18->ah_version == VAR_0) {
  u32 VAR_29, VAR_30, VAR_31, VAR_32;


  FUNC_5(VAR_18, VAR_28, VAR_13);


  VAR_25 = FUNC_0(VAR_25, VAR_10);


  VAR_29 = VAR_19 + VAR_26;
  VAR_30 = FUNC_4(VAR_18, VAR_29);
  VAR_30 = FUNC_0(VAR_30, VAR_11);


  VAR_31 = VAR_26 + 2 * VAR_19;
  VAR_32 = FUNC_4(VAR_18, VAR_31);


  FUNC_5(VAR_18, (VAR_32 <<
    VAR_7) | VAR_27,
    VAR_6);


  FUNC_5(VAR_18, VAR_30 | VAR_25 |
    (VAR_12 << VAR_9),
    VAR_8);

  return 0;
 }


 FUNC_5(VAR_18, VAR_28, VAR_5);


 FUNC_5(VAR_18, VAR_25, VAR_1);


 FUNC_1(VAR_18, VAR_2,
    VAR_3,
    VAR_26);


 FUNC_5(VAR_18, VAR_27, VAR_4);

 return 0;
}
