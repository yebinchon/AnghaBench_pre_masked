
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int activate_gru_mq_desc_gpa; int heartbeat_gpa; } ;
struct TYPE_10__ {TYPE_1__ uv; } ;
struct xpc_rsvd_page {short SAL_partid; TYPE_2__ sn; int ts_jiffies; } ;
struct TYPE_11__ {scalar_t__ remote_act_state; int activate_gru_mq_desc_gpa; int heartbeat_gpa; } ;
struct TYPE_12__ {TYPE_3__ uv; } ;
struct xpc_partition {unsigned long remote_rp_pa; scalar_t__ act_state; TYPE_4__ sn; int remote_rp_ts_jiffies; } ;
struct xpc_activate_mq_msg_activate_req_uv {int activate_gru_mq_desc_gpa; int heartbeat_gpa; int rp_gpa; } ;
typedef int msg ;
struct TYPE_13__ {int activate_gru_mq_desc_gpa; int heartbeat_gpa; } ;
struct TYPE_14__ {TYPE_5__ uv; } ;
struct TYPE_15__ {TYPE_6__ sn; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_7__*) ;
 struct xpc_partition* VAR_3 ;
 TYPE_7__* VAR_4 ;
 int FUNC_1 (struct xpc_partition*,struct xpc_activate_mq_msg_activate_req_uv*,int,int ) ;
 int FUNC_2 (struct xpc_partition*,int ) ;

__attribute__((used)) static void
FUNC_3(struct xpc_rsvd_page *VAR_5,
        unsigned long VAR_6, int VAR_7)
{
 short VAR_8 = VAR_5->SAL_partid;
 struct xpc_partition *VAR_9 = &VAR_3[VAR_8];
 struct xpc_activate_mq_msg_activate_req_uv VAR_10;

 VAR_9->remote_rp_pa = VAR_6;
 VAR_9->remote_rp_ts_jiffies = VAR_5->ts_jiffies;
 VAR_9->sn.uv.heartbeat_gpa = VAR_5->sn.uv.heartbeat_gpa;
 VAR_9->sn.uv.activate_gru_mq_desc_gpa =
     VAR_5->sn.uv.activate_gru_mq_desc_gpa;





 if (VAR_9->sn.uv.remote_act_state == VAR_2) {
  VAR_10.rp_gpa = FUNC_0(VAR_4);
  VAR_10.heartbeat_gpa = VAR_4->sn.uv.heartbeat_gpa;
  VAR_10.activate_gru_mq_desc_gpa =
      VAR_4->sn.uv.activate_gru_mq_desc_gpa;
  FUNC_1(VAR_9, &VAR_10, sizeof(VAR_10),
        VAR_0);
 }

 if (VAR_9->act_state == VAR_2)
  FUNC_2(VAR_9, VAR_1);
}
