
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct TYPE_7__ {int lock_context; TYPE_4__* context; int stateid; int seq_args; } ;
struct TYPE_6__ {int seq_res; } ;
struct nfs_read_data {TYPE_3__ args; TYPE_2__ res; TYPE_1__* ds_clp; int read_done_cb; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_5__ {int cl_session; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *,int *,struct rpc_task*) ;
 int FUNC_1 (int *,TYPE_4__*,int ,int ) ;
 int FUNC_2 (struct rpc_task*) ;
 int FUNC_3 (struct rpc_task*,int ) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct rpc_task *VAR_4, void *VAR_5)
{
 struct nfs_read_data *VAR_6 = VAR_5;

 if (FUNC_5(FUNC_4(VAR_2, &VAR_6->args.context->flags))) {
  FUNC_3(VAR_4, -VAR_0);
  return;
 }
 VAR_6->read_done_cb = VAR_3;

 if (FUNC_0(VAR_6->ds_clp->cl_session,
    &VAR_6->args.seq_args, &VAR_6->res.seq_res,
    VAR_4))
  return;

 FUNC_2(VAR_4);
 FUNC_1(&VAR_6->args.stateid, VAR_6->args.context,
   VAR_6->args.lock_context, VAR_1);
}
