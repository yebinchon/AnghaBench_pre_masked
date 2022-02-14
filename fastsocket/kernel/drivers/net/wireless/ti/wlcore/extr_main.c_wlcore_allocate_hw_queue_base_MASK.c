
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlcore_hw_queue_iter_data {int hw_queue_map; scalar_t__ cur_running; struct ieee80211_vif* vif; } ;
struct wl12xx_vif {int hw_queue_base; scalar_t__ bss_type; } ;
struct wl1271 {scalar_t__* queue_stop_reasons; int hw; } ;
struct ieee80211_vif {int* hw_queue; int cab_queue; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int ,struct wlcore_hw_queue_iter_data*) ;
 int FUNC_2 (int ,char*,int) ;
 struct ieee80211_vif* FUNC_3 (struct wl12xx_vif*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_4(struct wl1271 *VAR_8,
      struct wl12xx_vif *VAR_9)
{
 struct ieee80211_vif *VAR_10 = FUNC_3(VAR_9);
 struct wlcore_hw_queue_iter_data VAR_11 = {};
 int VAR_12, VAR_13;

 VAR_11.vif = VAR_10;


 FUNC_1(VAR_8->hw,
     VAR_3,
     VAR_7, &VAR_11);


 if (VAR_11.cur_running) {
  VAR_9->hw_queue_base = VAR_10->hw_queue[0];
  FUNC_2(VAR_1,
        "using pre-allocated hw queue base %d",
        VAR_9->hw_queue_base);


  goto adjust_cab_queue;
 }

 VAR_13 = FUNC_0(VAR_11.hw_queue_map,
         VAR_6);
 if (VAR_13 >= VAR_6)
  return -VAR_2;

 VAR_9->hw_queue_base = VAR_13 * VAR_5;
 FUNC_2(VAR_1, "allocating hw queue base: %d",
       VAR_9->hw_queue_base);

 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  VAR_8->queue_stop_reasons[VAR_9->hw_queue_base + VAR_12] = 0;

  VAR_10->hw_queue[VAR_12] = VAR_9->hw_queue_base + VAR_12;
 }

adjust_cab_queue:

 if (VAR_9->bss_type == VAR_0)
  VAR_10->cab_queue = VAR_5 * VAR_6 +
     VAR_9->hw_queue_base / VAR_5;
 else
  VAR_10->cab_queue = VAR_4;

 return 0;
}
