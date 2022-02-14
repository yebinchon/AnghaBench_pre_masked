
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task_setup {int flags; int workqueue; struct nfs4_opendata* callback_data; int * callback_ops; struct rpc_message* rpc_message; int rpc_client; } ;
struct rpc_task {int dummy; } ;
struct rpc_message {int rpc_cred; struct nfs_openres* rpc_resp; struct nfs_openargs* rpc_argp; int * rpc_proc; } ;
struct nfs_server {int client; } ;
struct nfs_openres {int seq_res; } ;
struct nfs_openargs {int seq_args; } ;
struct nfs4_opendata {int rpc_status; int cancelled; int is_recover; scalar_t__ rpc_done; int kref; TYPE_2__* owner; struct nfs_openres o_res; struct nfs_openargs o_arg; TYPE_1__* dir; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int so_cred; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 scalar_t__ FUNC_0 (struct rpc_task*) ;
 size_t VAR_0 ;
 struct nfs_server* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct rpc_task*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct rpc_task*) ;
 int VAR_4 ;
 int FUNC_7 (struct rpc_task*) ;
 struct rpc_task* FUNC_8 (struct rpc_task_setup*) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct nfs4_opendata *VAR_5, int VAR_6)
{
 struct inode *VAR_7 = VAR_5->dir->d_inode;
 struct nfs_server *VAR_8 = FUNC_1(VAR_7);
 struct nfs_openargs *VAR_9 = &VAR_5->o_arg;
 struct nfs_openres *VAR_10 = &VAR_5->o_res;
 struct rpc_task *VAR_11;
 struct rpc_message VAR_12 = {
  .rpc_proc = &VAR_3[VAR_0],
  .rpc_argp = VAR_9,
  .rpc_resp = VAR_10,
  .rpc_cred = VAR_5->owner->so_cred,
 };
 struct rpc_task_setup VAR_13 = {
  .rpc_client = VAR_8->client,
  .rpc_message = &VAR_12,
  .callback_ops = &VAR_2,
  .callback_data = VAR_5,
  .workqueue = VAR_4,
  .flags = VAR_1,
 };
 int VAR_14;

 FUNC_4(&VAR_9->seq_args, &VAR_10->seq_res, 1);
 FUNC_3(&VAR_5->kref);
 VAR_5->rpc_done = 0;
 VAR_5->rpc_status = 0;
 VAR_5->cancelled = 0;
 VAR_5->is_recover = 0;
 if (VAR_6) {
  FUNC_5(&VAR_9->seq_args);
  VAR_5->is_recover = 1;
 }
 VAR_11 = FUNC_8(&VAR_13);
        if (FUNC_0(VAR_11))
                return FUNC_2(VAR_11);
        VAR_14 = FUNC_6(VAR_11);
        if (VAR_14 != 0) {
                VAR_5->cancelled = 1;
                FUNC_9();
        } else
                VAR_14 = VAR_5->rpc_status;
        FUNC_7(VAR_11);

 return VAR_14;
}
