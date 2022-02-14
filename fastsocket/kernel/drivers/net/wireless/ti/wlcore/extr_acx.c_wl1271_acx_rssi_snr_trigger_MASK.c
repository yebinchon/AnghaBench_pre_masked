
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wl12xx_vif {int last_rssi_event; int role_id; } ;
struct wl1271_acx_rssi_snr_trigger {int hysteresis; void* threshold; int dir; int index; int enable; int type; int metric; void* pacing; int role_id; } ;
struct TYPE_3__ {int trigger_pacing; } ;
struct TYPE_4__ {TYPE_1__ roam_trigger; } ;
struct wl1271 {TYPE_2__ conf; } ;
typedef int s16 ;


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
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct wl1271_acx_rssi_snr_trigger*) ;
 struct wl1271_acx_rssi_snr_trigger* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct wl1271_acx_rssi_snr_trigger*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1271 *VAR_10, struct wl12xx_vif *VAR_11,
    bool VAR_12, s16 VAR_13, u8 VAR_14)
{
 struct wl1271_acx_rssi_snr_trigger *VAR_15 = ((void*)0);
 int VAR_16 = 0;

 FUNC_4(VAR_1, "acx rssi snr trigger");

 VAR_15 = FUNC_2(sizeof(*VAR_15), VAR_3);
 if (!VAR_15) {
  VAR_16 = -VAR_2;
  goto out;
 }

 VAR_11->last_rssi_event = -1;

 VAR_15->role_id = VAR_11->role_id;
 VAR_15->pacing = FUNC_0(VAR_10->conf.roam_trigger.trigger_pacing);
 VAR_15->metric = VAR_8;
 VAR_15->type = VAR_9;
 if (VAR_12)
  VAR_15->enable = VAR_6;
 else
  VAR_15->enable = VAR_5;

 VAR_15->index = VAR_7;
 VAR_15->dir = VAR_4;
 VAR_15->threshold = FUNC_0(VAR_13);
 VAR_15->hysteresis = VAR_14;

 VAR_16 = FUNC_3(VAR_10, VAR_0, VAR_15, sizeof(*VAR_15));
 if (VAR_16 < 0) {
  FUNC_5("acx rssi snr trigger setting failed: %d", VAR_16);
  goto out;
 }

out:
 FUNC_1(VAR_15);
 return VAR_16;
}
