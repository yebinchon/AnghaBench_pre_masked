
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct wlcore_scan_channels {int report_after; int filter_type; scalar_t__* active; scalar_t__ ssid_len; int * intervals; int bss_type; int tag; scalar_t__ terminate; scalar_t__ cycles; int n_probe_reqs; int snr_threshold; int rssi_threshold; int role_id; } ;
struct wl12xx_vif {int role_id; } ;
struct wl1271_cmd_sched_scan_config {int report_after; int filter_type; scalar_t__* active; scalar_t__ ssid_len; int * intervals; int bss_type; int tag; scalar_t__ terminate; scalar_t__ cycles; int n_probe_reqs; int snr_threshold; int rssi_threshold; int role_id; } ;
struct conf_sched_scan_settings {int num_probe_reqs; int snr_threshold; int rssi_threshold; } ;
struct TYPE_3__ {struct conf_sched_scan_settings sched_scan; } ;
struct wl1271 {TYPE_1__ conf; } ;
struct ieee80211_sched_scan_ies {int * len; int * ie; } ;
struct cfg80211_sched_scan_request {TYPE_2__* ssids; int n_ssids; int n_channels; int channels; int interval; } ;
struct TYPE_4__ {int ssid_len; int ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct wlcore_scan_channels*) ;
 struct wlcore_scan_channels* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct wlcore_scan_channels*,int,int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,char*,struct wlcore_scan_channels*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct wlcore_scan_channels*,struct wlcore_scan_channels*) ;
 int FUNC_8 (struct wl1271*,struct wl12xx_vif*,int ,size_t,int ,int ,int ,int ,int) ;
 int FUNC_9 (struct wl1271*,struct wl12xx_vif*,struct cfg80211_sched_scan_request*) ;
 int FUNC_10 (struct wl1271*,struct wlcore_scan_channels*,int ,int ,int ,int ) ;

int FUNC_11(struct wl1271 *VAR_12,
      struct wl12xx_vif *VAR_13,
      struct cfg80211_sched_scan_request *VAR_14,
      struct ieee80211_sched_scan_ies *VAR_15)
{
 struct wl1271_cmd_sched_scan_config *VAR_16 = ((void*)0);
 struct wlcore_scan_channels *VAR_17 = ((void*)0);
 struct conf_sched_scan_settings *VAR_18 = &VAR_12->conf.sched_scan;
 int VAR_19, VAR_20;
 bool VAR_21 = !VAR_14->n_ssids;

 FUNC_4(VAR_1, "cmd sched_scan scan config");

 VAR_16 = FUNC_2(sizeof(*VAR_16), VAR_5);
 if (!VAR_16)
  return -VAR_4;

 VAR_16->role_id = VAR_13->role_id;
 VAR_16->rssi_threshold = VAR_18->rssi_threshold;
 VAR_16->snr_threshold = VAR_18->snr_threshold;
 VAR_16->n_probe_reqs = VAR_18->num_probe_reqs;

 VAR_16->cycles = 0;

 VAR_16->report_after = 1;

 VAR_16->terminate = 0;
 VAR_16->tag = VAR_11;

 VAR_16->bss_type = VAR_8;

 for (VAR_19 = 0; VAR_19 < VAR_9; VAR_19++)
  VAR_16->intervals[VAR_19] = FUNC_0(VAR_14->interval);

 VAR_16->ssid_len = 0;
 VAR_20 = FUNC_9(VAR_12, VAR_13, VAR_14);
 if (VAR_20 < 0)
  goto out;

 VAR_16->filter_type = VAR_20;

 FUNC_4(VAR_2, "filter_type = %d", VAR_16->filter_type);

 VAR_17 = FUNC_2(sizeof(*VAR_17), VAR_5);
 if (!VAR_17) {
  VAR_20 = -VAR_4;
  goto out;
 }

 if (!FUNC_10(VAR_12, VAR_17, VAR_14->channels,
      VAR_14->n_channels, VAR_14->n_ssids,
      VAR_10)) {
  FUNC_6("scan channel list is empty");
  VAR_20 = -VAR_3;
  goto out;
 }
 FUNC_7(VAR_16, VAR_17);

 if (!VAR_21 && VAR_16->active[0]) {
  u8 VAR_22 = VAR_6;
  VAR_20 = FUNC_8(VAR_12, VAR_13,
       VAR_13->role_id, VAR_22,
       VAR_14->ssids[0].ssid,
       VAR_14->ssids[0].ssid_len,
       VAR_15->ie[VAR_22],
       VAR_15->len[VAR_22], 1);
  if (VAR_20 < 0) {
   FUNC_6("2.4GHz PROBE request template failed");
   goto out;
  }
 }

 if (!VAR_21 && VAR_16->active[1]) {
  u8 VAR_23 = VAR_7;
  VAR_20 = FUNC_8(VAR_12, VAR_13,
       VAR_13->role_id, VAR_23,
       VAR_14->ssids[0].ssid,
       VAR_14->ssids[0].ssid_len,
       VAR_15->ie[VAR_23],
       VAR_15->len[VAR_23], 1);
  if (VAR_20 < 0) {
   FUNC_6("5GHz PROBE request template failed");
   goto out;
  }
 }

 FUNC_5(VAR_2, "SCAN_CFG: ", VAR_16, sizeof(*VAR_16));

 VAR_20 = FUNC_3(VAR_12, VAR_0, VAR_16,
         sizeof(*VAR_16), 0);
 if (VAR_20 < 0) {
  FUNC_6("SCAN configuration failed");
  goto out;
 }
out:
 FUNC_1(VAR_17);
 FUNC_1(VAR_16);
 return VAR_20;
}
