
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl12xx_vif {int role_id; } ;
struct wl1271_cmd_sched_scan_ssid_list {size_t n_ssids; TYPE_2__* ssids; int role_id; } ;
struct wl1271 {int dummy; } ;
struct cfg80211_ssid {scalar_t__ ssid_len; int ssid; } ;
struct cfg80211_sched_scan_request {int n_match_sets; int n_ssids; struct cfg80211_ssid* ssids; struct cfg80211_match_set* match_sets; } ;
struct TYPE_3__ {scalar_t__ ssid_len; int ssid; } ;
struct cfg80211_match_set {TYPE_1__ ssid; } ;
struct TYPE_4__ {scalar_t__ len; void* type; int ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int FUNC_0 (struct wl1271_cmd_sched_scan_ssid_list*) ;
 struct wl1271_cmd_sched_scan_ssid_list* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (struct wl1271*,int ,struct wl1271_cmd_sched_scan_ssid_list*,int,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*,struct wl1271_cmd_sched_scan_ssid_list*,int) ;
 int FUNC_7 (char*) ;

int
FUNC_8(struct wl1271 *VAR_11,
     struct wl12xx_vif *VAR_12,
     struct cfg80211_sched_scan_request *VAR_13)
{
 struct wl1271_cmd_sched_scan_ssid_list *VAR_14 = ((void*)0);
 struct cfg80211_match_set *VAR_15 = VAR_13->match_sets;
 struct cfg80211_ssid *VAR_16 = VAR_13->ssids;
 int VAR_17 = 0, VAR_18, VAR_19, VAR_20, VAR_21 = 0;

 FUNC_5(VAR_1, "cmd sched scan ssid list");


 for (VAR_19 = 0; VAR_19 < VAR_13->n_match_sets; VAR_19++)
  if (VAR_15[VAR_19].ssid.ssid_len > 0)
   VAR_21++;


 if (!VAR_21 &&
     (!VAR_13->n_ssids ||
      (VAR_13->n_ssids == 1 && VAR_13->ssids[0].ssid_len == 0))) {
  VAR_18 = VAR_6;
  goto out;
 }

 VAR_14 = FUNC_1(sizeof(*VAR_14), VAR_5);
 if (!VAR_14) {
  VAR_17 = -VAR_4;
  goto out;
 }

 VAR_14->role_id = VAR_12->role_id;
 if (!VAR_21) {

  VAR_18 = VAR_7;

  for (VAR_19 = 0; VAR_19 < VAR_13->n_ssids; VAR_19++) {
   VAR_14->ssids[VAR_14->n_ssids].type = (VAR_16[VAR_19].ssid_len) ?
    VAR_9 : VAR_10;
   VAR_14->ssids[VAR_14->n_ssids].len = VAR_16[VAR_19].ssid_len;
   FUNC_3(VAR_14->ssids[VAR_14->n_ssids].ssid, VAR_16[VAR_19].ssid,
          VAR_16[VAR_19].ssid_len);
   VAR_14->n_ssids++;
  }
 } else {
  VAR_18 = VAR_8;


  for (VAR_19 = 0; VAR_19 < VAR_13->n_match_sets; VAR_19++) {

   if (!VAR_15[VAR_19].ssid.ssid_len)
    continue;

   VAR_14->ssids[VAR_14->n_ssids].type = VAR_10;
   VAR_14->ssids[VAR_14->n_ssids].len = VAR_15[VAR_19].ssid.ssid_len;
   FUNC_3(VAR_14->ssids[VAR_14->n_ssids].ssid,
          VAR_15[VAR_19].ssid.ssid, VAR_15[VAR_19].ssid.ssid_len);
   VAR_14->n_ssids++;
  }
  if ((VAR_13->n_ssids > 1) ||
      (VAR_13->n_ssids == 1 && VAR_13->ssids[0].ssid_len > 0)) {




   for (VAR_19 = 0; VAR_19 < VAR_13->n_ssids; VAR_19++) {
    if (!VAR_13->ssids[VAR_19].ssid_len)
     continue;

    for (VAR_20 = 0; VAR_20 < VAR_14->n_ssids; VAR_20++)
     if ((VAR_13->ssids[VAR_19].ssid_len ==
          VAR_14->ssids[VAR_20].len) &&
         !FUNC_2(VAR_13->ssids[VAR_19].ssid,
         VAR_14->ssids[VAR_20].ssid,
         VAR_13->ssids[VAR_19].ssid_len)) {
      VAR_14->ssids[VAR_20].type =
       VAR_9;
      break;
     }

    if (VAR_20 == VAR_14->n_ssids) {
     VAR_17 = -VAR_3;
     goto out_free;
    }
   }
  }
 }

 FUNC_6(VAR_2, "SSID_LIST: ", VAR_14, sizeof(*VAR_14));

 VAR_17 = FUNC_4(VAR_11, VAR_0, VAR_14,
         sizeof(*VAR_14), 0);
 if (VAR_17 < 0) {
  FUNC_7("cmd sched scan ssid list failed");
  goto out_free;
 }

out_free:
 FUNC_0(VAR_14);
out:
 if (VAR_17 < 0)
  return VAR_17;
 return VAR_18;
}
