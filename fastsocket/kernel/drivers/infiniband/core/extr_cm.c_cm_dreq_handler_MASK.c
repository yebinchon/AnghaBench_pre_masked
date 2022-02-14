
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


struct ib_mad_send_buf {scalar_t__ mad; } ;
struct TYPE_13__ {int * private_data; } ;
struct cm_work {int list; TYPE_8__* port; TYPE_9__* mad_recv_wc; TYPE_2__ cm_event; } ;
struct TYPE_17__ {int state; int lap_state; } ;
struct TYPE_15__ {TYPE_3__* port; } ;
struct cm_id_private {scalar_t__ local_qpn; int lock; int work_list; int work_count; int tid; TYPE_6__ id; int private_data_len; int private_data; int msg; TYPE_4__ av; } ;
struct TYPE_18__ {int tid; } ;
struct cm_dreq_msg {TYPE_7__ hdr; int private_data; int local_comm_id; int remote_comm_id; } ;
struct cm_drep_msg {int dummy; } ;
struct TYPE_12__ {scalar_t__ mad; } ;
struct TYPE_20__ {TYPE_1__ recv_buf; } ;
struct TYPE_19__ {TYPE_5__* counter_group; } ;
struct TYPE_16__ {int * counter; } ;
struct TYPE_14__ {int mad_agent; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct cm_id_private* FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_8__*,TYPE_9__*,struct ib_mad_send_buf**) ;
 int FUNC_4 (struct cm_id_private*) ;
 scalar_t__ FUNC_5 (struct cm_dreq_msg*) ;
 int FUNC_6 (struct cm_drep_msg*,struct cm_id_private*,int ,int ) ;
 int FUNC_7 (struct ib_mad_send_buf*) ;
 int FUNC_8 (TYPE_8__*,TYPE_9__*) ;
 int FUNC_9 (struct cm_id_private*,struct cm_work*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct ib_mad_send_buf*,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct cm_work *VAR_5)
{
 struct cm_id_private *VAR_6;
 struct cm_dreq_msg *VAR_7;
 struct ib_mad_send_buf *VAR_8 = ((void*)0);
 int VAR_9;

 VAR_7 = (struct cm_dreq_msg *)VAR_5->mad_recv_wc->recv_buf.mad;
 VAR_6 = FUNC_2(VAR_7->remote_comm_id,
       VAR_7->local_comm_id);
 if (!VAR_6) {
  FUNC_1(&VAR_5->port->counter_group[VAR_1].
    counter[VAR_0]);
  FUNC_8(VAR_5->port, VAR_5->mad_recv_wc);
  return -VAR_2;
 }

 VAR_5->cm_event.private_data = &VAR_7->private_data;

 FUNC_13(&VAR_6->lock);
 if (VAR_6->local_qpn != FUNC_5(VAR_7))
  goto unlock;

 switch (VAR_6->id.state) {
 case 129:
 case 132:
  FUNC_10(VAR_6->av.port->mad_agent, VAR_6->msg);
  break;
 case 131:
  if (VAR_6->id.lap_state == VAR_3 ||
      VAR_6->id.lap_state == VAR_4)
   FUNC_10(VAR_6->av.port->mad_agent, VAR_6->msg);
  break;
 case 130:
  break;
 case 128:
  FUNC_1(&VAR_5->port->counter_group[VAR_1].
    counter[VAR_0]);
  if (FUNC_3(VAR_5->port, VAR_5->mad_recv_wc, &VAR_8))
   goto unlock;

  FUNC_6((struct cm_drep_msg *) VAR_8->mad, VAR_6,
          VAR_6->private_data,
          VAR_6->private_data_len);
  FUNC_14(&VAR_6->lock);

  if (FUNC_11(VAR_8, ((void*)0)))
   FUNC_7(VAR_8);
  goto deref;
 case 133:
  FUNC_1(&VAR_5->port->counter_group[VAR_1].
    counter[VAR_0]);
  goto unlock;
 default:
  goto unlock;
 }
 VAR_6->id.state = 133;
 VAR_6->tid = VAR_7->hdr.tid;
 VAR_9 = FUNC_0(&VAR_6->work_count);
 if (!VAR_9)
  FUNC_12(&VAR_5->list, &VAR_6->work_list);
 FUNC_14(&VAR_6->lock);

 if (VAR_9)
  FUNC_9(VAR_6, VAR_5);
 else
  FUNC_4(VAR_6);
 return 0;

unlock: FUNC_14(&VAR_6->lock);
deref: FUNC_4(VAR_6);
 return -VAR_2;
}
