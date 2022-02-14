
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct wl12xx_vif {int role_id; } ;
struct wl1271 {int dummy; } ;
struct acx_tid_config {void** apsd_conf; void* ack_policy; void* ps_scheme; void* tsid; void* channel_type; void* queue_id; int role_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct acx_tid_config*) ;
 struct acx_tid_config* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct acx_tid_config*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1271 *VAR_4, struct wl12xx_vif *VAR_5,
         u8 VAR_6, u8 VAR_7,
         u8 VAR_8, u8 VAR_9, u8 VAR_10,
         u32 VAR_11, u32 VAR_12)
{
 struct acx_tid_config *VAR_13;
 int VAR_14 = 0;

 FUNC_4(VAR_1, "acx tid config");

 VAR_13 = FUNC_2(sizeof(*VAR_13), VAR_3);

 if (!VAR_13) {
  VAR_14 = -VAR_2;
  goto out;
 }

 VAR_13->role_id = VAR_5->role_id;
 VAR_13->queue_id = VAR_6;
 VAR_13->channel_type = VAR_7;
 VAR_13->tsid = VAR_8;
 VAR_13->ps_scheme = VAR_9;
 VAR_13->ack_policy = VAR_10;
 VAR_13->apsd_conf[0] = FUNC_0(VAR_11);
 VAR_13->apsd_conf[1] = FUNC_0(VAR_12);

 VAR_14 = FUNC_3(VAR_4, VAR_0, VAR_13, sizeof(*VAR_13));
 if (VAR_14 < 0) {
  FUNC_5("Setting of tid config failed: %d", VAR_14);
  goto out;
 }

out:
 FUNC_1(VAR_13);
 return VAR_14;
}
