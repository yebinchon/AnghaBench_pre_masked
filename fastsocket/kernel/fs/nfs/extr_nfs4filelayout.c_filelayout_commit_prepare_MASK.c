
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct TYPE_6__ {int seq_res; } ;
struct TYPE_5__ {int seq_args; } ;
struct nfs_commit_data {TYPE_3__ res; TYPE_2__ args; TYPE_1__* ds_clp; } ;
struct TYPE_4__ {int cl_session; } ;


 scalar_t__ FUNC_0 (int ,int *,int *,struct rpc_task*) ;
 int FUNC_1 (struct rpc_task*) ;

__attribute__((used)) static void FUNC_2(struct rpc_task *VAR_0, void *VAR_1)
{
 struct nfs_commit_data *VAR_2 = VAR_1;

 if (FUNC_0(VAR_2->ds_clp->cl_session,
    &VAR_2->args.seq_args, &VAR_2->res.seq_res,
    VAR_0))
  return;

 FUNC_1(VAR_0);
}
