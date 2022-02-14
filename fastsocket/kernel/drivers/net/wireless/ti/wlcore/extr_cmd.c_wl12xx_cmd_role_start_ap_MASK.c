
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {size_t global_hlid; size_t bcast_hlid; } ;
struct wl12xx_vif {int role_id; int basic_rate_set; int band; TYPE_5__ ap; scalar_t__ p2p; scalar_t__ ssid_len; int ssid; int channel_type; int channel; int wmm_enabled; int beacon_int; int total_freed_pkts; } ;
struct TYPE_9__ {size_t global_hlid; size_t broadcast_hlid; int reset_tsf; void* local_rates; int ssid; scalar_t__ ssid_len; int ssid_type; int wmm; int beacon_expiry; int dtim_interval; void* beacon_interval; void* basic_rate_set; int bcast_session_id; int global_session_id; int bss_index; void* aging_period; } ;
struct wl12xx_cmd_role_start {int role_id; void* band; TYPE_4__ ap; int channel_type; int channel; } ;
struct TYPE_7__ {int ap_aging_period; } ;
struct TYPE_8__ {TYPE_2__ tx; } ;
struct wl1271 {int * session_ids; TYPE_3__ conf; TYPE_1__* links; } ;
struct ieee80211_bss_conf {scalar_t__ ssid_len; int ssid; int hidden_ssid; int dtim_period; } ;
struct ieee80211_vif {struct ieee80211_bss_conf bss_conf; } ;
struct TYPE_6__ {int total_freed_pkts; } ;


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
 void* VAR_12 ;
 void* VAR_13 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct wl12xx_cmd_role_start*) ;
 struct wl12xx_cmd_role_start* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (struct wl1271*,int ,struct wl12xx_cmd_role_start*,int,int ) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (struct wl1271*,struct wl12xx_vif*,size_t*) ;
 int FUNC_10 (struct wl1271*,struct wl12xx_vif*,size_t*) ;
 struct ieee80211_vif* FUNC_11 (struct wl12xx_vif*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct wl1271*,struct wl12xx_vif*) ;

int FUNC_14(struct wl1271 *VAR_14, struct wl12xx_vif *VAR_15)
{
 struct wl12xx_cmd_role_start *VAR_16;
 struct ieee80211_vif *VAR_17 = FUNC_11(VAR_15);
 struct ieee80211_bss_conf *VAR_18 = &VAR_17->bss_conf;
 u32 VAR_19;
 int VAR_20;

 FUNC_6(VAR_4, "cmd role start ap %d", VAR_15->role_id);


 if (VAR_15->ssid_len == 0 && !VAR_18->hidden_ssid) {
  FUNC_7("got a null SSID from beacon/bss");
  VAR_20 = -VAR_5;
  goto out;
 }

 VAR_16 = FUNC_3(sizeof(*VAR_16), VAR_7);
 if (!VAR_16) {
  VAR_20 = -VAR_6;
  goto out;
 }

 VAR_20 = FUNC_9(VAR_14, VAR_15, &VAR_15->ap.global_hlid);
 if (VAR_20 < 0)
  goto out_free;

 VAR_20 = FUNC_9(VAR_14, VAR_15, &VAR_15->ap.bcast_hlid);
 if (VAR_20 < 0)
  goto out_free_global;


 VAR_14->links[VAR_15->ap.bcast_hlid].total_freed_pkts =
      VAR_15->total_freed_pkts;

 VAR_16->role_id = VAR_15->role_id;
 VAR_16->ap.aging_period = FUNC_0(VAR_14->conf.tx.ap_aging_period);
 VAR_16->ap.bss_index = VAR_8;
 VAR_16->ap.global_hlid = VAR_15->ap.global_hlid;
 VAR_16->ap.broadcast_hlid = VAR_15->ap.bcast_hlid;
 VAR_16->ap.global_session_id = VAR_14->session_ids[VAR_15->ap.global_hlid];
 VAR_16->ap.bcast_session_id = VAR_14->session_ids[VAR_15->ap.bcast_hlid];
 VAR_16->ap.basic_rate_set = FUNC_1(VAR_15->basic_rate_set);
 VAR_16->ap.beacon_interval = FUNC_0(VAR_15->beacon_int);
 VAR_16->ap.dtim_interval = VAR_18->dtim_period;
 VAR_16->ap.beacon_expiry = VAR_9;

 VAR_16->ap.reset_tsf = 1;
 VAR_16->ap.wmm = VAR_15->wmm_enabled;
 VAR_16->channel = VAR_15->channel;
 VAR_16->channel_type = FUNC_12(VAR_15->channel_type);

 if (!VAR_18->hidden_ssid) {

  VAR_16->ap.ssid_type = VAR_11;
  VAR_16->ap.ssid_len = VAR_15->ssid_len;
  FUNC_4(VAR_16->ap.ssid, VAR_15->ssid, VAR_15->ssid_len);
 } else {
  VAR_16->ap.ssid_type = VAR_10;
  VAR_16->ap.ssid_len = VAR_18->ssid_len;
  FUNC_4(VAR_16->ap.ssid, VAR_18->ssid, VAR_18->ssid_len);
 }

 VAR_19 = VAR_2 | VAR_3 |
  FUNC_13(VAR_14, VAR_15);
 if (VAR_15->p2p)
  VAR_19 &= ~VAR_1;

 FUNC_6(VAR_4, "cmd role start ap with supported_rates 0x%08x",
       VAR_19);

 VAR_16->ap.local_rates = FUNC_1(VAR_19);

 switch (VAR_15->band) {
 case 129:
  VAR_16->band = VAR_12;
  break;
 case 128:
  VAR_16->band = VAR_13;
  break;
 default:
  FUNC_8("ap start - unknown band: %d", (int)VAR_15->band);
  VAR_16->band = VAR_12;
  break;
 }

 VAR_20 = FUNC_5(VAR_14, VAR_0, VAR_16, sizeof(*VAR_16), 0);
 if (VAR_20 < 0) {
  FUNC_7("failed to initiate cmd role start ap");
  goto out_free_bcast;
 }

 goto out_free;

out_free_bcast:
 FUNC_10(VAR_14, VAR_15, &VAR_15->ap.bcast_hlid);

out_free_global:
 FUNC_10(VAR_14, VAR_15, &VAR_15->ap.global_hlid);

out_free:
 FUNC_2(VAR_16);

out:
 return VAR_20;
}
