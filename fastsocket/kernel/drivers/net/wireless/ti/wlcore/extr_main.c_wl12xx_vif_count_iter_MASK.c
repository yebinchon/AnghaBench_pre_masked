
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vif_counter_data {int cur_vif_running; struct ieee80211_vif* cur_vif; int counter; } ;
struct ieee80211_vif {int dummy; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, u8 *VAR_1,
      struct ieee80211_vif *VAR_2)
{
 struct vif_counter_data *VAR_3 = VAR_0;

 VAR_3->counter++;
 if (VAR_3->cur_vif == VAR_2)
  VAR_3->cur_vif_running = 1;
}
