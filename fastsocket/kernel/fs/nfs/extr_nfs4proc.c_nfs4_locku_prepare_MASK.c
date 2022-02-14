
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_task {int * tk_action; } ;
struct TYPE_5__ {int seq_res; } ;
struct TYPE_6__ {int seqid; int seq_args; } ;
struct nfs4_unlockdata {TYPE_2__ res; TYPE_3__ arg; int server; int timestamp; TYPE_1__* lsp; } ;
struct TYPE_4__ {int ls_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rpc_task*,int *) ;
 scalar_t__ FUNC_1 (int ,int *,int *,struct rpc_task*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,struct rpc_task*) ;
 int FUNC_4 (struct rpc_task*) ;

__attribute__((used)) static void FUNC_5(struct rpc_task *VAR_2, void *VAR_3)
{
 struct nfs4_unlockdata *VAR_4 = VAR_3;

 if (FUNC_3(VAR_4->arg.seqid, VAR_2) != 0)
  goto out_wait;
 if ((VAR_4->lsp->ls_flags & VAR_0) == 0) {

  goto out_no_action;
 }
 VAR_4->timestamp = VAR_1;
 if (FUNC_1(VAR_4->server,
    &VAR_4->arg.seq_args,
    &VAR_4->res.seq_res,
    VAR_2) != 0)
  FUNC_2(VAR_4->arg.seqid);
 else
  FUNC_4(VAR_2);
 return;
out_no_action:
 VAR_2->tk_action = ((void*)0);
out_wait:
 FUNC_0(VAR_2, &VAR_4->res.seq_res);
}
