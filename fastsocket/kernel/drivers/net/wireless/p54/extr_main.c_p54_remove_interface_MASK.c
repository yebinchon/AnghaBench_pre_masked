
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p54_common {int conf_mutex; int bssid; int mac_addr; int mode; int beacon_comp; int beacon_req_id; int * vif; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct p54_common* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct p54_common*) ;
 int FUNC_5 (struct p54_common*,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_3,
     struct ieee80211_vif *VAR_4)
{
 struct p54_common *VAR_5 = VAR_3->priv;

 FUNC_2(&VAR_5->conf_mutex);
 VAR_5->vif = ((void*)0);





 if (FUNC_0(VAR_5->beacon_req_id) != 0) {
  FUNC_5(VAR_5, VAR_5->beacon_req_id);
  FUNC_6(&VAR_5->beacon_comp, VAR_1);
 }
 VAR_5->mode = VAR_2;
 FUNC_1(VAR_5->mac_addr, 0, VAR_0);
 FUNC_1(VAR_5->bssid, 0, VAR_0);
 FUNC_4(VAR_5);
 FUNC_3(&VAR_5->conf_mutex);
}
