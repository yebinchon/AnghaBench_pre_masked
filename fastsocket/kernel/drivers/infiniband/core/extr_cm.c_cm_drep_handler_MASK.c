
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * private_data; } ;
struct cm_work {int list; TYPE_3__ cm_event; TYPE_2__* mad_recv_wc; } ;
struct TYPE_12__ {TYPE_5__* port; } ;
struct TYPE_10__ {scalar_t__ state; } ;
struct cm_id_private {int lock; int work_list; int work_count; int msg; TYPE_6__ av; TYPE_4__ id; } ;
struct cm_drep_msg {int private_data; int local_comm_id; int remote_comm_id; } ;
struct TYPE_11__ {int mad_agent; } ;
struct TYPE_7__ {scalar_t__ mad; } ;
struct TYPE_8__ {TYPE_1__ recv_buf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 struct cm_id_private* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct cm_id_private*) ;
 int FUNC_3 (struct cm_id_private*) ;
 int FUNC_4 (struct cm_id_private*,struct cm_work*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct cm_work *VAR_3)
{
 struct cm_id_private *VAR_4;
 struct cm_drep_msg *VAR_5;
 int VAR_6;

 VAR_5 = (struct cm_drep_msg *)VAR_3->mad_recv_wc->recv_buf.mad;
 VAR_4 = FUNC_1(VAR_5->remote_comm_id,
       VAR_5->local_comm_id);
 if (!VAR_4)
  return -VAR_0;

 VAR_3->cm_event.private_data = &VAR_5->private_data;

 FUNC_7(&VAR_4->lock);
 if (VAR_4->id.state != VAR_2 &&
     VAR_4->id.state != VAR_1) {
  FUNC_8(&VAR_4->lock);
  goto out;
 }
 FUNC_3(VAR_4);

 FUNC_5(VAR_4->av.port->mad_agent, VAR_4->msg);
 VAR_6 = FUNC_0(&VAR_4->work_count);
 if (!VAR_6)
  FUNC_6(&VAR_3->list, &VAR_4->work_list);
 FUNC_8(&VAR_4->lock);

 if (VAR_6)
  FUNC_4(VAR_4, VAR_3);
 else
  FUNC_2(VAR_4);
 return 0;
out:
 FUNC_2(VAR_4);
 return -VAR_0;
}
