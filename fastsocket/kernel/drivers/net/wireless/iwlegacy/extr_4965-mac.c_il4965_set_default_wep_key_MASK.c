
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* wep_keys; } ;
struct il_priv {TYPE_4__ _4965; TYPE_2__* stations; int mutex; } ;
struct ieee80211_key_conf {int keylen; int keyidx; int key; int cipher; int hw_key_idx; int flags; } ;
struct TYPE_7__ {int key_size; int key; } ;
struct TYPE_5__ {int cipher; } ;
struct TYPE_6__ {TYPE_1__ keyinfo; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct il_priv*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;

int
FUNC_4(struct il_priv *VAR_6,
      struct ieee80211_key_conf *VAR_7)
{
 int VAR_8;
 int VAR_9 = VAR_7->keylen;
 int VAR_10 = VAR_7->keyidx;

 FUNC_2(&VAR_6->mutex);

 if (VAR_9 != VAR_4 && VAR_9 != VAR_5) {
  FUNC_0("Bad WEP key length %d\n", VAR_7->keylen);
  return -VAR_0;
 }

 VAR_7->flags &= ~VAR_2;
 VAR_7->hw_key_idx = VAR_1;
 VAR_6->stations[VAR_3].keyinfo.cipher = VAR_7->cipher;

 VAR_6->_4965.wep_keys[VAR_10].key_size = VAR_9;
 FUNC_3(&VAR_6->_4965.wep_keys[VAR_10].key, &VAR_7->key, VAR_9);

 VAR_8 = FUNC_1(VAR_6, 0);

 FUNC_0("Set default WEP key: len=%d idx=%d ret=%d\n", VAR_9, VAR_10, VAR_8);
 return VAR_8;
}
