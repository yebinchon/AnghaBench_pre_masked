
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int uint32_t ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_type; } ;
struct TYPE_19__ {int data_size; int hdr_size; int cid; int sid; } ;
struct TYPE_18__ {int flag; int cid; int sid; } ;
struct TYPE_16__ {int cid; int sid; } ;
struct TYPE_15__ {int transport_eph; int is_leading; int cid; int sid; } ;
struct TYPE_14__ {int sid; } ;
struct TYPE_13__ {int queue_depth; int cmds_max; int initial_cmdsn; int ep_handle; } ;
struct TYPE_12__ {int queue_depth; int cmds_max; int initial_cmdsn; } ;
struct TYPE_20__ {TYPE_8__ send_pdu; TYPE_7__ stop_conn; TYPE_5__ start_conn; TYPE_4__ b_conn; TYPE_3__ d_session; TYPE_2__ c_bound_session; TYPE_1__ c_session; } ;
struct TYPE_17__ {int retcode; } ;
struct iscsi_uevent {TYPE_9__ u; TYPE_6__ r; int transport_handle; } ;
struct iscsi_transport {int owner; int (* send_pdu ) (struct iscsi_cls_conn*,struct iscsi_hdr*,char*,int ) ;int (* stop_conn ) (struct iscsi_cls_conn*,int ) ;int (* start_conn ) (struct iscsi_cls_conn*) ;int ep_connect; int (* bind_conn ) (struct iscsi_cls_session*,struct iscsi_cls_conn*,int ,int ) ;int (* destroy_session ) (struct iscsi_cls_session*) ;} ;
struct iscsi_internal {struct iscsi_transport* iscsi_transport; } ;
struct iscsi_hdr {int dummy; } ;
struct iscsi_endpoint {struct iscsi_cls_conn* conn; int id; } ;
struct iscsi_cls_session {int unbind_work; } ;
struct iscsi_cls_conn {int ep_mutex; struct iscsi_endpoint* ep; } ;
struct TYPE_11__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_10__ FUNC_0 (struct sk_buff*) ;
 struct iscsi_uevent* FUNC_1 (struct nlmsghdr*) ;
 int FUNC_2 (int ,struct iscsi_cls_conn*,char*) ;
 struct iscsi_cls_conn* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct iscsi_transport*,struct iscsi_uevent*) ;
 int FUNC_5 (struct iscsi_transport*,struct iscsi_uevent*) ;
 int FUNC_6 (struct iscsi_transport*,struct nlmsghdr*) ;
 int FUNC_7 (struct iscsi_transport*,struct iscsi_uevent*) ;
 int FUNC_8 (struct iscsi_internal*,struct iscsi_endpoint*,struct iscsi_uevent*,int ,int ,int ,int ) ;
 int FUNC_9 (struct iscsi_transport*,struct iscsi_uevent*) ;
 int FUNC_10 (struct iscsi_transport*,int ) ;
 int FUNC_11 (struct iscsi_transport*,struct nlmsghdr*) ;
 int FUNC_12 (struct iscsi_transport*,struct iscsi_uevent*,int) ;
 struct iscsi_internal* FUNC_13 (int ) ;
 int FUNC_14 (struct iscsi_transport*,struct iscsi_uevent*) ;
 int FUNC_15 (struct iscsi_transport*,struct iscsi_uevent*) ;
 int FUNC_16 (struct iscsi_transport*,struct iscsi_uevent*) ;
 struct iscsi_endpoint* FUNC_17 (int ) ;
 int FUNC_18 (struct iscsi_transport*,struct iscsi_uevent*,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct iscsi_transport*,struct iscsi_uevent*) ;
 struct iscsi_cls_session* FUNC_21 (int ) ;
 int FUNC_22 (struct iscsi_cls_session*) ;
 int FUNC_23 (struct iscsi_transport*,struct iscsi_uevent*,int ) ;
 int FUNC_24 (struct iscsi_transport*,struct iscsi_uevent*) ;
 int FUNC_25 (struct iscsi_transport*,struct iscsi_uevent*,int ) ;
 int FUNC_26 (struct iscsi_transport*,struct iscsi_uevent*) ;
 int FUNC_27 (struct iscsi_transport*,struct iscsi_uevent*) ;
 int FUNC_28 (struct iscsi_transport*,struct iscsi_uevent*) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (struct nlmsghdr*,int) ;
 int FUNC_33 (int ,int *) ;
 int FUNC_34 (struct iscsi_cls_session*) ;
 int FUNC_35 (struct iscsi_cls_session*,struct iscsi_cls_conn*,int ,int ) ;
 int FUNC_36 (struct iscsi_cls_conn*) ;
 int FUNC_37 (struct iscsi_cls_conn*,int ) ;
 int FUNC_38 (struct iscsi_cls_conn*,struct iscsi_hdr*,char*,int ) ;
 int FUNC_39 (int ) ;

