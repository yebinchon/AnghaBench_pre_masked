
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct TYPE_6__ {int lock_context; int context; int stateid; int seq_args; } ;
struct TYPE_5__ {int seq_res; } ;
struct nfs_read_data {TYPE_3__ args; TYPE_2__ res; TYPE_1__* header; } ;
struct TYPE_4__ {int inode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int *,int *,struct rpc_task*) ;
 int FUNC_3 (struct rpc_task*) ;

__attribute__((used)) static void FUNC_4(struct rpc_task *VAR_1, struct nfs_read_data *VAR_2)
{
 if (FUNC_2(FUNC_0(VAR_2->header->inode),
    &VAR_2->args.seq_args,
    &VAR_2->res.seq_res,
    VAR_1))
  return;
 FUNC_3(VAR_1);
 FUNC_1(&VAR_2->args.stateid, VAR_2->args.context,
   VAR_2->args.lock_context, VAR_0);
}
