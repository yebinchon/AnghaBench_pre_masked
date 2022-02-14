
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wl12xx_cmd_role_enable {scalar_t__ role_id; scalar_t__ role_type; int mac_address; } ;
struct wl1271 {int roles_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct wl12xx_cmd_role_enable*) ;
 struct wl12xx_cmd_role_enable* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,scalar_t__*,int ) ;
 int FUNC_6 (struct wl1271*,int ,struct wl12xx_cmd_role_enable*,int,int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (char*) ;

int FUNC_9(struct wl1271 *VAR_8, u8 *VAR_9, u8 VAR_10,
      u8 *VAR_11)
{
 struct wl12xx_cmd_role_enable *VAR_12;
 int VAR_13;

 FUNC_7(VAR_1, "cmd role enable");

 if (FUNC_0(*VAR_11 != VAR_6))
  return -VAR_2;

 VAR_12 = FUNC_4(sizeof(*VAR_12), VAR_5);
 if (!VAR_12) {
  VAR_13 = -VAR_3;
  goto out;
 }


 VAR_12->role_id = FUNC_2(VAR_8->roles_map, VAR_7);
 if (VAR_12->role_id >= VAR_7) {
  VAR_13 = -VAR_2;
  goto out_free;
 }

 FUNC_5(VAR_12->mac_address, VAR_9, VAR_4);
 VAR_12->role_type = VAR_10;

 VAR_13 = FUNC_6(VAR_8, VAR_0, VAR_12, sizeof(*VAR_12), 0);
 if (VAR_13 < 0) {
  FUNC_8("failed to initiate cmd role enable");
  goto out_free;
 }

 FUNC_1(VAR_12->role_id, VAR_8->roles_map);
 *VAR_11 = VAR_12->role_id;

out_free:
 FUNC_3(VAR_12);

out:
 return VAR_13;
}
