
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rpc_task_setup {struct nfs4_closedata* callback_data; int flags; int workqueue; int * callback_ops; struct rpc_message* rpc_message; int rpc_client; } ;
struct rpc_task {int dummy; } ;
struct rpc_message {TYPE_2__* rpc_resp; TYPE_1__* rpc_argp; int rpc_cred; int * rpc_proc; } ;
struct nfs_server {int cache_consistency_bitmask; int client; } ;
struct nfs4_state_owner {int so_seqid; int so_cred; } ;
struct nfs4_state {TYPE_3__* inode; struct nfs4_state_owner* owner; int open_stateid; } ;
struct TYPE_7__ {struct nfs_server* server; int * seqid; int * fattr; int seq_res; } ;
struct TYPE_6__ {int * seqid; int bitmask; scalar_t__ fmode; int * stateid; int fh; int seq_args; } ;
struct nfs4_closedata {int roc; TYPE_2__ res; TYPE_1__ arg; TYPE_3__* inode; int fattr; struct nfs4_state* state; } ;
typedef int gfp_t ;
struct TYPE_8__ {int i_sb; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rpc_task*) ;
 size_t VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 struct nfs_server* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct rpc_task*) ;
 int VAR_2 ;
 int FUNC_4 (struct nfs4_closedata*) ;
 struct nfs4_closedata* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *,int) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_7 (struct nfs4_state*) ;
 int FUNC_8 (struct nfs4_state_owner*) ;
 int * FUNC_9 (int *,int ) ;
 int FUNC_10 (int ) ;
 int VAR_5 ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (struct rpc_task*) ;
 struct rpc_task* FUNC_13 (struct rpc_task_setup*) ;
 int FUNC_14 (struct rpc_task*) ;

int FUNC_15(struct nfs4_state *VAR_6, gfp_t VAR_7, int VAR_8, bool VAR_9)
{
 struct nfs_server *VAR_10 = FUNC_2(VAR_6->inode);
 struct nfs4_closedata *VAR_11;
 struct nfs4_state_owner *VAR_12 = VAR_6->owner;
 struct rpc_task *VAR_13;
 struct rpc_message VAR_14 = {
  .rpc_proc = &VAR_4[VAR_1],
  .rpc_cred = VAR_6->owner->so_cred,
 };
 struct rpc_task_setup VAR_15 = {
  .rpc_client = VAR_10->client,
  .rpc_message = &VAR_14,
  .callback_ops = &VAR_3,
  .workqueue = VAR_5,
  .flags = VAR_2,
 };
 int VAR_16 = -VAR_0;

 VAR_11 = FUNC_5(sizeof(*VAR_11), VAR_7);
 if (VAR_11 == ((void*)0))
  goto out;
 FUNC_6(&VAR_11->arg.seq_args, &VAR_11->res.seq_res, 1);
 VAR_11->inode = VAR_6->inode;
 VAR_11->state = VAR_6;
 VAR_11->arg.fh = FUNC_1(VAR_6->inode);
 VAR_11->arg.stateid = &VAR_6->open_stateid;

 VAR_11->arg.seqid = FUNC_9(&VAR_6->owner->so_seqid, VAR_7);
 if (VAR_11->arg.seqid == ((void*)0))
  goto out_free_calldata;
 VAR_11->arg.fmode = 0;
 VAR_11->arg.bitmask = VAR_10->cache_consistency_bitmask;
 VAR_11->res.fattr = &VAR_11->fattr;
 VAR_11->res.seqid = VAR_11->arg.seqid;
 VAR_11->res.server = VAR_10;
 VAR_11->roc = VAR_9;
 FUNC_10(VAR_11->inode->i_sb);

 VAR_14.rpc_argp = &VAR_11->arg,
 VAR_14.rpc_resp = &VAR_11->res,
 VAR_15.callback_data = VAR_11;
 VAR_13 = FUNC_13(&VAR_15);
 if (FUNC_0(VAR_13))
  return FUNC_3(VAR_13);
 VAR_16 = 0;
 if (VAR_8)
  VAR_16 = FUNC_14(VAR_13);
 FUNC_12(VAR_13);
 return VAR_16;
out_free_calldata:
 FUNC_4(VAR_11);
out:
 if (VAR_9)
  FUNC_11(VAR_6->inode);
 FUNC_7(VAR_6);
 FUNC_8(VAR_12);
 return VAR_16;
}
