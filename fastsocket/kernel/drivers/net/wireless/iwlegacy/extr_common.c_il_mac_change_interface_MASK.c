
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int iw_mode; int mutex; int vif; } ;
struct ieee80211_vif {int type; int p2p; int addr; } ;
struct ieee80211_hw {struct il_priv* priv; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct il_priv*) ;
 int FUNC_2 (struct il_priv*,struct ieee80211_vif*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct ieee80211_hw *VAR_2, struct ieee80211_vif *VAR_3,
   enum nl80211_iftype VAR_4, bool VAR_5)
{
 struct il_priv *VAR_6 = VAR_2->priv;
 int VAR_7;

 FUNC_3(&VAR_6->mutex);
 FUNC_0("enter: type %d, addr %pM newtype %d newp2p %d\n",
      VAR_3->type, VAR_3->addr, VAR_4, VAR_5);

 if (VAR_5) {
  VAR_7 = -VAR_1;
  goto out;
 }

 if (!VAR_6->vif || !FUNC_1(VAR_6)) {




  VAR_7 = -VAR_0;
  goto out;
 }


 VAR_3->type = VAR_4;
 VAR_3->p2p = 0;
 VAR_6->iw_mode = VAR_4;
 FUNC_2(VAR_6, VAR_3);
 VAR_7 = 0;

out:
 FUNC_0("leave err %d\n", VAR_7);
 FUNC_4(&VAR_6->mutex);

 return VAR_7;
}
