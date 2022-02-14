
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cid; int pid; } ;
union rr_control_msg {TYPE_1__ cli; int cmd; } ;
struct msm_rpc_endpoint {int list; int read_q_wake_lock; int cid; int pid; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct msm_rpc_endpoint*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (union rr_control_msg*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct msm_rpc_endpoint *VAR_1)
{
 int VAR_2;
 union rr_control_msg VAR_3;

 VAR_3.cmd = VAR_0;
 VAR_3.cli.pid = VAR_1->pid;
 VAR_3.cli.cid = VAR_1->cid;

 FUNC_0("x REMOVE_CLIENT id=%d:%08x\n", VAR_1->pid, VAR_1->cid);
 VAR_2 = FUNC_3(&VAR_3);
 if (VAR_2 < 0)
  return VAR_2;

 FUNC_4(&VAR_1->read_q_wake_lock);
 FUNC_2(&VAR_1->list);
 FUNC_1(VAR_1);
 return 0;
}
