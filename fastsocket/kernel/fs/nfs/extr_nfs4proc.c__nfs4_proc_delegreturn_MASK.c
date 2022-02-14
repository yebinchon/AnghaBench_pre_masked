
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task_setup {struct nfs4_delegreturndata* callback_data; int flags; int * callback_ops; struct rpc_message* rpc_message; int rpc_client; } ;
struct rpc_task {int dummy; } ;
struct rpc_message {TYPE_2__* rpc_resp; TYPE_1__* rpc_argp; struct rpc_cred* rpc_cred; int * rpc_proc; } ;
struct rpc_cred {int dummy; } ;
struct nfs_server {int cache_consistency_bitmask; int client; } ;
struct TYPE_4__ {int * fattr; struct nfs_server* server; int seq_res; } ;
struct TYPE_3__ {int bitmask; int * stateid; int * fhandle; int seq_args; } ;
struct nfs4_delegreturndata {int rpc_status; int fattr; TYPE_2__ res; TYPE_1__ args; int timestamp; int stateid; int fh; } ;
struct inode {int dummy; } ;
typedef int nfs4_stateid ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rpc_task*) ;
 size_t VAR_2 ;
 int FUNC_1 (struct inode*) ;
 struct nfs_server* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct rpc_task*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct nfs4_delegreturndata* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *,int) ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_6 (int *,int const*) ;
 int FUNC_7 (struct rpc_task*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct inode*,int *) ;
 int FUNC_11 (struct inode*,int *) ;
 int FUNC_12 (struct rpc_task*) ;
 struct rpc_task* FUNC_13 (struct rpc_task_setup*) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_7, struct rpc_cred *VAR_8, const nfs4_stateid *VAR_9, int VAR_10)
{
 struct nfs4_delegreturndata *VAR_11;
 struct nfs_server *VAR_12 = FUNC_2(VAR_7);
 struct rpc_task *VAR_13;
 struct rpc_message VAR_14 = {
  .rpc_proc = &VAR_6[VAR_2],
  .rpc_cred = VAR_8,
 };
 struct rpc_task_setup VAR_15 = {
  .rpc_client = VAR_12->client,
  .rpc_message = &VAR_14,
  .callback_ops = &VAR_5,
  .flags = VAR_3,
 };
 int VAR_16 = 0;

 VAR_11 = FUNC_4(sizeof(*VAR_11), VAR_1);
 if (VAR_11 == ((void*)0))
  return -VAR_0;
 FUNC_5(&VAR_11->args.seq_args, &VAR_11->res.seq_res, 1);
 VAR_11->args.fhandle = &VAR_11->fh;
 VAR_11->args.stateid = &VAR_11->stateid;
 VAR_11->args.bitmask = VAR_12->cache_consistency_bitmask;
 FUNC_8(&VAR_11->fh, FUNC_1(VAR_7));
 FUNC_6(&VAR_11->stateid, VAR_9);
 VAR_11->res.fattr = &VAR_11->fattr;
 VAR_11->res.server = VAR_12;
 FUNC_9(VAR_11->res.fattr);
 VAR_11->timestamp = VAR_4;
 VAR_11->rpc_status = 0;

 VAR_15.callback_data = VAR_11;
 VAR_14.rpc_argp = &VAR_11->args,
 VAR_14.rpc_resp = &VAR_11->res,
 VAR_13 = FUNC_13(&VAR_15);
 if (FUNC_0(VAR_13))
  return FUNC_3(VAR_13);
 if (!VAR_10)
  goto out;
 VAR_16 = FUNC_7(VAR_13);
 if (VAR_16 != 0)
  goto out;
 VAR_16 = VAR_11->rpc_status;
 if (VAR_16 == 0)
  FUNC_10(VAR_7, &VAR_11->fattr);
 else
  FUNC_11(VAR_7, &VAR_11->fattr);
out:
 FUNC_12(VAR_13);
 return VAR_16;
}
