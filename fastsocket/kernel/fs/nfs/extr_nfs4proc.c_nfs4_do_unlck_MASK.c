
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_task_setup {struct nfs4_unlockdata* callback_data; int flags; int workqueue; int * callback_ops; struct rpc_message* rpc_message; int rpc_client; } ;
struct rpc_task {int dummy; } ;
struct rpc_message {TYPE_3__* rpc_resp; TYPE_2__* rpc_argp; int rpc_cred; int * rpc_proc; } ;
struct nfs_seqid {int dummy; } ;
struct nfs_open_context {int cred; } ;
struct TYPE_6__ {int seq_res; } ;
struct TYPE_5__ {int seq_args; } ;
struct nfs4_unlockdata {TYPE_3__ res; TYPE_2__ arg; } ;
struct nfs4_lock_state {TYPE_1__* ls_state; } ;
struct file_lock {int fl_type; } ;
struct TYPE_4__ {int inode; } ;


 int VAR_0 ;
 struct rpc_task* FUNC_0 (int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,int *,int) ;
 struct nfs4_unlockdata* FUNC_3 (struct file_lock*,struct nfs_open_context*,struct nfs4_lock_state*,struct nfs_seqid*) ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_4 (struct nfs_seqid*) ;
 int VAR_6 ;
 struct rpc_task* FUNC_5 (struct rpc_task_setup*) ;

__attribute__((used)) static struct rpc_task *FUNC_6(struct file_lock *VAR_7,
  struct nfs_open_context *VAR_8,
  struct nfs4_lock_state *VAR_9,
  struct nfs_seqid *VAR_10)
{
 struct nfs4_unlockdata *VAR_11;
 struct rpc_message VAR_12 = {
  .rpc_proc = &VAR_5[VAR_2],
  .rpc_cred = VAR_8->cred,
 };
 struct rpc_task_setup VAR_13 = {
  .rpc_client = FUNC_1(VAR_9->ls_state->inode),
  .rpc_message = &VAR_12,
  .callback_ops = &VAR_4,
  .workqueue = VAR_6,
  .flags = VAR_3,
 };




 VAR_7->fl_type = VAR_1;

 VAR_11 = FUNC_3(VAR_7, VAR_8, VAR_9, VAR_10);
 if (VAR_11 == ((void*)0)) {
  FUNC_4(VAR_10);
  return FUNC_0(-VAR_0);
 }

 FUNC_2(&VAR_11->arg.seq_args, &VAR_11->res.seq_res, 1);
 VAR_12.rpc_argp = &VAR_11->arg;
 VAR_12.rpc_resp = &VAR_11->res;
 VAR_13.callback_data = VAR_11;
 return FUNC_5(&VAR_13);
}
