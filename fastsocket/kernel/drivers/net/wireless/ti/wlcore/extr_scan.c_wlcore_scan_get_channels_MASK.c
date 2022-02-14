
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct conf_sched_scan_settings {scalar_t__ dwell_time_delta_per_probe_5; scalar_t__ dwell_time_delta_per_probe; scalar_t__ base_dwell_time; scalar_t__ num_probe_reqs; scalar_t__ max_dwell_time_delta; scalar_t__ dwell_time_passive; scalar_t__ dwell_time_dfs; } ;
struct conf_scan_settings {scalar_t__ min_dwell_time_active; scalar_t__ min_dwell_time_active_long; scalar_t__ max_dwell_time_active; scalar_t__ max_dwell_time_active_long; scalar_t__ dwell_time_passive; scalar_t__ dwell_time_dfs; } ;
struct TYPE_2__ {struct conf_sched_scan_settings sched_scan; struct conf_scan_settings scan; } ;
struct wl1271 {TYPE_1__ conf; } ;
struct ieee80211_channel {scalar_t__ flags; scalar_t__ band; int hw_value; scalar_t__ max_power; int center_freq; } ;
struct conn_scan_ch_params {int channel; int flags; scalar_t__ tx_power_att; void* max_duration; void* min_duration; void* passive_duration; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,scalar_t__,...) ;
 int FUNC_3 (struct wl1271*) ;

__attribute__((used)) static int
FUNC_4(struct wl1271 *VAR_8,
    struct ieee80211_channel *VAR_9[],
    u32 VAR_10,
    u32 VAR_11,
    struct conn_scan_ch_params *VAR_12,
    u32 VAR_13, bool VAR_14, bool VAR_15,
    int VAR_16, int VAR_17,
    u8 *VAR_18,
    int VAR_19)
{
 int VAR_20, VAR_21;
 u32 VAR_22;
 bool VAR_23 = !VAR_11;
 u32 VAR_24, VAR_25;
 u32 VAR_26, VAR_27;


 if (VAR_19 == VAR_7) {
  struct conf_scan_settings *VAR_28 = &VAR_8->conf.scan;
  bool VAR_29 = !!FUNC_3(VAR_8);

  VAR_24 = VAR_29 ?
   VAR_28->min_dwell_time_active :
   VAR_28->min_dwell_time_active_long;
  VAR_25 = VAR_29 ?
   VAR_28->max_dwell_time_active :
   VAR_28->max_dwell_time_active_long;
  VAR_26 = VAR_28->dwell_time_passive;
  VAR_27 = VAR_28->dwell_time_dfs;
 } else {
  struct conf_sched_scan_settings *VAR_30 = &VAR_8->conf.sched_scan;
  u32 VAR_31;

  if (VAR_13 == VAR_2)
   VAR_31 = VAR_30->dwell_time_delta_per_probe_5;
  else
   VAR_31 = VAR_30->dwell_time_delta_per_probe;

  VAR_24 = VAR_30->base_dwell_time +
    VAR_11 * VAR_30->num_probe_reqs * VAR_31;

  VAR_25 = VAR_24 +
     VAR_30->max_dwell_time_delta;
  VAR_26 = VAR_30->dwell_time_passive;
  VAR_27 = VAR_30->dwell_time_dfs;
 }
 VAR_24 = FUNC_0(VAR_24, 1000);
 VAR_25 = FUNC_0(VAR_25, 1000);
 VAR_26 = FUNC_0(VAR_26, 1000);
 VAR_27 = FUNC_0(VAR_27, 1000);

 for (VAR_20 = 0, VAR_21 = VAR_16;
      VAR_20 < VAR_10 && VAR_21 < VAR_17;
      VAR_20++) {
  VAR_22 = VAR_9[VAR_20]->flags;

  if (VAR_23)
   VAR_22 |= VAR_4;

  if ((VAR_9[VAR_20]->band == VAR_13) &&
      !(VAR_22 & VAR_3) &&
      (!!(VAR_22 & VAR_5) == VAR_14) &&

      (VAR_14 ||
       !!(VAR_22 & VAR_4) == VAR_15)) {
   FUNC_2(VAR_0, "band %d, center_freq %d ",
         VAR_9[VAR_20]->band,
         VAR_9[VAR_20]->center_freq);
   FUNC_2(VAR_0, "hw_value %d, flags %X",
         VAR_9[VAR_20]->hw_value,
         VAR_9[VAR_20]->flags);
   FUNC_2(VAR_0, "max_power %d",
         VAR_9[VAR_20]->max_power);
   FUNC_2(VAR_0, "min_dwell_time %d max dwell time %d",
         VAR_24,
         VAR_25);

   if (VAR_22 & VAR_5) {
    VAR_12[VAR_21].flags |= VAR_6;

    VAR_12[VAR_21].passive_duration =
     FUNC_1(VAR_27);
   } else {
    VAR_12[VAR_21].passive_duration =
     FUNC_1(VAR_26);
   }

   VAR_12[VAR_21].min_duration =
    FUNC_1(VAR_24);
   VAR_12[VAR_21].max_duration =
    FUNC_1(VAR_25);

   VAR_12[VAR_21].tx_power_att = VAR_9[VAR_20]->max_power;
   VAR_12[VAR_21].channel = VAR_9[VAR_20]->hw_value;

   if (VAR_18 &&
       (VAR_13 == VAR_1) &&
       (VAR_12[VAR_21].channel >= 12) &&
       (VAR_12[VAR_21].channel <= 14) &&
       (VAR_22 & VAR_4) &&
       !VAR_23) {

    VAR_12[VAR_21].flags = VAR_6;





    (*VAR_18)++;
    FUNC_2(VAR_0, "n_pactive_ch = %d",
          *VAR_18);
   }

   VAR_21++;
  }
 }

 return VAR_21 - VAR_16;
}
