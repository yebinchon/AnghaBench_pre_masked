
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rpc_task_setup {int flags; int workqueue; struct nfs_read_data* callback_data; struct rpc_call_ops const* callback_ops; struct rpc_message* rpc_message; struct rpc_clnt* rpc_client; TYPE_2__* task; } ;
struct rpc_task {int dummy; } ;
struct rpc_message {int rpc_cred; int * rpc_resp; TYPE_4__* rpc_argp; } ;
struct rpc_clnt {int dummy; } ;
struct rpc_call_ops {int dummy; } ;
struct TYPE_9__ {scalar_t__ offset; int count; } ;
struct TYPE_7__ {int tk_pid; } ;
struct nfs_read_data {TYPE_4__ args; TYPE_2__ task; TYPE_1__* header; int res; } ;
struct inode {TYPE_3__* i_sb; } ;
struct TYPE_10__ {int (* read_setup ) (struct nfs_read_data*,struct rpc_message*) ;} ;
struct TYPE_8__ {int s_id; } ;
struct TYPE_6__ {int cred; struct inode* inode; } ;


 scalar_t__ FUNC_0 (struct rpc_task*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 TYPE_5__* FUNC_3 (struct inode*) ;
 int VAR_0 ;
 int FUNC_4 (struct rpc_task*) ;
 int VAR_1 ;
 int FUNC_5 (char*,int ,int ,long long,int ,unsigned long long) ;
 int VAR_2 ;
 int FUNC_6 (struct rpc_task*) ;
 struct rpc_task* FUNC_7 (struct rpc_task_setup*) ;
 int FUNC_8 (struct nfs_read_data*,struct rpc_message*) ;

int FUNC_9(struct rpc_clnt *VAR_3,
        struct nfs_read_data *VAR_4,
        const struct rpc_call_ops *VAR_5)
{
 struct inode *VAR_6 = VAR_4->header->inode;
 int VAR_7 = FUNC_1(VAR_6) ? VAR_0 : 0;
 struct rpc_task *VAR_8;
 struct rpc_message VAR_9 = {
  .rpc_argp = &VAR_4->args,
  .rpc_resp = &VAR_4->res,
  .rpc_cred = VAR_4->header->cred,
 };
 struct rpc_task_setup VAR_10 = {
  .task = &VAR_4->task,
  .rpc_client = VAR_3,
  .rpc_message = &VAR_9,
  .callback_ops = VAR_5,
  .callback_data = VAR_4,
  .workqueue = VAR_2,
  .flags = VAR_1 | VAR_7,
 };


 FUNC_3(VAR_6)->read_setup(VAR_4, &VAR_9);

 FUNC_5("NFS: %5u initiated read call (req %s/%lld, %u bytes @ "
   "offset %llu)\n",
   VAR_4->task.tk_pid,
   VAR_6->i_sb->s_id,
   (long long)FUNC_2(VAR_6),
   VAR_4->args.count,
   (unsigned long long)VAR_4->args.offset);

 VAR_8 = FUNC_7(&VAR_10);
 if (FUNC_0(VAR_8))
  return FUNC_4(VAR_8);
 FUNC_6(VAR_8);
 return 0;
}
