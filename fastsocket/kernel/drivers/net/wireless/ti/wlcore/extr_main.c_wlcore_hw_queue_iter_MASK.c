
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wlcore_hw_queue_iter_data {int cur_running; int hw_queue_map; struct ieee80211_vif* vif; } ;
struct ieee80211_vif {int* hw_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, u8 *VAR_3,
     struct ieee80211_vif *VAR_4)
{
 struct wlcore_hw_queue_iter_data *VAR_5 = VAR_2;

 if (FUNC_0(VAR_4->hw_queue[0] == VAR_0))
  return;

 if (VAR_5->cur_running || VAR_4 == VAR_5->vif) {
  VAR_5->cur_running = 1;
  return;
 }

 FUNC_1(VAR_4->hw_queue[0] / VAR_1, VAR_5->hw_queue_map);
}
