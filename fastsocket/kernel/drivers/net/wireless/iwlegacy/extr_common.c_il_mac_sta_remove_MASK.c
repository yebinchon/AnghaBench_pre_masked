
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_station_priv_common {int sta_id; } ;
struct il_priv {int mutex; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct il_priv* priv; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct il_priv*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct ieee80211_hw *VAR_0, struct ieee80211_vif *VAR_1,
    struct ieee80211_sta *VAR_2)
{
 struct il_priv *VAR_3 = VAR_0->priv;
 struct il_station_priv_common *VAR_4 = (void *)VAR_2->drv_priv;
 int VAR_5;

 FUNC_3(&VAR_3->mutex);
 FUNC_0("enter station %pM\n", VAR_2->addr);

 VAR_5 = FUNC_2(VAR_3, VAR_4->sta_id, VAR_2->addr);
 if (VAR_5)
  FUNC_1("Error removing station %pM\n", VAR_2->addr);

 FUNC_0("leave ret %d\n", VAR_5);
 FUNC_4(&VAR_3->mutex);

 return VAR_5;
}
