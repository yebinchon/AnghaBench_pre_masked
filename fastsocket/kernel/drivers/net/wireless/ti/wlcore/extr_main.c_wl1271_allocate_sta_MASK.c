
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sta_hlid_map; } ;
struct wl12xx_vif {TYPE_1__ ap; } ;
struct wl1271_station {size_t hlid; int total_freed_pkts; } ;
struct wl1271 {scalar_t__ active_sta_count; TYPE_2__* links; } ;
struct ieee80211_sta {int addr; scalar_t__ drv_priv; } ;
struct TYPE_4__ {int addr; int total_freed_pkts; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (size_t,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct wl1271*,struct wl12xx_vif*,size_t*) ;

__attribute__((used)) static int FUNC_4(struct wl1271 *VAR_3,
        struct wl12xx_vif *VAR_4,
        struct ieee80211_sta *VAR_5)
{
 struct wl1271_station *VAR_6;
 int VAR_7;


 if (VAR_3->active_sta_count >= VAR_0) {
  FUNC_2("could not allocate HLID - too much stations");
  return -VAR_1;
 }

 VAR_6 = (struct wl1271_station *)VAR_5->drv_priv;
 VAR_7 = FUNC_3(VAR_3, VAR_4, &VAR_6->hlid);
 if (VAR_7 < 0) {
  FUNC_2("could not allocate HLID - too many links");
  return -VAR_1;
 }


 VAR_3->links[VAR_6->hlid].total_freed_pkts = VAR_6->total_freed_pkts;

 FUNC_1(VAR_6->hlid, VAR_4->ap.sta_hlid_map);
 FUNC_0(VAR_3->links[VAR_6->hlid].addr, VAR_5->addr, VAR_2);
 VAR_3->active_sta_count++;
 return 0;
}
