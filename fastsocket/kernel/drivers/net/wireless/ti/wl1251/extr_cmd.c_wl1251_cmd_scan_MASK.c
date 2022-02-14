
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int status; } ;
struct TYPE_5__ {unsigned int num_channels; unsigned int num_probe_requests; size_t ssid_len; int ssid; scalar_t__ tid_trigger; int tx_rate; scalar_t__ scan_options; void* rx_filter_options; void* rx_config_options; } ;
struct wl1251_cmd_scan {TYPE_3__ header; TYPE_2__ params; TYPE_1__* channels; } ;
struct wl1251 {int cmd_box_addr; } ;
struct ieee80211_channel {int hw_value; } ;
struct TYPE_4__ {int channel; scalar_t__ tx_power_att; scalar_t__ early_termination; int bssid_msb; int bssid_lsb; void* max_duration; void* min_duration; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct wl1251_cmd_scan*) ;
 struct wl1251_cmd_scan* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int *,size_t) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (struct wl1251*,int ,struct wl1251_cmd_scan*,int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (struct wl1251*,int ,struct wl1251_cmd_scan*,int) ;

int FUNC_10(struct wl1251 *VAR_12, u8 *VAR_13, size_t VAR_14,
      struct ieee80211_channel *VAR_15[],
      unsigned int VAR_16, unsigned int VAR_17)
{
 struct wl1251_cmd_scan *VAR_18;
 int VAR_19, VAR_20 = 0;

 FUNC_7(VAR_6, "cmd scan");

 VAR_18 = FUNC_3(sizeof(*VAR_18), VAR_9);
 if (!VAR_18)
  return -VAR_8;

 VAR_18->params.rx_config_options = FUNC_1(VAR_0);
 VAR_18->params.rx_filter_options = FUNC_1(VAR_3 |
          VAR_2 |
          VAR_1);
 VAR_18->params.scan_options = 0;
 VAR_18->params.num_channels = VAR_16;
 VAR_18->params.num_probe_requests = VAR_17;
 VAR_18->params.tx_rate = FUNC_0(1 << 1);
 VAR_18->params.tid_trigger = 0;

 for (VAR_19 = 0; VAR_19 < VAR_16; VAR_19++) {
  VAR_18->channels[VAR_19].min_duration =
   FUNC_1(VAR_11);
  VAR_18->channels[VAR_19].max_duration =
   FUNC_1(VAR_10);
  FUNC_5(&VAR_18->channels[VAR_19].bssid_lsb, 0xff, 4);
  FUNC_5(&VAR_18->channels[VAR_19].bssid_msb, 0xff, 2);
  VAR_18->channels[VAR_19].early_termination = 0;
  VAR_18->channels[VAR_19].tx_power_att = 0;
  VAR_18->channels[VAR_19].channel = VAR_15[VAR_19]->hw_value;
 }

 VAR_18->params.ssid_len = VAR_14;
 if (VAR_13)
  FUNC_4(VAR_18->params.ssid, VAR_13, VAR_14);

 VAR_20 = FUNC_6(VAR_12, VAR_4, VAR_18, sizeof(*VAR_18));
 if (VAR_20 < 0) {
  FUNC_8("cmd scan failed: %d", VAR_20);
  goto out;
 }

 FUNC_9(VAR_12, VAR_12->cmd_box_addr, VAR_18, sizeof(*VAR_18));

 if (VAR_18->header.status != VAR_5) {
  FUNC_8("cmd scan status wasn't success: %d",
        VAR_18->header.status);
  VAR_20 = -VAR_7;
  goto out;
 }

out:
 FUNC_2(VAR_18);
 return VAR_20;
}
