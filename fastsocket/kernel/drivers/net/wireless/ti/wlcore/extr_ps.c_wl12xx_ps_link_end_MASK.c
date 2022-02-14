
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct wl12xx_vif {int dummy; } ;
struct wl1271 {TYPE_1__* links; int ap_ps_map; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_2__ {int addr; } ;


 int VAR_0 ;
 int FUNC_0 (size_t,int *) ;
 struct ieee80211_sta* FUNC_1 (struct ieee80211_vif*,int ) ;
 int FUNC_2 (struct ieee80211_sta*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (size_t,int *) ;
 int FUNC_6 (int ,char*,size_t) ;
 int FUNC_7 (char*,int ) ;
 struct ieee80211_vif* FUNC_8 (struct wl12xx_vif*) ;

void FUNC_9(struct wl1271 *VAR_1, struct wl12xx_vif *VAR_2, u8 VAR_3)
{
 struct ieee80211_sta *VAR_4;
 struct ieee80211_vif *VAR_5 = FUNC_8(VAR_2);

 if (!FUNC_5(VAR_3, &VAR_1->ap_ps_map))
  return;

 FUNC_6(VAR_0, "end mac80211 PSM on hlid %d", VAR_3);

 FUNC_0(VAR_3, &VAR_1->ap_ps_map);

 FUNC_3();
 VAR_4 = FUNC_1(VAR_5, VAR_1->links[VAR_3].addr);
 if (!VAR_4) {
  FUNC_7("could not find sta %pM for ending ps",
        VAR_1->links[VAR_3].addr);
  goto end;
 }

 FUNC_2(VAR_4, 0);
end:
 FUNC_4();
}
