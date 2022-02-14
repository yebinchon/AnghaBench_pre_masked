
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rpc_message {int * rpc_resp; int * rpc_argp; } ;
struct rpc_call_ops {int dummy; } ;
struct nlm_rqst {int a_res; int a_args; } ;


 int FUNC_0 (struct nlm_rqst*,int ,struct rpc_message*,struct rpc_call_ops const*) ;

int FUNC_1(struct nlm_rqst *VAR_0, u32 VAR_1, const struct rpc_call_ops *VAR_2)
{
 struct rpc_message VAR_3 = {
  .rpc_argp = &VAR_0->a_args,
  .rpc_resp = &VAR_0->a_res,
 };
 return FUNC_0(VAR_0, VAR_1, &VAR_3, VAR_2);
}
