
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ib_mad_send_buf {scalar_t__ mad; } ;
struct cm_work {TYPE_5__* mad_recv_wc; TYPE_4__* port; } ;
struct cm_rtu_msg {int dummy; } ;
struct cm_rep_msg {int local_comm_id; int remote_comm_id; } ;
struct cm_mra_msg {int dummy; } ;
struct TYPE_8__ {scalar_t__ state; } ;
struct cm_id_private {int lock; int private_data_len; int private_data; int service_timeout; TYPE_3__ id; } ;
struct TYPE_6__ {scalar_t__ mad; } ;
struct TYPE_10__ {TYPE_1__ recv_buf; } ;
struct TYPE_9__ {TYPE_2__* counter_group; } ;
struct TYPE_7__ {int * counter; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 struct cm_id_private* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_5__*,struct ib_mad_send_buf**) ;
 int FUNC_3 (struct cm_id_private*) ;
 int FUNC_4 (struct cm_mra_msg*,struct cm_id_private*,int ,int ,int ,int ) ;
 int FUNC_5 (struct cm_rtu_msg*,struct cm_id_private*,int ,int ) ;
 int FUNC_6 (struct ib_mad_send_buf*) ;
 int FUNC_7 (struct ib_mad_send_buf*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct cm_work *VAR_5)
{
 struct cm_id_private *VAR_6;
 struct cm_rep_msg *VAR_7;
 struct ib_mad_send_buf *VAR_8 = ((void*)0);
 int VAR_9;

 VAR_7 = (struct cm_rep_msg *) VAR_5->mad_recv_wc->recv_buf.mad;
 VAR_6 = FUNC_1(VAR_7->remote_comm_id,
       VAR_7->local_comm_id);
 if (!VAR_6)
  return;

 FUNC_0(&VAR_5->port->counter_group[VAR_1].
   counter[VAR_2]);
 VAR_9 = FUNC_2(VAR_5->port, VAR_5->mad_recv_wc, &VAR_8);
 if (VAR_9)
  goto deref;

 FUNC_8(&VAR_6->lock);
 if (VAR_6->id.state == VAR_3)
  FUNC_5((struct cm_rtu_msg *) VAR_8->mad, VAR_6,
         VAR_6->private_data,
         VAR_6->private_data_len);
 else if (VAR_6->id.state == VAR_4)
  FUNC_4((struct cm_mra_msg *) VAR_8->mad, VAR_6,
         VAR_0, VAR_6->service_timeout,
         VAR_6->private_data,
         VAR_6->private_data_len);
 else
  goto unlock;
 FUNC_9(&VAR_6->lock);

 VAR_9 = FUNC_7(VAR_8, ((void*)0));
 if (VAR_9)
  goto free;
 goto deref;

unlock: FUNC_9(&VAR_6->lock);
free: FUNC_6(VAR_8);
deref: FUNC_3(VAR_6);
}
