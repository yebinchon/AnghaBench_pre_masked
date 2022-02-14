
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_task_setup {int rpc_client; int flags; int workqueue; struct nfs_unlinkdata* callback_data; int * callback_ops; struct rpc_message* rpc_message; } ;
struct rpc_task {int dummy; } ;
struct rpc_message {int rpc_cred; TYPE_2__* rpc_resp; TYPE_1__* rpc_argp; } ;
struct TYPE_5__ {int dir_attr; } ;
struct TYPE_4__ {int fh; int name; } ;
struct nfs_unlinkdata {TYPE_2__ res; TYPE_1__ args; int dir; int cred; } ;
struct inode {int i_sb; } ;
struct dentry {int d_flags; int d_lock; struct nfs_unlinkdata* d_fsdata; int * d_inode; } ;
struct TYPE_6__ {int (* unlink_setup ) (struct rpc_message*,struct inode*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct rpc_task*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 TYPE_3__* FUNC_3 (struct inode*) ;
 int VAR_1 ;
 struct dentry* FUNC_4 (struct dentry*,int *) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct dentry*,struct nfs_unlinkdata*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct nfs_unlinkdata*) ;
 int FUNC_11 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_12 (struct rpc_task*) ;
 struct rpc_task* FUNC_13 (struct rpc_task_setup*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct rpc_message*,struct inode*) ;

__attribute__((used)) static int FUNC_17(struct dentry *VAR_4, struct inode *VAR_5, struct nfs_unlinkdata *VAR_6)
{
 struct rpc_message VAR_7 = {
  .rpc_argp = &VAR_6->args,
  .rpc_resp = &VAR_6->res,
  .rpc_cred = VAR_6->cred,
 };
 struct rpc_task_setup VAR_8 = {
  .rpc_message = &VAR_7,
  .callback_ops = &VAR_2,
  .callback_data = VAR_6,
  .workqueue = VAR_3,
  .flags = VAR_1,
 };
 struct rpc_task *VAR_9;
 struct dentry *VAR_10;

 VAR_10 = FUNC_4(VAR_4, &VAR_6->args.name);
 if (VAR_10 != ((void*)0)) {
  int VAR_11;





  FUNC_10(VAR_6);
  VAR_11 = FUNC_7(VAR_10, VAR_6);
  FUNC_14(&VAR_10->d_lock);
  if (VAR_11 == 0 && VAR_10->d_inode != ((void*)0) &&
      !(VAR_10->d_flags & VAR_0)) {
   VAR_10->d_fsdata = VAR_6;
   VAR_10->d_flags |= VAR_0;
   VAR_11 = 1;
  } else
   VAR_11 = 0;
  FUNC_15(&VAR_10->d_lock);
  FUNC_8(VAR_5);
  FUNC_5(VAR_10);
  return VAR_11;
 }
 VAR_6->dir = FUNC_6(VAR_5);
 if (!VAR_6->dir) {
  FUNC_8(VAR_5);
  return 0;
 }
 FUNC_11(VAR_5->i_sb);
 VAR_6->args.fh = FUNC_2(VAR_5);
 FUNC_9(VAR_6->res.dir_attr);

 FUNC_3(VAR_5)->unlink_setup(&VAR_7, VAR_5);

 VAR_8.rpc_client = FUNC_1(VAR_5);
 VAR_9 = FUNC_13(&VAR_8);
 if (!FUNC_0(VAR_9))
  FUNC_12(VAR_9);
 return 1;
}
