
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct mwl8k_vif {TYPE_1__* wep_key_conf; } ;
struct mwl8k_cmd_set_key {int header; int action; int key_material; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_key_conf {size_t keyidx; int flags; int cipher; int keylen; struct ieee80211_key_conf* key; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int enabled; int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct mwl8k_vif* FUNC_0 (struct ieee80211_vif*) ;




 int FUNC_1 (int ) ;
 int FUNC_2 (struct mwl8k_cmd_set_key*) ;
 struct mwl8k_cmd_set_key* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,struct ieee80211_key_conf*,int) ;
 int FUNC_5 (struct mwl8k_cmd_set_key*,size_t*,struct ieee80211_key_conf*) ;
 int FUNC_6 (struct ieee80211_hw*,struct ieee80211_vif*,int *) ;

__attribute__((used)) static int FUNC_7(struct ieee80211_hw *VAR_8,
      struct ieee80211_vif *VAR_9,
      u8 *VAR_10,
      struct ieee80211_key_conf *VAR_11)
{
 struct mwl8k_cmd_set_key *VAR_12;
 int VAR_13;
 int VAR_14;
 u32 VAR_15;
 u8 VAR_16;
 struct mwl8k_vif *VAR_17 = FUNC_0(VAR_9);

 VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_2);
 if (VAR_12 == ((void*)0))
  return -VAR_0;

 VAR_13 = FUNC_5(VAR_12, VAR_10, VAR_11);
 if (VAR_13 < 0)
  goto done;

 VAR_16 = VAR_11->keyidx;

 if (VAR_11->flags & VAR_3)
  VAR_15 = VAR_7;
 else
  VAR_15 = VAR_6;

 switch (VAR_11->cipher) {
 case 128:
 case 129:
  if (!VAR_17->wep_key_conf[VAR_16].enabled) {
   FUNC_4(VAR_17->wep_key_conf[VAR_16].key, VAR_11,
      sizeof(*VAR_11) + VAR_11->keylen);
   VAR_17->wep_key_conf[VAR_16].enabled = 1;
  }

  VAR_14 = VAR_11->keylen;
  VAR_15 = VAR_7;
  break;
 case 130:
  VAR_14 = VAR_4 + 2 * VAR_5;
  break;
 case 131:
  VAR_14 = VAR_11->keylen;
  break;
 default:
  VAR_13 = -VAR_1;
  goto done;
 }

 FUNC_4(VAR_12->key_material, VAR_11->key, VAR_14);
 VAR_12->action = FUNC_1(VAR_15);

 VAR_13 = FUNC_6(VAR_8, VAR_9, &VAR_12->header);
done:
 FUNC_2(VAR_12);

 return VAR_13;
}
