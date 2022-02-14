
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int * private_data; } ;
struct cm_work {int list; TYPE_5__* port; TYPE_3__ cm_event; TYPE_2__* mad_recv_wc; } ;
struct cm_rtu_msg {int private_data; int local_comm_id; int remote_comm_id; } ;
struct TYPE_16__ {TYPE_7__* port; } ;
struct TYPE_14__ {scalar_t__ state; } ;
struct cm_id_private {int lock; int work_list; int work_count; int msg; TYPE_8__ av; TYPE_6__ id; } ;
struct TYPE_15__ {int mad_agent; } ;
struct TYPE_13__ {TYPE_4__* counter_group; } ;
struct TYPE_12__ {int * counter; } ;
struct TYPE_9__ {scalar_t__ mad; } ;
struct TYPE_10__ {TYPE_1__ recv_buf; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct cm_id_private* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct cm_id_private*) ;
 int FUNC_4 (struct cm_id_private*,struct cm_work*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct cm_work *VAR_6)
{
 struct cm_id_private *VAR_7;
 struct cm_rtu_msg *VAR_8;
 int VAR_9;

 VAR_8 = (struct cm_rtu_msg *)VAR_6->mad_recv_wc->recv_buf.mad;
 VAR_7 = FUNC_2(VAR_8->remote_comm_id,
       VAR_8->local_comm_id);
 if (!VAR_7)
  return -VAR_2;

 VAR_6->cm_event.private_data = &VAR_8->private_data;

 FUNC_7(&VAR_7->lock);
 if (VAR_7->id.state != VAR_5 &&
     VAR_7->id.state != VAR_4) {
  FUNC_8(&VAR_7->lock);
  FUNC_1(&VAR_6->port->counter_group[VAR_0].
    counter[VAR_1]);
  goto out;
 }
 VAR_7->id.state = VAR_3;

 FUNC_5(VAR_7->av.port->mad_agent, VAR_7->msg);
 VAR_9 = FUNC_0(&VAR_7->work_count);
 if (!VAR_9)
  FUNC_6(&VAR_6->list, &VAR_7->work_list);
 FUNC_8(&VAR_7->lock);

 if (VAR_9)
  FUNC_4(VAR_7, VAR_6);
 else
  FUNC_3(VAR_7);
 return 0;
out:
 FUNC_3(VAR_7);
 return -VAR_2;
}
