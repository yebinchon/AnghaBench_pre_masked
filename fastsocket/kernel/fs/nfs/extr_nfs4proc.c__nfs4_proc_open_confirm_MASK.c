
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task_setup {int flags; int workqueue; struct nfs4_opendata* callback_data; int * callback_ops; struct rpc_message* rpc_message; int rpc_client; } ;
struct rpc_task {int dummy; } ;
struct rpc_message {int rpc_cred; int * rpc_resp; int * rpc_argp; int * rpc_proc; } ;
struct nfs_server {int client; } ;
struct nfs4_opendata {int rpc_status; int cancelled; int timestamp; scalar_t__ rpc_done; int kref; TYPE_2__* owner; int c_res; int c_arg; TYPE_1__* dir; } ;
struct TYPE_4__ {int so_cred; } ;
struct TYPE_3__ {int d_inode; } ;


 scalar_t__ FUNC_0 (struct rpc_task*) ;
 size_t VAR_0 ;
 struct nfs_server* FUNC_1 (int ) ;
 int FUNC_2 (struct rpc_task*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_4 (struct rpc_task*) ;
 int VAR_5 ;
 int FUNC_5 (struct rpc_task*) ;
 struct rpc_task* FUNC_6 (struct rpc_task_setup*) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct nfs4_opendata *VAR_6)
{
 struct nfs_server *VAR_7 = FUNC_1(VAR_6->dir->d_inode);
 struct rpc_task *VAR_8;
 struct rpc_message VAR_9 = {
  .rpc_proc = &VAR_4[VAR_0],
  .rpc_argp = &VAR_6->c_arg,
  .rpc_resp = &VAR_6->c_res,
  .rpc_cred = VAR_6->owner->so_cred,
 };
 struct rpc_task_setup VAR_10 = {
  .rpc_client = VAR_7->client,
  .rpc_message = &VAR_9,
  .callback_ops = &VAR_3,
  .callback_data = VAR_6,
  .workqueue = VAR_5,
  .flags = VAR_1,
 };
 int VAR_11;

 FUNC_3(&VAR_6->kref);
 VAR_6->rpc_done = 0;
 VAR_6->rpc_status = 0;
 VAR_6->timestamp = VAR_2;
 VAR_8 = FUNC_6(&VAR_10);
 if (FUNC_0(VAR_8))
  return FUNC_2(VAR_8);
 VAR_11 = FUNC_4(VAR_8);
 if (VAR_11 != 0) {
  VAR_6->cancelled = 1;
  FUNC_7();
 } else
  VAR_11 = VAR_6->rpc_status;
 FUNC_5(VAR_8);
 return VAR_11;
}
