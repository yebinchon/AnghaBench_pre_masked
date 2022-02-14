
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct TYPE_4__ {int seq_res; } ;
struct TYPE_3__ {int seq_args; } ;
struct nfs_commit_data {TYPE_2__ res; TYPE_1__ args; int inode; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *,int *,struct rpc_task*) ;
 int FUNC_2 (struct rpc_task*) ;

__attribute__((used)) static void FUNC_3(struct rpc_task *VAR_0, struct nfs_commit_data *VAR_1)
{
 if (FUNC_1(FUNC_0(VAR_1->inode),
    &VAR_1->args.seq_args,
    &VAR_1->res.seq_res,
    VAR_0))
  return;
 FUNC_2(VAR_0);
}
