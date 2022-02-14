
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rpc_task {int dummy; } ;
struct rpc_message {struct rpc_cred* rpc_cred; int * rpc_resp; int * rpc_argp; } ;
struct rpc_cred {int dummy; } ;
struct rpc_call_ops {int dummy; } ;
struct nlm_rqst {int a_res; int a_args; } ;


 scalar_t__ FUNC_0 (struct rpc_task*) ;
 int FUNC_1 (struct rpc_task*) ;
 struct rpc_task* FUNC_2 (struct nlm_rqst*,int ,struct rpc_message*,struct rpc_call_ops const*) ;
 int FUNC_3 (struct rpc_task*) ;
 int FUNC_4 (struct rpc_task*) ;

__attribute__((used)) static int FUNC_5(struct rpc_cred *VAR_0, struct nlm_rqst *VAR_1, u32 VAR_2, const struct rpc_call_ops *VAR_3)
{
 struct rpc_message VAR_4 = {
  .rpc_argp = &VAR_1->a_args,
  .rpc_resp = &VAR_1->a_res,
  .rpc_cred = VAR_0,
 };
 struct rpc_task *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_1, VAR_2, &VAR_4, VAR_3);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);
 VAR_6 = FUNC_4(VAR_5);
 FUNC_3(VAR_5);
 return VAR_6;
}
