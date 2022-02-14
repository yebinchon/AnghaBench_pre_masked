
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int scanned_ch; } ;
struct conf_scan_settings {int dwell_time_passive; int max_dwell_time_active; int min_dwell_time_active; } ;
struct TYPE_4__ {struct conf_scan_settings scan; } ;
struct wl1271 {TYPE_3__ scan; TYPE_1__ conf; } ;
struct cfg80211_scan_request {int n_channels; TYPE_2__** channels; } ;
struct basic_scan_channel_params {int bssid_msb; int bssid_lsb; scalar_t__ channel; int tx_power_att; scalar_t__ early_termination; void* max_duration; void* min_duration; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_5__ {int flags; int band; scalar_t__ hw_value; int max_power; int beacon_found; int max_antenna_gain; int center_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_5(struct wl1271 *VAR_4,
        struct cfg80211_scan_request *VAR_5,
        struct basic_scan_channel_params *VAR_6,
        enum ieee80211_band VAR_7, bool VAR_8)
{
 struct conf_scan_settings *VAR_9 = &VAR_4->conf.scan;
 int VAR_10, VAR_11;
 u32 VAR_12;

 for (VAR_10 = 0, VAR_11 = 0;
      VAR_10 < VAR_5->n_channels && VAR_11 < VAR_3;
      VAR_10++) {
  VAR_12 = VAR_5->channels[VAR_10]->flags;

  if (!FUNC_3(VAR_10, VAR_4->scan.scanned_ch) &&
      !(VAR_12 & VAR_1) &&
      (VAR_5->channels[VAR_10]->band == VAR_7) &&






      (VAR_8 || !(VAR_12 & VAR_2))) {
   FUNC_4(VAR_0, "band %d, center_freq %d ",
         VAR_5->channels[VAR_10]->band,
         VAR_5->channels[VAR_10]->center_freq);
   FUNC_4(VAR_0, "hw_value %d, flags %X",
         VAR_5->channels[VAR_10]->hw_value,
         VAR_5->channels[VAR_10]->flags);
   FUNC_4(VAR_0,
         "max_antenna_gain %d, max_power %d",
         VAR_5->channels[VAR_10]->max_antenna_gain,
         VAR_5->channels[VAR_10]->max_power);
   FUNC_4(VAR_0, "beacon_found %d",
         VAR_5->channels[VAR_10]->beacon_found);

   if (!VAR_8) {
    VAR_6[VAR_11].min_duration =
     FUNC_0(VAR_9->min_dwell_time_active);
    VAR_6[VAR_11].max_duration =
     FUNC_0(VAR_9->max_dwell_time_active);
   } else {
    VAR_6[VAR_11].min_duration =
     FUNC_0(VAR_9->dwell_time_passive);
    VAR_6[VAR_11].max_duration =
     FUNC_0(VAR_9->dwell_time_passive);
   }
   VAR_6[VAR_11].early_termination = 0;
   VAR_6[VAR_11].tx_power_att = VAR_5->channels[VAR_10]->max_power;
   VAR_6[VAR_11].channel = VAR_5->channels[VAR_10]->hw_value;

   FUNC_1(&VAR_6[VAR_11].bssid_lsb, 0xff, 4);
   FUNC_1(&VAR_6[VAR_11].bssid_msb, 0xff, 2);


   FUNC_2(VAR_10, VAR_4->scan.scanned_ch);

   VAR_11++;
  }
 }

 return VAR_11;
}
