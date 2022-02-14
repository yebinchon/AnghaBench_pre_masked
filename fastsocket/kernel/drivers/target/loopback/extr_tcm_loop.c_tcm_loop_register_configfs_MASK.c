
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * fabric_drop_np; int * fabric_make_np; int * fabric_pre_unlink; int * fabric_post_link; int * fabric_drop_tpg; int * fabric_make_tpg; int * fabric_drop_wwn; int * fabric_make_wwn; int * queue_tm_rsp; int * queue_status; int * queue_data_in; int * get_cmd_state; int * get_task_tag; int * set_default_node_attributes; int * write_pending_status; int * write_pending; int * sess_get_initiator_sid; int * sess_get_index; int * close_session; int * shutdown_session; int * release_cmd; int * check_stop_free; int * tpg_get_inst_index; int * tpg_release_fabric_acl; int * tpg_alloc_fabric_acl; int * tpg_check_prod_mode_write_protect; int * tpg_check_demo_mode_write_protect; int * tpg_check_demo_mode_cache; int * tpg_check_demo_mode; int * tpg_parse_pr_out_transport_id; int * tpg_get_pr_transport_id_len; int * tpg_get_pr_transport_id; int * tpg_get_default_depth; int * tpg_get_tag; int * tpg_get_wwn; int * get_fabric_proto_ident; int * get_fabric_name; } ;
struct target_fabric_configfs {TYPE_1__ tf_ops; } ;
struct TYPE_13__ {int * ct_attrs; } ;
struct TYPE_12__ {int * ct_attrs; } ;
struct TYPE_11__ {int * ct_attrs; } ;
struct TYPE_10__ {int ct_attrs; } ;
struct TYPE_9__ {int ct_attrs; } ;
struct TYPE_14__ {TYPE_6__ tfc_tpg_np_base_cit; TYPE_5__ tfc_tpg_param_cit; TYPE_4__ tfc_tpg_attrib_cit; TYPE_3__ tfc_tpg_base_cit; TYPE_2__ tfc_wwn_cit; } ;


 scalar_t__ FUNC_0 (struct target_fabric_configfs*) ;
 int FUNC_1 (struct target_fabric_configfs*) ;
 TYPE_7__* FUNC_2 (struct target_fabric_configfs*) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct target_fabric_configfs*) ;
 struct target_fabric_configfs* FUNC_6 (int ,char*) ;
 int FUNC_7 (struct target_fabric_configfs*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct target_fabric_configfs* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;

__attribute__((used)) static int FUNC_8(void)
{
 struct target_fabric_configfs *VAR_39;
 int VAR_40;



 VAR_20 = 0;



 VAR_39 = FUNC_6(VAR_0, "loopback");
 if (FUNC_0(VAR_39)) {
  FUNC_4("tcm_loop_register_configfs() failed!\n");
  return FUNC_1(VAR_39);
 }



 VAR_39->tf_ops.get_fabric_name = &VAR_13;
 VAR_39->tf_ops.get_fabric_proto_ident = &VAR_14;
 VAR_39->tf_ops.tpg_get_wwn = &VAR_12;
 VAR_39->tf_ops.tpg_get_tag = &VAR_18;
 VAR_39->tf_ops.tpg_get_default_depth = &VAR_11;
 VAR_39->tf_ops.tpg_get_pr_transport_id = &VAR_16;
 VAR_39->tf_ops.tpg_get_pr_transport_id_len =
     &VAR_17;
 VAR_39->tf_ops.tpg_parse_pr_out_transport_id =
     &VAR_23;
 VAR_39->tf_ops.tpg_check_demo_mode = &VAR_1;
 VAR_39->tf_ops.tpg_check_demo_mode_cache =
     &VAR_2;
 VAR_39->tf_ops.tpg_check_demo_mode_write_protect =
     &VAR_3;
 VAR_39->tf_ops.tpg_check_prod_mode_write_protect =
     &VAR_4;





 VAR_39->tf_ops.tpg_alloc_fabric_acl = &VAR_33;
 VAR_39->tf_ops.tpg_release_fabric_acl =
     &VAR_35;
 VAR_39->tf_ops.tpg_get_inst_index = &VAR_15;



 VAR_39->tf_ops.check_stop_free = &VAR_5;
 VAR_39->tf_ops.release_cmd = &VAR_29;
 VAR_39->tf_ops.shutdown_session = &VAR_32;
 VAR_39->tf_ops.close_session = &VAR_6;
 VAR_39->tf_ops.sess_get_index = &VAR_30;
 VAR_39->tf_ops.sess_get_initiator_sid = ((void*)0);
 VAR_39->tf_ops.write_pending = &VAR_36;
 VAR_39->tf_ops.write_pending_status = &VAR_37;



 VAR_39->tf_ops.set_default_node_attributes =
     &VAR_31;
 VAR_39->tf_ops.get_task_tag = &VAR_19;
 VAR_39->tf_ops.get_cmd_state = &VAR_10;
 VAR_39->tf_ops.queue_data_in = &VAR_26;
 VAR_39->tf_ops.queue_status = &VAR_27;
 VAR_39->tf_ops.queue_tm_rsp = &VAR_28;




 VAR_39->tf_ops.fabric_make_wwn = &VAR_22;
 VAR_39->tf_ops.fabric_drop_wwn = &VAR_8;
 VAR_39->tf_ops.fabric_make_tpg = &VAR_21;
 VAR_39->tf_ops.fabric_drop_tpg = &VAR_7;




 VAR_39->tf_ops.fabric_post_link = &VAR_24;
 VAR_39->tf_ops.fabric_pre_unlink = &VAR_25;
 VAR_39->tf_ops.fabric_make_np = ((void*)0);
 VAR_39->tf_ops.fabric_drop_np = ((void*)0);



 FUNC_2(VAR_39)->tfc_wwn_cit.ct_attrs = VAR_38;
 FUNC_2(VAR_39)->tfc_tpg_base_cit.ct_attrs = VAR_34;
 FUNC_2(VAR_39)->tfc_tpg_attrib_cit.ct_attrs = ((void*)0);
 FUNC_2(VAR_39)->tfc_tpg_param_cit.ct_attrs = ((void*)0);
 FUNC_2(VAR_39)->tfc_tpg_np_base_cit.ct_attrs = ((void*)0);




 VAR_40 = FUNC_7(VAR_39);
 if (VAR_40 < 0) {
  FUNC_4("target_fabric_configfs_register() for"
    " TCM_Loop failed!\n");
  FUNC_5(VAR_39);
  return -1;
 }



 VAR_9 = VAR_39;
 FUNC_3("TCM_LOOP[0] - Set fabric ->"
   " tcm_loop_fabric_configfs\n");
 return 0;
}
