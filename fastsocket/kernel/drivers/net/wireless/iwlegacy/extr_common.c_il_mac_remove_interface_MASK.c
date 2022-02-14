
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int mutex; int bssid; int iw_mode; struct ieee80211_vif* vif; } ;
struct ieee80211_vif {int addr; int type; } ;
struct ieee80211_hw {struct il_priv* priv; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct il_priv*,struct ieee80211_vif*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(struct ieee80211_hw *VAR_2, struct ieee80211_vif *VAR_3)
{
 struct il_priv *VAR_4 = VAR_2->priv;

 FUNC_4(&VAR_4->mutex);
 FUNC_0("enter: type %d, addr %pM\n", VAR_3->type, VAR_3->addr);

 FUNC_1(VAR_4->vif != VAR_3);
 VAR_4->vif = ((void*)0);
 VAR_4->iw_mode = VAR_1;
 FUNC_2(VAR_4, VAR_3);
 FUNC_3(VAR_4->bssid, 0, VAR_0);

 FUNC_0("leave\n");
 FUNC_5(&VAR_4->mutex);
}
