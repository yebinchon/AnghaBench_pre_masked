
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct client_update_ramrod_data {void* silent_vlan_mask; void* silent_vlan_value; void* silent_vlan_removal_flg; void* silent_vlan_change_flg; void* default_vlan_change_flg; void* default_vlan_enable_flg; void* activate_change_flg; void* activate_flg; void* anti_spoofing_change_flg; void* anti_spoofing_enable_flg; void* outer_vlan_removal_change_flg; void* outer_vlan_removal_enable_flg; void* inner_vlan_removal_change_flg; void* inner_vlan_removal_enable_flg; void* default_vlan; int func_id; int client_id; } ;
struct bnx2x_queue_update_params {int silent_removal_mask; int silent_removal_value; int update_flags; int def_vlan; } ;
struct bnx2x_queue_sp_obj {int func_id; int cl_id; } ;
struct bnx2x {int dummy; } ;


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
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_12,
         struct bnx2x_queue_sp_obj *VAR_13,
         struct bnx2x_queue_update_params *VAR_14,
         struct client_update_ramrod_data *VAR_15)
{

 VAR_15->client_id = VAR_13->cl_id;


 VAR_15->func_id = VAR_13->func_id;


 VAR_15->default_vlan = FUNC_0(VAR_14->def_vlan);


 VAR_15->inner_vlan_removal_enable_flg =
  FUNC_1(VAR_6, &VAR_14->update_flags);
 VAR_15->inner_vlan_removal_change_flg =
  FUNC_1(VAR_7,
    &VAR_14->update_flags);


 VAR_15->outer_vlan_removal_enable_flg =
  FUNC_1(VAR_8, &VAR_14->update_flags);
 VAR_15->outer_vlan_removal_change_flg =
  FUNC_1(VAR_9,
    &VAR_14->update_flags);




 VAR_15->anti_spoofing_enable_flg =
  FUNC_1(VAR_2, &VAR_14->update_flags);
 VAR_15->anti_spoofing_change_flg =
  FUNC_1(VAR_3, &VAR_14->update_flags);


 VAR_15->activate_flg =
  FUNC_1(VAR_0, &VAR_14->update_flags);
 VAR_15->activate_change_flg =
  FUNC_1(VAR_1, &VAR_14->update_flags);


 VAR_15->default_vlan_enable_flg =
  FUNC_1(VAR_4, &VAR_14->update_flags);
 VAR_15->default_vlan_change_flg =
  FUNC_1(VAR_5,
    &VAR_14->update_flags);


 VAR_15->silent_vlan_change_flg =
  FUNC_1(VAR_11,
    &VAR_14->update_flags);
 VAR_15->silent_vlan_removal_flg =
  FUNC_1(VAR_10, &VAR_14->update_flags);
 VAR_15->silent_vlan_value = FUNC_0(VAR_14->silent_removal_value);
 VAR_15->silent_vlan_mask = FUNC_0(VAR_14->silent_removal_mask);
}
