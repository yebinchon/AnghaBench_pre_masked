
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ath_common {int dummy; } ;
struct ath9k_htc_vif {size_t bslot; } ;
struct TYPE_2__ {int ** bslot; } ;
struct ath9k_htc_priv {int beacon_lock; TYPE_1__ cur_beacon_conf; int ah; } ;


 int VAR_0 ;
 struct ath_common* FUNC_0 (int ) ;
 int FUNC_1 (struct ath_common*,int ,char*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ath9k_htc_priv *VAR_1,
       struct ieee80211_vif *VAR_2)
{
 struct ath_common *VAR_3 = FUNC_0(VAR_1->ah);
 struct ath9k_htc_vif *VAR_4 = (struct ath9k_htc_vif *)VAR_2->drv_priv;

 FUNC_2(&VAR_1->beacon_lock);
 VAR_1->cur_beacon_conf.bslot[VAR_4->bslot] = ((void*)0);
 FUNC_3(&VAR_1->beacon_lock);

 FUNC_1(VAR_3, VAR_0, "Removed interface at beacon slot: %d\n",
  VAR_4->bslot);
}
