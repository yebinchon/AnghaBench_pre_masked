
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int discovery_parent_type; int portal_type; int boot_target; int boot_nic; int boot_root; int initiatorname; int ifacename; int tpgt; int targetalias; int targetname; int password_in; int password; int username_in; int username; int erl; int dataseq_inorder_en; int pdu_inorder_en; int max_burst; int first_burst; int imm_data_en; int max_r2t; int initial_r2t_en; int tgt_reset_timeout; int lu_reset_timeout; int abort_timeout; int fast_abort; } ;
struct iscsi_conn {int persistent_address; int persistent_port; int exp_statsn; int datadgst_en; int hdrdgst_en; int max_xmit_dlength; int max_recv_dlength; int recv_timeout; int ping_timeout; struct iscsi_session* session; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
typedef enum iscsi_param { ____Placeholder_iscsi_param } iscsi_param ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,char*,int *) ;

int FUNC_2(struct iscsi_cls_conn *VAR_1,
      enum iscsi_param VAR_2, char *VAR_3, int VAR_4)
{
 struct iscsi_conn *VAR_5 = VAR_1->dd_data;
 struct iscsi_session *VAR_6 = VAR_5->session;

 switch(VAR_2) {
 case 153:
  FUNC_1(VAR_3, "%d", &VAR_6->fast_abort);
  break;
 case 162:
  FUNC_1(VAR_3, "%d", &VAR_6->abort_timeout);
  break;
 case 146:
  FUNC_1(VAR_3, "%d", &VAR_6->lu_reset_timeout);
  break;
 case 131:
  FUNC_1(VAR_3, "%d", &VAR_6->tgt_reset_timeout);
  break;
 case 136:
  FUNC_1(VAR_3, "%d", &VAR_5->ping_timeout);
  break;
 case 134:
  FUNC_1(VAR_3, "%d", &VAR_5->recv_timeout);
  break;
 case 143:
  FUNC_1(VAR_3, "%d", &VAR_5->max_recv_dlength);
  break;
 case 142:
  FUNC_1(VAR_3, "%d", &VAR_5->max_xmit_dlength);
  break;
 case 151:
  FUNC_1(VAR_3, "%d", &VAR_5->hdrdgst_en);
  break;
 case 158:
  FUNC_1(VAR_3, "%d", &VAR_5->datadgst_en);
  break;
 case 148:
  FUNC_1(VAR_3, "%d", &VAR_6->initial_r2t_en);
  break;
 case 144:
  FUNC_1(VAR_3, "%hu", &VAR_6->max_r2t);
  break;
 case 149:
  FUNC_1(VAR_3, "%d", &VAR_6->imm_data_en);
  break;
 case 152:
  FUNC_1(VAR_3, "%d", &VAR_6->first_burst);
  break;
 case 145:
  FUNC_1(VAR_3, "%d", &VAR_6->max_burst);
  break;
 case 139:
  FUNC_1(VAR_3, "%d", &VAR_6->pdu_inorder_en);
  break;
 case 157:
  FUNC_1(VAR_3, "%d", &VAR_6->dataseq_inorder_en);
  break;
 case 155:
  FUNC_1(VAR_3, "%d", &VAR_6->erl);
  break;
 case 154:
  FUNC_1(VAR_3, "%u", &VAR_5->exp_statsn);
  break;
 case 129:
  return FUNC_0(&VAR_6->username, VAR_3);
 case 128:
  return FUNC_0(&VAR_6->username_in, VAR_3);
 case 141:
  return FUNC_0(&VAR_6->password, VAR_3);
 case 140:
  return FUNC_0(&VAR_6->password_in, VAR_3);
 case 132:
  return FUNC_0(&VAR_6->targetname, VAR_3);
 case 133:
  return FUNC_0(&VAR_6->targetalias, VAR_3);
 case 130:
  FUNC_1(VAR_3, "%d", &VAR_6->tpgt);
  break;
 case 137:
  FUNC_1(VAR_3, "%d", &VAR_5->persistent_port);
  break;
 case 138:
  return FUNC_0(&VAR_5->persistent_address, VAR_3);
 case 150:
  return FUNC_0(&VAR_6->ifacename, VAR_3);
 case 147:
  return FUNC_0(&VAR_6->initiatorname, VAR_3);
 case 160:
  return FUNC_0(&VAR_6->boot_root, VAR_3);
 case 161:
  return FUNC_0(&VAR_6->boot_nic, VAR_3);
 case 159:
  return FUNC_0(&VAR_6->boot_target, VAR_3);
 case 135:
  return FUNC_0(&VAR_6->portal_type, VAR_3);
 case 156:
  return FUNC_0(&VAR_6->discovery_parent_type,
           VAR_3);
 default:
  return -VAR_0;
 }

 return 0;
}
