
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_core_fabric_ops {int fabric_drop_tpg; int fabric_make_tpg; int fabric_drop_wwn; int fabric_make_wwn; int queue_tm_rsp; int queue_status; int queue_data_in; int get_cmd_state; int get_task_tag; int set_default_node_attributes; int write_pending_status; int write_pending; int sess_get_index; int close_session; int shutdown_session; int release_cmd; int tpg_get_inst_index; int tpg_release_fabric_acl; int tpg_alloc_fabric_acl; int tpg_check_prod_mode_write_protect; int tpg_check_demo_mode_write_protect; int tpg_check_demo_mode_cache; int tpg_check_demo_mode; int tpg_get_pr_transport_id_len; int tpg_get_pr_transport_id; int tpg_get_default_depth; int tpg_get_tag; int tpg_get_wwn; int get_fabric_proto_ident; int get_fabric_name; } ;
struct target_fabric_configfs {struct target_core_fabric_ops tf_ops; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(
 struct target_fabric_configfs *VAR_1)
{
 struct target_core_fabric_ops *VAR_2 = &VAR_1->tf_ops;

 if (!VAR_2->get_fabric_name) {
  FUNC_0("Missing tfo->get_fabric_name()\n");
  return -VAR_0;
 }
 if (!VAR_2->get_fabric_proto_ident) {
  FUNC_0("Missing tfo->get_fabric_proto_ident()\n");
  return -VAR_0;
 }
 if (!VAR_2->tpg_get_wwn) {
  FUNC_0("Missing tfo->tpg_get_wwn()\n");
  return -VAR_0;
 }
 if (!VAR_2->tpg_get_tag) {
  FUNC_0("Missing tfo->tpg_get_tag()\n");
  return -VAR_0;
 }
 if (!VAR_2->tpg_get_default_depth) {
  FUNC_0("Missing tfo->tpg_get_default_depth()\n");
  return -VAR_0;
 }
 if (!VAR_2->tpg_get_pr_transport_id) {
  FUNC_0("Missing tfo->tpg_get_pr_transport_id()\n");
  return -VAR_0;
 }
 if (!VAR_2->tpg_get_pr_transport_id_len) {
  FUNC_0("Missing tfo->tpg_get_pr_transport_id_len()\n");
  return -VAR_0;
 }
 if (!VAR_2->tpg_check_demo_mode) {
  FUNC_0("Missing tfo->tpg_check_demo_mode()\n");
  return -VAR_0;
 }
 if (!VAR_2->tpg_check_demo_mode_cache) {
  FUNC_0("Missing tfo->tpg_check_demo_mode_cache()\n");
  return -VAR_0;
 }
 if (!VAR_2->tpg_check_demo_mode_write_protect) {
  FUNC_0("Missing tfo->tpg_check_demo_mode_write_protect()\n");
  return -VAR_0;
 }
 if (!VAR_2->tpg_check_prod_mode_write_protect) {
  FUNC_0("Missing tfo->tpg_check_prod_mode_write_protect()\n");
  return -VAR_0;
 }
 if (!VAR_2->tpg_alloc_fabric_acl) {
  FUNC_0("Missing tfo->tpg_alloc_fabric_acl()\n");
  return -VAR_0;
 }
 if (!VAR_2->tpg_release_fabric_acl) {
  FUNC_0("Missing tfo->tpg_release_fabric_acl()\n");
  return -VAR_0;
 }
 if (!VAR_2->tpg_get_inst_index) {
  FUNC_0("Missing tfo->tpg_get_inst_index()\n");
  return -VAR_0;
 }
 if (!VAR_2->release_cmd) {
  FUNC_0("Missing tfo->release_cmd()\n");
  return -VAR_0;
 }
 if (!VAR_2->shutdown_session) {
  FUNC_0("Missing tfo->shutdown_session()\n");
  return -VAR_0;
 }
 if (!VAR_2->close_session) {
  FUNC_0("Missing tfo->close_session()\n");
  return -VAR_0;
 }
 if (!VAR_2->sess_get_index) {
  FUNC_0("Missing tfo->sess_get_index()\n");
  return -VAR_0;
 }
 if (!VAR_2->write_pending) {
  FUNC_0("Missing tfo->write_pending()\n");
  return -VAR_0;
 }
 if (!VAR_2->write_pending_status) {
  FUNC_0("Missing tfo->write_pending_status()\n");
  return -VAR_0;
 }
 if (!VAR_2->set_default_node_attributes) {
  FUNC_0("Missing tfo->set_default_node_attributes()\n");
  return -VAR_0;
 }
 if (!VAR_2->get_task_tag) {
  FUNC_0("Missing tfo->get_task_tag()\n");
  return -VAR_0;
 }
 if (!VAR_2->get_cmd_state) {
  FUNC_0("Missing tfo->get_cmd_state()\n");
  return -VAR_0;
 }
 if (!VAR_2->queue_data_in) {
  FUNC_0("Missing tfo->queue_data_in()\n");
  return -VAR_0;
 }
 if (!VAR_2->queue_status) {
  FUNC_0("Missing tfo->queue_status()\n");
  return -VAR_0;
 }
 if (!VAR_2->queue_tm_rsp) {
  FUNC_0("Missing tfo->queue_tm_rsp()\n");
  return -VAR_0;
 }





 if (!VAR_2->fabric_make_wwn) {
  FUNC_0("Missing tfo->fabric_make_wwn()\n");
  return -VAR_0;
 }
 if (!VAR_2->fabric_drop_wwn) {
  FUNC_0("Missing tfo->fabric_drop_wwn()\n");
  return -VAR_0;
 }
 if (!VAR_2->fabric_make_tpg) {
  FUNC_0("Missing tfo->fabric_make_tpg()\n");
  return -VAR_0;
 }
 if (!VAR_2->fabric_drop_tpg) {
  FUNC_0("Missing tfo->fabric_drop_tpg()\n");
  return -VAR_0;
 }

 return 0;
}
