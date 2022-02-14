
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_3__ {int * sta_hlid_map; } ;
struct wl12xx_vif {TYPE_1__ ap; } ;
struct wl1271_station {int total_freed_pkts; } ;
struct wl1271 {unsigned long ap_ps_map; scalar_t__ active_sta_count; int flags; TYPE_2__* links; int ap_fw_ps_map; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct TYPE_4__ {int total_freed_pkts; int addr; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (size_t,unsigned long*) ;
 int FUNC_1 (size_t,int *) ;
 struct ieee80211_sta* FUNC_2 (struct ieee80211_vif*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (size_t,int *) ;
 int FUNC_6 (struct wl1271*,struct wl12xx_vif*,size_t*) ;
 int FUNC_7 (struct wl1271*) ;
 struct ieee80211_vif* FUNC_8 (struct wl12xx_vif*) ;

void FUNC_9(struct wl1271 *VAR_2, struct wl12xx_vif *VAR_3, u8 VAR_4)
{
 struct wl1271_station *VAR_5;
 struct ieee80211_sta *VAR_6;
 struct ieee80211_vif *VAR_7 = FUNC_8(VAR_3);

 if (!FUNC_5(VAR_4, VAR_3->ap.sta_hlid_map))
  return;

 FUNC_1(VAR_4, VAR_3->ap.sta_hlid_map);
 FUNC_0(VAR_4, &VAR_2->ap_ps_map);
 FUNC_0(VAR_4, (unsigned long *)&VAR_2->ap_fw_ps_map);





 FUNC_3();
 VAR_6 = FUNC_2(VAR_7, VAR_2->links[VAR_4].addr);
 if (VAR_6) {
  VAR_5 = (void *)VAR_6->drv_priv;
  VAR_5->total_freed_pkts = VAR_2->links[VAR_4].total_freed_pkts;





  if (FUNC_5(VAR_0, &VAR_2->flags))
   VAR_5->total_freed_pkts +=
     VAR_1;
 }
 FUNC_4();

 FUNC_6(VAR_2, VAR_3, &VAR_4);
 VAR_2->active_sta_count--;





 if (VAR_2->active_sta_count == 0)
  FUNC_7(VAR_2);
}
