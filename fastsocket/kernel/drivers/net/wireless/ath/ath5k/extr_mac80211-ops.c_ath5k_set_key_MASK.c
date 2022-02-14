
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_key_conf {int flags; int cipher; int hw_key_idx; } ;
struct ieee80211_hw {struct ath5k_hw* priv; } ;
struct ath_common {int crypt_caps; } ;
struct ath5k_hw {int lock; } ;
typedef enum set_key_cmd { ____Placeholder_set_key_cmd } set_key_cmd ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

 int FUNC_0 (int) ;




 struct ath_common* FUNC_1 (struct ath5k_hw*) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (struct ath_common*,struct ieee80211_vif*,struct ieee80211_sta*,struct ieee80211_key_conf*) ;
 int FUNC_3 (struct ath_common*,struct ieee80211_key_conf*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct ieee80211_hw *VAR_10, enum set_key_cmd VAR_11,
       struct ieee80211_vif *VAR_12, struct ieee80211_sta *VAR_13,
       struct ieee80211_key_conf *VAR_14)
{
 struct ath5k_hw *VAR_15 = VAR_10->priv;
 struct ath_common *VAR_16 = FUNC_1(VAR_15);
 int VAR_17 = 0;

 if (VAR_9)
  return -VAR_2;

 if (VAR_14->flags & VAR_6)
  return -VAR_2;

 if (VAR_12->type == VAR_8 &&
     (VAR_14->cipher == 130 ||
      VAR_14->cipher == 131) &&
     !(VAR_14->flags & VAR_5)) {

  return -VAR_2;
 }

 switch (VAR_14->cipher) {
 case 128:
 case 129:
 case 130:
  break;
 case 131:
  if (VAR_16->crypt_caps & VAR_0)
   break;
  return -VAR_2;
 default:
  FUNC_0(1);
  return -VAR_1;
 }

 FUNC_5(&VAR_15->lock);

 switch (VAR_11) {
 case 132:
  VAR_17 = FUNC_2(VAR_16, VAR_12, VAR_13, VAR_14);
  if (VAR_17 >= 0) {
   VAR_14->hw_key_idx = VAR_17;

   VAR_14->flags |= VAR_3;
   if (VAR_14->cipher == 130)
    VAR_14->flags |= VAR_4;
   if (VAR_14->cipher == 131)
    VAR_14->flags |= VAR_7;
   VAR_17 = 0;
  }
  break;
 case 133:
  FUNC_3(VAR_16, VAR_14);
  break;
 default:
  VAR_17 = -VAR_1;
 }

 FUNC_4();
 FUNC_6(&VAR_15->lock);
 return VAR_17;
}
