
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct rpc_task_setup {struct rpc_clnt* rpc_client; int flags; struct nlm_rqst* callback_data; struct rpc_call_ops const* callback_ops; struct rpc_message* rpc_message; } ;
struct rpc_task {int dummy; } ;
struct rpc_message {int * rpc_proc; } ;
struct rpc_clnt {int * cl_procinfo; } ;
struct rpc_call_ops {int (* rpc_release ) (struct nlm_rqst*) ;} ;
struct nlm_rqst {struct nlm_host* a_host; } ;
struct nlm_host {int h_name; } ;


 int VAR_0 ;
 struct rpc_task* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int,int ) ;
 struct rpc_clnt* FUNC_2 (struct nlm_host*) ;
 struct rpc_task* FUNC_3 (struct rpc_task_setup*) ;
 int FUNC_4 (struct nlm_rqst*) ;

__attribute__((used)) static struct rpc_task *FUNC_5(struct nlm_rqst *VAR_2, u32 VAR_3, struct rpc_message *VAR_4, const struct rpc_call_ops *VAR_5)
{
 struct nlm_host *VAR_6 = VAR_2->a_host;
 struct rpc_clnt *VAR_7;
 struct rpc_task_setup VAR_8 = {
  .rpc_message = VAR_4,
  .callback_ops = VAR_5,
  .callback_data = VAR_2,
  .flags = VAR_1,
 };

 FUNC_1("lockd: call procedure %d on %s (async)\n",
   (int)VAR_3, VAR_6->h_name);


 VAR_7 = FUNC_2(VAR_6);
 if (VAR_7 == ((void*)0))
  goto out_err;
 VAR_4->rpc_proc = &VAR_7->cl_procinfo[VAR_3];
 VAR_8.rpc_client = VAR_7;


 return FUNC_3(&VAR_8);
out_err:
 VAR_5->rpc_release(VAR_2);
 return FUNC_0(-VAR_0);
}
