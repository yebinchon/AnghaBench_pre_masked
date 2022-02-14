
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct il_wep_key {int dummy; } ;
struct TYPE_2__ {int * wep_keys; } ;
struct il_priv {TYPE_1__ _4965; int mutex; } ;
struct ieee80211_key_conf {int keyidx; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct il_priv*,int) ;
 scalar_t__ FUNC_2 (struct il_priv*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int) ;

int
FUNC_5(struct il_priv *VAR_0,
         struct ieee80211_key_conf *VAR_1)
{
 int VAR_2;
 int VAR_3 = VAR_1->keyidx;

 FUNC_3(&VAR_0->mutex);

 FUNC_0("Removing default WEP key: idx=%d\n", VAR_3);

 FUNC_4(&VAR_0->_4965.wep_keys[VAR_3], 0, sizeof(struct il_wep_key));
 if (FUNC_2(VAR_0)) {
  FUNC_0("Not sending C_WEPKEY command due to RFKILL.\n");

  return 0;
 }
 VAR_2 = FUNC_1(VAR_0, 1);
 FUNC_0("Remove default WEP key: idx=%d ret=%d\n", VAR_3, VAR_2);

 return VAR_2;
}