__attribute__((used)) static int
FUNC_40(struct sk_buff *VAR_5, struct nlmsghdr *VAR_6, uint32_t *VAR_7)
{
 int VAR_8 = 0;
 struct iscsi_uevent *VAR_9 = FUNC_1(VAR_6);
 struct iscsi_transport *VAR_10 = ((void*)0);
 struct iscsi_internal *VAR_11;
 struct iscsi_cls_session *VAR_12;
 struct iscsi_cls_conn *VAR_13;
 struct iscsi_endpoint *VAR_14 = ((void*)0);

 if (VAR_6->nlmsg_type == 142)
  *VAR_7 = VAR_3;
 else
  *VAR_7 = VAR_2;

 VAR_11 = FUNC_13(FUNC_19(VAR_9->transport_handle));
 if (!VAR_11)
  return -VAR_0;
 VAR_10 = VAR_11->iscsi_transport;

 if (!FUNC_39(VAR_10->owner))
  return -VAR_0;

 switch (VAR_6->nlmsg_type) {
 case 153:
  VAR_8 = FUNC_8(VAR_11, VAR_14, VAR_9,
           FUNC_0(VAR_5).pid,
           VAR_9->u.c_session.initial_cmdsn,
           VAR_9->u.c_session.cmds_max,
           VAR_9->u.c_session.queue_depth);
  break;
 case 155:
  VAR_14 = FUNC_17(VAR_9->u.c_bound_session.ep_handle);
  if (!VAR_14) {
   VAR_8 = -VAR_0;
   break;
  }

  VAR_8 = FUNC_8(VAR_11, VAR_14, VAR_9,
     FUNC_0(VAR_5).pid,
     VAR_9->u.c_bound_session.initial_cmdsn,
     VAR_9->u.c_bound_session.cmds_max,
     VAR_9->u.c_bound_session.queue_depth);
  break;
 case 149:
  VAR_12 = FUNC_21(VAR_9->u.d_session.sid);
  if (VAR_12)
   VAR_10->destroy_session(VAR_12);
  else
   VAR_8 = -VAR_0;
  break;
 case 128:
  VAR_12 = FUNC_21(VAR_9->u.d_session.sid);
  if (VAR_12)
   FUNC_33(FUNC_22(VAR_12),
     &VAR_12->unbind_work);
  else
   VAR_8 = -VAR_0;
  break;
 case 154:
  VAR_8 = FUNC_7(VAR_10, VAR_9);
  break;
 case 150:
  VAR_8 = FUNC_9(VAR_10, VAR_9);
  break;
 case 156:
  VAR_12 = FUNC_21(VAR_9->u.b_conn.sid);
  VAR_13 = FUNC_3(VAR_9->u.b_conn.sid, VAR_9->u.b_conn.cid);

  if (VAR_13 && VAR_13->ep)
   FUNC_10(VAR_10, VAR_13->ep->id);

  if (!VAR_12 || !VAR_13) {
   VAR_8 = -VAR_0;
   break;
  }

  VAR_9->r.retcode = VAR_10->bind_conn(VAR_12, VAR_13,
      VAR_9->u.b_conn.transport_eph,
      VAR_9->u.b_conn.is_leading);
  if (VAR_9->r.retcode || !VAR_10->ep_connect)
   break;

  VAR_14 = FUNC_17(VAR_9->u.b_conn.transport_eph);
  if (VAR_14) {
   VAR_14->conn = VAR_13;

   FUNC_30(&VAR_13->ep_mutex);
   VAR_13->ep = VAR_14;
   FUNC_31(&VAR_13->ep_mutex);
  } else
   FUNC_2(VAR_4, VAR_13,
           "Could not set ep conn "
           "binding\n");
  break;
 case 136:
  VAR_8 = FUNC_26(VAR_10, VAR_9);
  break;
 case 135:
  VAR_13 = FUNC_3(VAR_9->u.start_conn.sid, VAR_9->u.start_conn.cid);
  if (VAR_13)
   VAR_9->r.retcode = VAR_10->start_conn(VAR_13);
  else
   VAR_8 = -VAR_0;
  break;
 case 134:
  VAR_13 = FUNC_3(VAR_9->u.stop_conn.sid, VAR_9->u.stop_conn.cid);
  if (VAR_13)
   VAR_10->stop_conn(VAR_13, VAR_9->u.stop_conn.flag);
  else
   VAR_8 = -VAR_0;
  break;
 case 140:
  VAR_13 = FUNC_3(VAR_9->u.send_pdu.sid, VAR_9->u.send_pdu.cid);
  if (VAR_13)
   VAR_9->r.retcode = VAR_10->send_pdu(VAR_13,
    (struct iscsi_hdr*)((char*)VAR_9 + sizeof(*VAR_9)),
    (char*)VAR_9 + sizeof(*VAR_9) + VAR_9->u.send_pdu.hdr_size,
    VAR_9->u.send_pdu.data_size);
  else
   VAR_8 = -VAR_0;
  break;
 case 147:
  VAR_8 = FUNC_11(VAR_10, VAR_6);
  break;
 case 132:
 case 129:
 case 130:
 case 131:
  VAR_8 = FUNC_12(VAR_10, VAR_9, VAR_6->nlmsg_type);
  break;
 case 133:
  VAR_8 = FUNC_28(VAR_10, VAR_9);
  break;
 case 138:
  VAR_8 = FUNC_24(VAR_10, VAR_9);
  break;
 case 142:
  VAR_8 = FUNC_27(VAR_10, VAR_9);
  break;
 case 137:
  VAR_8 = FUNC_25(VAR_10, VAR_9,
          FUNC_32(VAR_6, sizeof(*VAR_9)));
  break;
 case 141:
  VAR_8 = FUNC_20(VAR_10, VAR_9);
  break;
 case 148:
  VAR_8 = FUNC_6(VAR_10, VAR_6);
  break;
 case 152:
  VAR_8 = FUNC_5(VAR_10, VAR_9);
  break;
 case 139:
  VAR_8 = FUNC_23(VAR_10, VAR_9,
      FUNC_32(VAR_6,
             sizeof(*VAR_9)));
  break;
 case 143:
  VAR_8 = FUNC_18(VAR_10, VAR_9,
       FUNC_32(VAR_6, sizeof(*VAR_9)));
  break;
 case 151:
  VAR_8 = FUNC_4(VAR_10, VAR_9);
  break;
 case 146:
  VAR_8 = FUNC_14(VAR_10, VAR_9);
  break;
 case 145:
  VAR_8 = FUNC_15(VAR_10, VAR_9);
  break;
 case 144:
  VAR_8 = FUNC_16(VAR_10, VAR_9);
  break;
 default:
  VAR_8 = -VAR_1;
  break;
 }

 FUNC_29(VAR_10->owner);
 return VAR_8;
}
