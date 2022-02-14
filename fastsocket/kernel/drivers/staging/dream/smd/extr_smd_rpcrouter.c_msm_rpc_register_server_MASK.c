
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* vers; void* prog; int cid; int pid; int cmd; } ;
union rr_control_msg {TYPE_1__ srv; } ;
typedef void* uint32_t ;
struct rr_server {int dummy; } ;
struct msm_rpc_endpoint {int cid; int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,void*,void*) ;
 struct rr_server* FUNC_1 (int ,int ,void*,void*) ;
 int FUNC_2 (union rr_control_msg*) ;

int FUNC_3(struct msm_rpc_endpoint *VAR_2,
       uint32_t VAR_3, uint32_t VAR_4)
{
 int VAR_5;
 union rr_control_msg VAR_6;
 struct rr_server *VAR_7;

 VAR_7 = FUNC_1(VAR_2->pid, VAR_2->cid,
      VAR_3, VAR_4);
 if (!VAR_7)
  return -VAR_0;

 VAR_6.srv.cmd = VAR_1;
 VAR_6.srv.pid = VAR_2->pid;
 VAR_6.srv.cid = VAR_2->cid;
 VAR_6.srv.prog = VAR_3;
 VAR_6.srv.vers = VAR_4;

 FUNC_0("x NEW_SERVER id=%d:%08x prog=%08x:%08x\n",
    VAR_2->pid, VAR_2->cid, VAR_3, VAR_4);

 VAR_5 = FUNC_2(&VAR_6);
 if (VAR_5 < 0)
  return VAR_5;

 return 0;
}
