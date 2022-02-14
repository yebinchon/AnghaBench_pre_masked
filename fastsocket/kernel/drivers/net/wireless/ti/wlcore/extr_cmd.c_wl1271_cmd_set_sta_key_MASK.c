
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ hlid; } ;
struct wl12xx_vif {TYPE_1__ sta; } ;
struct wl1271_cmd_set_keys {scalar_t__ hlid; scalar_t__ key; scalar_t__ key_id; int * ac_seq_num32; void** ac_seq_num16; scalar_t__ key_type; scalar_t__ key_size; void* key_action; int lid_key_type; } ;
struct wl1271 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__ const*) ;
 int FUNC_3 (struct wl1271_cmd_set_keys*) ;
 struct wl1271_cmd_set_keys* FUNC_4 (int,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__ const*,scalar_t__) ;
 int FUNC_6 (struct wl1271*,int ,struct wl1271_cmd_set_keys*,int,int ) ;
 int FUNC_7 (int ,char*,struct wl1271_cmd_set_keys*,int) ;
 int FUNC_8 (char*) ;

int FUNC_9(struct wl1271 *VAR_10, struct wl12xx_vif *VAR_11,
         u16 VAR_12, u8 VAR_13, u8 VAR_14,
         u8 VAR_15, const u8 *VAR_16, const u8 *VAR_17,
         u32 VAR_18, u16 VAR_19)
{
 struct wl1271_cmd_set_keys *VAR_20;
 int VAR_21 = 0;


 if (VAR_11->sta.hlid == VAR_9)
  return 0;

 VAR_20 = FUNC_4(sizeof(*VAR_20), VAR_4);
 if (!VAR_20) {
  VAR_21 = -VAR_3;
  goto out;
 }

 VAR_20->hlid = VAR_11->sta.hlid;

 if (VAR_14 == VAR_6)
  VAR_20->lid_key_type = VAR_8;
 else if (FUNC_2(VAR_17))
  VAR_20->lid_key_type = VAR_0;
 else
  VAR_20->lid_key_type = VAR_7;

 VAR_20->key_action = FUNC_0(VAR_12);
 VAR_20->key_size = VAR_15;
 VAR_20->key_type = VAR_14;

 VAR_20->ac_seq_num16[0] = FUNC_0(VAR_19);
 VAR_20->ac_seq_num32[0] = FUNC_1(VAR_18);

 VAR_20->key_id = VAR_13;

 if (VAR_14 == VAR_5) {






  FUNC_5(VAR_20->key, VAR_16, 16);
  FUNC_5(VAR_20->key + 16, VAR_16 + 24, 8);
  FUNC_5(VAR_20->key + 24, VAR_16 + 16, 8);

 } else {
  FUNC_5(VAR_20->key, VAR_16, VAR_15);
 }

 FUNC_7(VAR_2, "TARGET KEY: ", VAR_20, sizeof(*VAR_20));

 VAR_21 = FUNC_6(VAR_10, VAR_1, VAR_20, sizeof(*VAR_20), 0);
 if (VAR_21 < 0) {
  FUNC_8("could not set keys");
 goto out;
 }

out:
 FUNC_3(VAR_20);

 return VAR_21;
}
