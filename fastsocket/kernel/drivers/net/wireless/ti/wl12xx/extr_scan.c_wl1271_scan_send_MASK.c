
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct wl12xx_vif {scalar_t__ role_id; } ;
struct TYPE_6__ {scalar_t__ role_id; scalar_t__ n_ch; int ssid; int ssid_len; int band; int scan_tag; int tid_trigger; int n_probe_reqs; void* tx_rate; int scan_options; } ;
struct wl1271_cmd_trigger_scan_to {void* timeout; TYPE_1__ params; int addr; int channels; } ;
struct wl1271_cmd_scan {void* timeout; TYPE_1__ params; int addr; int channels; } ;
struct TYPE_8__ {scalar_t__ split_scan_timeout; int num_probe_reqs; } ;
struct TYPE_9__ {TYPE_3__ scan; } ;
struct TYPE_7__ {TYPE_5__* req; int ssid_len; int ssid; } ;
struct wl1271 {TYPE_4__ conf; TYPE_2__ scan; } ;
struct ieee80211_vif {int addr; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_10__ {scalar_t__ n_ssids; int ie_len; int ie; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct wl1271_cmd_trigger_scan_to*) ;
 struct wl1271_cmd_trigger_scan_to* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct wl1271*,int ,struct wl1271_cmd_trigger_scan_to*,int,int ) ;
 int FUNC_7 (int ,char*,struct wl1271_cmd_trigger_scan_to*,int) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (struct wl1271*,TYPE_5__*,int ,int,int) ;
 int FUNC_10 (struct wl1271*,struct wl12xx_vif*,scalar_t__,int,int ,int ,int ,int ,int) ;
 struct ieee80211_vif* FUNC_11 (struct wl12xx_vif*) ;

__attribute__((used)) static int FUNC_12(struct wl1271 *VAR_16, struct wl12xx_vif *VAR_17,
       enum ieee80211_band VAR_18,
       bool VAR_19, u32 VAR_20)
{
 struct ieee80211_vif *VAR_21 = FUNC_11(VAR_17);
 struct wl1271_cmd_scan *VAR_22;
 struct wl1271_cmd_trigger_scan_to *VAR_23;
 int VAR_24;
 u16 VAR_25 = 0;


 if (!VAR_19 && VAR_16->scan.req->n_ssids == 0)
  return VAR_9;

 VAR_22 = FUNC_4(sizeof(*VAR_22), VAR_7);
 VAR_23 = FUNC_4(sizeof(*VAR_23), VAR_7);
 if (!VAR_22 || !VAR_23) {
  VAR_24 = -VAR_5;
  goto out;
 }

 if (VAR_16->conf.scan.split_scan_timeout)
  VAR_25 |= VAR_14;

 if (VAR_19)
  VAR_25 |= VAR_13;

 VAR_22->params.role_id = VAR_17->role_id;

 if (FUNC_0(VAR_22->params.role_id == VAR_15)) {
  VAR_24 = -VAR_4;
  goto out;
 }

 VAR_22->params.scan_options = FUNC_1(VAR_25);

 VAR_22->params.n_ch = FUNC_9(VAR_16, VAR_16->scan.req,
          VAR_22->channels,
          VAR_18, VAR_19);
 if (VAR_22->params.n_ch == 0) {
  VAR_24 = VAR_9;
  goto out;
 }

 VAR_22->params.tx_rate = FUNC_2(VAR_20);
 VAR_22->params.n_probe_reqs = VAR_16->conf.scan.num_probe_reqs;
 VAR_22->params.tid_trigger = VAR_2;
 VAR_22->params.scan_tag = VAR_12;

 if (VAR_18 == VAR_8)
  VAR_22->params.band = VAR_10;
 else
  VAR_22->params.band = VAR_11;

 if (VAR_16->scan.ssid_len && VAR_16->scan.ssid) {
  VAR_22->params.ssid_len = VAR_16->scan.ssid_len;
  FUNC_5(VAR_22->params.ssid, VAR_16->scan.ssid, VAR_16->scan.ssid_len);
 }

 FUNC_5(VAR_22->addr, VAR_21->addr, VAR_6);

 VAR_24 = FUNC_10(VAR_16, VAR_17,
      VAR_22->params.role_id, VAR_18,
      VAR_16->scan.ssid, VAR_16->scan.ssid_len,
      VAR_16->scan.req->ie,
      VAR_16->scan.req->ie_len, 0);
 if (VAR_24 < 0) {
  FUNC_8("PROBE request template failed");
  goto out;
 }

 VAR_23->timeout = FUNC_2(VAR_16->conf.scan.split_scan_timeout);
 VAR_24 = FUNC_6(VAR_16, VAR_1, VAR_23,
         sizeof(*VAR_23), 0);
 if (VAR_24 < 0) {
  FUNC_8("trigger scan to failed for hw scan");
  goto out;
 }

 FUNC_7(VAR_3, "SCAN: ", VAR_22, sizeof(*VAR_22));

 VAR_24 = FUNC_6(VAR_16, VAR_0, VAR_22, sizeof(*VAR_22), 0);
 if (VAR_24 < 0) {
  FUNC_8("SCAN failed");
  goto out;
 }

out:
 FUNC_3(VAR_22);
 FUNC_3(VAR_23);
 return VAR_24;
}
