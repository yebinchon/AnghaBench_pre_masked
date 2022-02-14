
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct survey_info {scalar_t__ channel_time_tx; scalar_t__ channel_time_busy; scalar_t__ channel_time; } ;
struct TYPE_2__ {scalar_t__ tx; scalar_t__ cca; scalar_t__ active; } ;
struct p54_common {int update_stats; TYPE_1__ survey_raw; struct survey_info* survey; struct ieee80211_channel* curchan; } ;
struct ieee80211_channel {size_t hw_value; } ;



__attribute__((used)) static void FUNC_0(struct p54_common *VAR_0)
{
 struct ieee80211_channel *VAR_1 = VAR_0->curchan;

 if (VAR_1) {
  struct survey_info *VAR_2 = &VAR_0->survey[VAR_1->hw_value];


  VAR_2->channel_time = 0;
  VAR_2->channel_time_busy = 0;
  VAR_2->channel_time_tx = 0;
 }

 VAR_0->update_stats = 1;
 VAR_0->survey_raw.active = 0;
 VAR_0->survey_raw.cca = 0;
 VAR_0->survey_raw.tx = 0;
}
