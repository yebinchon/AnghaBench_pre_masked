
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_rxon_context {TYPE_1__* wep_keys; } ;
struct iwl_priv {int mutex; } ;
struct ieee80211_key_conf {scalar_t__ keylen; size_t keyidx; int key; int hw_key_idx; } ;
struct TYPE_2__ {scalar_t__ key_size; int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_priv*,char*,scalar_t__,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct iwl_priv*,struct iwl_rxon_context*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,scalar_t__) ;

int FUNC_4(struct iwl_priv *VAR_4,
       struct iwl_rxon_context *VAR_5,
       struct ieee80211_key_conf *VAR_6)
{
 int VAR_7;

 FUNC_2(&VAR_4->mutex);

 if (VAR_6->keylen != VAR_2 &&
     VAR_6->keylen != VAR_3) {
  FUNC_0(VAR_4,
         "Bad WEP key length %d\n", VAR_6->keylen);
  return -VAR_0;
 }

 VAR_6->hw_key_idx = VAR_1;

 VAR_5->wep_keys[VAR_6->keyidx].key_size = VAR_6->keylen;
 FUNC_3(&VAR_5->wep_keys[VAR_6->keyidx].key, &VAR_6->key,
       VAR_6->keylen);

 VAR_7 = FUNC_1(VAR_4, VAR_5, 0);
 FUNC_0(VAR_4, "Set default WEP key: len=%d idx=%d ret=%d\n",
  VAR_6->keylen, VAR_6->keyidx, VAR_7);

 return VAR_7;
}
