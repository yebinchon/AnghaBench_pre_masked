
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ hlid; } ;
struct wl12xx_vif {scalar_t__ band; TYPE_3__ sta; int rate_set; int basic_rate_set; int role_id; int ssid_len; int ssid; int beacon_int; int channel; } ;
struct TYPE_5__ {int session; int hlid; void* local_rates; } ;
struct TYPE_4__ {scalar_t__ hlid; void* remote_rates; int bssid; int ssid; int ssid_len; int ssid_type; int dtim_interval; int beacon_interval; void* basic_rate_set; } ;
struct wl12xx_cmd_role_start {TYPE_2__ sta; TYPE_1__ ibss; int channel; int band; int role_id; } ;
struct wl1271 {int dummy; } ;
struct ieee80211_bss_conf {int bssid; int dtim_period; } ;
struct ieee80211_vif {struct ieee80211_bss_conf bss_conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct wl12xx_cmd_role_start*) ;
 struct wl12xx_cmd_role_start* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct wl1271*,int ,struct wl12xx_cmd_role_start*,int,int ) ;
 int FUNC_6 (int ,char*,int ,...) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct wl1271*,struct wl12xx_vif*,scalar_t__*) ;
 int FUNC_9 (struct wl1271*,struct wl12xx_vif*,scalar_t__*) ;
 struct ieee80211_vif* FUNC_10 (struct wl12xx_vif*) ;

int FUNC_11(struct wl1271 *VAR_9, struct wl12xx_vif *VAR_10)
{
 struct ieee80211_vif *VAR_11 = FUNC_10(VAR_10);
 struct wl12xx_cmd_role_start *VAR_12;
 struct ieee80211_bss_conf *VAR_13 = &VAR_11->bss_conf;
 int VAR_14;

 VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_4);
 if (!VAR_12) {
  VAR_14 = -VAR_2;
  goto out;
 }

 FUNC_6(VAR_1, "cmd role start ibss %d", VAR_10->role_id);

 VAR_12->role_id = VAR_10->role_id;
 if (VAR_10->band == VAR_5)
  VAR_12->band = VAR_8;
 VAR_12->channel = VAR_10->channel;
 VAR_12->ibss.basic_rate_set = FUNC_1(VAR_10->basic_rate_set);
 VAR_12->ibss.beacon_interval = FUNC_0(VAR_10->beacon_int);
 VAR_12->ibss.dtim_interval = VAR_13->dtim_period;
 VAR_12->ibss.ssid_type = VAR_7;
 VAR_12->ibss.ssid_len = VAR_10->ssid_len;
 FUNC_4(VAR_12->ibss.ssid, VAR_10->ssid, VAR_10->ssid_len);
 FUNC_4(VAR_12->ibss.bssid, VAR_11->bss_conf.bssid, VAR_3);
 VAR_12->sta.local_rates = FUNC_1(VAR_10->rate_set);

 if (VAR_10->sta.hlid == VAR_6) {
  VAR_14 = FUNC_8(VAR_9, VAR_10, &VAR_10->sta.hlid);
  if (VAR_14)
   goto out_free;
 }
 VAR_12->ibss.hlid = VAR_10->sta.hlid;
 VAR_12->ibss.remote_rates = FUNC_1(VAR_10->rate_set);

 FUNC_6(VAR_1, "role start: roleid=%d, hlid=%d, session=%d "
       "basic_rate_set: 0x%x, remote_rates: 0x%x",
       VAR_10->role_id, VAR_12->sta.hlid, VAR_12->sta.session,
       VAR_10->basic_rate_set, VAR_10->rate_set);

 FUNC_6(VAR_1, "vif->bss_conf.bssid = %pM",
       VAR_11->bss_conf.bssid);

 VAR_14 = FUNC_5(VAR_9, VAR_0, VAR_12, sizeof(*VAR_12), 0);
 if (VAR_14 < 0) {
  FUNC_7("failed to initiate cmd role enable");
  goto err_hlid;
 }

 goto out_free;

err_hlid:

 FUNC_9(VAR_9, VAR_10, &VAR_10->sta.hlid);

out_free:
 FUNC_2(VAR_12);

out:
 return VAR_14;
}
