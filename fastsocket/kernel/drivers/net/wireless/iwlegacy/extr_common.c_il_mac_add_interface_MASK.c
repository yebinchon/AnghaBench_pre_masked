
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int mutex; int iw_mode; struct ieee80211_vif* vif; } ;
struct ieee80211_vif {int type; int addr; } ;
struct ieee80211_hw {struct il_priv* priv; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 int VAR_2 ;
 int FUNC_2 (struct il_priv*) ;
 int FUNC_3 (struct il_priv*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct ieee80211_hw *VAR_3, struct ieee80211_vif *VAR_4)
{
 struct il_priv *VAR_5 = VAR_3->priv;
 int VAR_6;
 bool VAR_7;

 FUNC_4(&VAR_5->mutex);
 FUNC_0("enter: type %d, addr %pM\n", VAR_4->type, VAR_4->addr);

 if (!FUNC_2(VAR_5)) {
  FUNC_1("Try to add interface when device not ready\n");
  VAR_6 = -VAR_0;
  goto out;
 }





 VAR_7 = (VAR_5->vif == VAR_4);
 if (VAR_5->vif && !VAR_7) {
  VAR_6 = -VAR_1;
  goto out;
 }

 VAR_5->vif = VAR_4;
 VAR_5->iw_mode = VAR_4->type;

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6) {
  FUNC_1("Fail to set mode %d\n", VAR_4->type);
  if (!VAR_7) {
   VAR_5->vif = ((void*)0);
   VAR_5->iw_mode = VAR_2;
  }
 }

out:
 FUNC_0("leave err %d\n", VAR_6);
 FUNC_5(&VAR_5->mutex);

 return VAR_6;
}
