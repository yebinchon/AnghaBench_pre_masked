
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct wl12xx_vif {int dummy; } ;
struct wl1271 {int ap_ps_map; TYPE_1__* links; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_2__ {int addr; int allocated_pkts; } ;


 int VAR_0 ;
 int FUNC_0 (size_t,int *) ;
 struct ieee80211_sta* FUNC_1 (struct ieee80211_vif*,int ) ;
 int FUNC_2 (struct ieee80211_sta*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (size_t,int *) ;
 int FUNC_6 (int ,char*,size_t,int ,int) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (struct wl1271*,size_t) ;
 struct ieee80211_vif* FUNC_9 (struct wl12xx_vif*) ;

void FUNC_10(struct wl1271 *VAR_1, struct wl12xx_vif *VAR_2,
     u8 VAR_3, bool VAR_4)
{
 struct ieee80211_sta *VAR_5;
 struct ieee80211_vif *VAR_6 = FUNC_9(VAR_2);

 if (FUNC_5(VAR_3, &VAR_1->ap_ps_map))
  return;

 FUNC_6(VAR_0, "start mac80211 PSM on hlid %d pkts %d "
       "clean_queues %d", VAR_3, VAR_1->links[VAR_3].allocated_pkts,
       VAR_4);

 FUNC_3();
 VAR_5 = FUNC_1(VAR_6, VAR_1->links[VAR_3].addr);
 if (!VAR_5) {
  FUNC_7("could not find sta %pM for starting ps",
        VAR_1->links[VAR_3].addr);
  FUNC_4();
  return;
 }

 FUNC_2(VAR_5, 1);
 FUNC_4();


 if (VAR_4)
  FUNC_8(VAR_1, VAR_3);

 FUNC_0(VAR_3, &VAR_1->ap_ps_map);
}
