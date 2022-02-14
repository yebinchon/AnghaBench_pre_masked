
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct p54_common {int privacy_caps; int conf_mutex; int used_rxkeys; int rx_keycache_size; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {scalar_t__* addr; } ;
struct ieee80211_key_conf {int flags; int cipher; int hw_key_idx; int key; int keylen; int keyidx; } ;
struct ieee80211_hw {struct p54_common* priv; } ;
typedef enum set_key_cmd { ____Placeholder_set_key_cmd } set_key_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;




 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int,int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct p54_common*,scalar_t__,int,int ,int ,scalar_t__*,int ) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_12, enum set_key_cmd VAR_13,
         struct ieee80211_vif *VAR_14, struct ieee80211_sta *VAR_15,
         struct ieee80211_key_conf *VAR_16)
{
 struct p54_common *VAR_17 = VAR_12->priv;
 int VAR_18, VAR_19 = 0;
 u8 VAR_20 = 0;
 u8 *VAR_21 = ((void*)0);

 if (VAR_11)
  return -VAR_4;

 if (VAR_16->flags & VAR_6) {







  return -VAR_4;
 }

 FUNC_2(&VAR_17->conf_mutex);
 if (VAR_13 == VAR_10) {
  switch (VAR_16->cipher) {
  case 130:
   if (!(VAR_17->privacy_caps & (VAR_1 |
         VAR_2))) {
    VAR_19 = -VAR_4;
    goto out_unlock;
   }
   VAR_16->flags |= VAR_5;
   VAR_20 = VAR_8;
   break;
  case 128:
  case 129:
   if (!(VAR_17->privacy_caps & VAR_3)) {
    VAR_19 = -VAR_4;
    goto out_unlock;
   }
   VAR_16->flags |= VAR_5;
   VAR_20 = VAR_9;
   break;
  case 131:
   if (!(VAR_17->privacy_caps & VAR_0)) {
    VAR_19 = -VAR_4;
    goto out_unlock;
   }
   VAR_16->flags |= VAR_5;
   VAR_20 = VAR_7;
   break;
  default:
   VAR_19 = -VAR_4;
   goto out_unlock;
  }
  VAR_18 = FUNC_0(VAR_17->used_rxkeys,
            VAR_17->rx_keycache_size, 0);

  if (VAR_18 < 0) {
   VAR_16->hw_key_idx = 0xff;
   goto out_unlock;
  }
 } else {
  VAR_18 = VAR_16->hw_key_idx;

  if (VAR_18 == 0xff) {


   goto out_unlock;
  }

  FUNC_1(VAR_17->used_rxkeys, VAR_18, 0);
  VAR_20 = 0;
 }

 if (VAR_15)
  VAR_21 = VAR_15->addr;

 VAR_19 = FUNC_4(VAR_17, VAR_20, VAR_18, VAR_16->keyidx,
        VAR_16->keylen, VAR_21, VAR_16->key);
 if (VAR_19) {
  FUNC_1(VAR_17->used_rxkeys, VAR_18, 0);
  VAR_19 = -VAR_4;
  goto out_unlock;
 }

 VAR_16->hw_key_idx = VAR_18;

out_unlock:
 FUNC_3(&VAR_17->conf_mutex);
 return VAR_19;
}
