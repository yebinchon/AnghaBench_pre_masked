
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef int uint16_t ;
struct iscsi_bus_flash_session {int auto_snd_tgt_disable; int discovery_sess; int entry_state; int imm_data_en; int initial_r2t_en; int dataseq_inorder_en; int pdu_inorder_en; int chap_auth_en; int discovery_logout_en; int bidi_chap_en; int discovery_auth_optional; int erl; int max_r2t; int first_burst; int max_burst; int time2wait; int time2retain; int tpgt; int discovery_parent_idx; int chap_out_idx; int tsid; int default_taskmgmt_timeout; int isid; scalar_t__ targetalias; scalar_t__ targetname; int portal_type; } ;
struct iscsi_bus_flash_conn {int is_fw_assigned_ipv6; int hdrdgst_en; int datadgst_en; int snack_req_en; int tcp_timestamp_stat; int tcp_nagle_disable; int tcp_wsf_disable; int tcp_timer_scale; int tcp_timestamp_en; int fragment_disable; int max_recv_dlength; int max_xmit_dlength; int max_segment_size; int ipv6_flow_label; int keepalive_timeout; int local_port; int port; scalar_t__ link_local_ipv6_addr; scalar_t__ redirect_ipaddr; scalar_t__ ipaddress; int ipv4_tos; int ipv6_traffic_class; int exp_statsn; int statsn; int tcp_recv_wsf; int tcp_xmit_wsf; } ;
struct dev_db_entry {int isid; int iscsi_alias; int iscsi_name; int link_local_ipv6_addr; int tgt_addr; int ip_addr; int ipv4_tos; void* def_timeout; void* port; void* tsid; void* chap_tbl_idx; void* ddb_link; void* exp_stat_sn; void* stat_sn; void* lcl_port; void* ka_timeout; void* ipv6_flow_lbl; void* tcp_rcv_wsf; void* tcp_xmt_wsf; void* mss; void* tgt_portal_grp; void* iscsi_def_time2retain; void* iscsi_def_time2wait; void* iscsi_max_burst_len; void* iscsi_first_burst_len; void* iscsi_max_snd_data_seg_len; void* iscsi_max_rcv_data_seg_len; void* iscsi_max_outsnd_r2t; void* ip_options; void* tcp_options; void* iscsi_options; void* options; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int ) ;
 int VAR_15 ;
 int FUNC_1 (int,int,int) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ,scalar_t__,int) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct iscsi_bus_flash_session *VAR_16,
           struct iscsi_bus_flash_conn *VAR_17,
           struct dev_db_entry *VAR_18)
{
 uint16_t VAR_19;
 int VAR_20 = 0;

 VAR_19 = FUNC_4(VAR_18->options);
 FUNC_1(VAR_17->is_fw_assigned_ipv6, VAR_19, VAR_3);
 if (!FUNC_6(VAR_16->portal_type, VAR_15, 4))
  VAR_19 |= VAR_12;
 else
  VAR_19 &= ~VAR_12;

 FUNC_1(VAR_16->auto_snd_tgt_disable, VAR_19, VAR_10);
 FUNC_1(VAR_16->discovery_sess, VAR_19, VAR_8);
 FUNC_1(VAR_16->entry_state, VAR_19, VAR_7);
 VAR_18->options = FUNC_2(VAR_19);

 VAR_19 = FUNC_4(VAR_18->iscsi_options);
 FUNC_1(VAR_17->hdrdgst_en, VAR_19, VAR_5);
 FUNC_1(VAR_17->datadgst_en, VAR_19, VAR_4);
 FUNC_1(VAR_16->imm_data_en, VAR_19, VAR_3);
 FUNC_1(VAR_16->initial_r2t_en, VAR_19, VAR_2);
 FUNC_1(VAR_16->dataseq_inorder_en, VAR_19, VAR_13);
 FUNC_1(VAR_16->pdu_inorder_en, VAR_19, VAR_12);
 FUNC_1(VAR_16->chap_auth_en, VAR_19, VAR_11);
 FUNC_1(VAR_17->snack_req_en, VAR_19, VAR_10);
 FUNC_1(VAR_16->discovery_logout_en, VAR_19, VAR_9);
 FUNC_1(VAR_16->bidi_chap_en, VAR_19, VAR_8);
 FUNC_1(VAR_16->discovery_auth_optional, VAR_19, VAR_7);
 FUNC_1(VAR_16->erl & VAR_1, VAR_19, VAR_1);
 FUNC_1(VAR_16->erl & VAR_0, VAR_19, VAR_0);
 VAR_18->iscsi_options = FUNC_2(VAR_19);

 VAR_19 = FUNC_4(VAR_18->tcp_options);
 FUNC_1(VAR_17->tcp_timestamp_stat, VAR_19, VAR_10);
 FUNC_1(VAR_17->tcp_nagle_disable, VAR_19, VAR_9);
 FUNC_1(VAR_17->tcp_wsf_disable, VAR_19, VAR_8);
 FUNC_1(VAR_17->tcp_timer_scale & VAR_6, VAR_19, VAR_7);
 FUNC_1(VAR_17->tcp_timer_scale & VAR_1, VAR_19, VAR_6);
 FUNC_1(VAR_17->tcp_timer_scale & VAR_0, VAR_19, VAR_1);
 FUNC_1(VAR_17->tcp_timestamp_en, VAR_19, VAR_0);
 VAR_18->tcp_options = FUNC_2(VAR_19);

 VAR_19 = FUNC_4(VAR_18->ip_options);
 FUNC_1(VAR_17->fragment_disable, VAR_19, VAR_8);
 VAR_18->ip_options = FUNC_2(VAR_19);

 VAR_18->iscsi_max_outsnd_r2t = FUNC_2(VAR_16->max_r2t);
 VAR_18->iscsi_max_rcv_data_seg_len =
          FUNC_2(VAR_17->max_recv_dlength / VAR_14);
 VAR_18->iscsi_max_snd_data_seg_len =
          FUNC_2(VAR_17->max_xmit_dlength / VAR_14);
 VAR_18->iscsi_first_burst_len =
    FUNC_2(VAR_16->first_burst / VAR_14);
 VAR_18->iscsi_max_burst_len = FUNC_2(VAR_16->max_burst /
         VAR_14);
 VAR_18->iscsi_def_time2wait = FUNC_2(VAR_16->time2wait);
 VAR_18->iscsi_def_time2retain = FUNC_2(VAR_16->time2retain);
 VAR_18->tgt_portal_grp = FUNC_2(VAR_16->tpgt);
 VAR_18->mss = FUNC_2(VAR_17->max_segment_size);
 VAR_18->tcp_xmt_wsf = (uint8_t) FUNC_3(VAR_17->tcp_xmit_wsf);
 VAR_18->tcp_rcv_wsf = (uint8_t) FUNC_3(VAR_17->tcp_recv_wsf);
 VAR_18->ipv6_flow_lbl = FUNC_2(VAR_17->ipv6_flow_label);
 VAR_18->ka_timeout = FUNC_2(VAR_17->keepalive_timeout);
 VAR_18->lcl_port = FUNC_2(VAR_17->local_port);
 VAR_18->stat_sn = FUNC_3(VAR_17->statsn);
 VAR_18->exp_stat_sn = FUNC_3(VAR_17->exp_statsn);
 VAR_18->ddb_link = FUNC_2(VAR_16->discovery_parent_idx);
 VAR_18->chap_tbl_idx = FUNC_2(VAR_16->chap_out_idx);
 VAR_18->tsid = FUNC_2(VAR_16->tsid);
 VAR_18->port = FUNC_2(VAR_17->port);
 VAR_18->def_timeout =
    FUNC_2(VAR_16->default_taskmgmt_timeout);

 if (!FUNC_6(VAR_16->portal_type, VAR_15, 4))
  VAR_18->ipv4_tos = VAR_17->ipv6_traffic_class;
 else
  VAR_18->ipv4_tos = VAR_17->ipv4_tos;

 if (VAR_17->ipaddress)
  FUNC_5(VAR_18->ip_addr, VAR_17->ipaddress,
         sizeof(VAR_18->ip_addr));

 if (VAR_17->redirect_ipaddr)
  FUNC_5(VAR_18->tgt_addr, VAR_17->redirect_ipaddr,
         sizeof(VAR_18->tgt_addr));

 if (VAR_17->link_local_ipv6_addr)
  FUNC_5(VAR_18->link_local_ipv6_addr,
         VAR_17->link_local_ipv6_addr,
         sizeof(VAR_18->link_local_ipv6_addr));

 if (VAR_16->targetname)
  FUNC_5(VAR_18->iscsi_name, VAR_16->targetname,
         sizeof(VAR_18->iscsi_name));

 if (VAR_16->targetalias)
  FUNC_5(VAR_18->iscsi_alias, VAR_16->targetalias,
         sizeof(VAR_18->iscsi_alias));

 FUNC_0(VAR_18->isid, VAR_16->isid);

 return VAR_20;
}
