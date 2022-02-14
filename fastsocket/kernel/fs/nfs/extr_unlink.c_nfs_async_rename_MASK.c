
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rpc_task_setup {struct nfs_renamedata* callback_data; int flags; int rpc_client; int workqueue; int * callback_ops; struct rpc_message* rpc_message; } ;
struct rpc_task {int dummy; } ;
struct rpc_message {int rpc_cred; TYPE_2__* rpc_resp; TYPE_1__* rpc_argp; } ;
struct TYPE_5__ {int * new_fattr; int * old_fattr; } ;
struct TYPE_4__ {int * new_name; void* new_dir; int * old_name; void* old_dir; } ;
struct nfs_renamedata {struct inode* old_dir; int new_fattr; TYPE_2__ res; int old_fattr; TYPE_1__ args; void* new_dentry; void* old_dentry; struct inode* new_dir; int cred; } ;
struct inode {int i_sb; int i_count; } ;
struct dentry {int d_name; } ;
struct TYPE_6__ {int (* rename_setup ) (struct rpc_message*,struct inode*) ;} ;


 int VAR_0 ;
 struct rpc_task* FUNC_0 (int ) ;
 struct rpc_task* FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct inode*) ;
 void* FUNC_4 (struct inode*) ;
 TYPE_3__* FUNC_5 (struct inode*) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct nfs_renamedata*) ;
 struct nfs_renamedata* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 int VAR_3 ;
 int FUNC_11 (int ) ;
 int VAR_4 ;
 int FUNC_12 () ;
 struct rpc_task* FUNC_13 (struct rpc_task_setup*) ;
 int FUNC_14 (struct rpc_message*,struct inode*) ;

__attribute__((used)) static struct rpc_task *
FUNC_15(struct inode *VAR_5, struct inode *VAR_6,
   struct dentry *VAR_7, struct dentry *VAR_8)
{
 struct nfs_renamedata *VAR_9;
 struct rpc_message VAR_10 = { };
 struct rpc_task_setup VAR_11 = {
  .rpc_message = &VAR_10,
  .callback_ops = &VAR_3,
  .workqueue = VAR_4,
  .rpc_client = FUNC_3(VAR_5),
  .flags = VAR_2,
 };

 VAR_9 = FUNC_9(sizeof(*VAR_9), VAR_1);
 if (VAR_9 == ((void*)0))
  return FUNC_1(-VAR_0);
 VAR_11.callback_data = VAR_9,

 VAR_9->cred = FUNC_12();
 if (FUNC_2(VAR_9->cred)) {
  struct rpc_task *VAR_12 = FUNC_0(VAR_9->cred);
  FUNC_8(VAR_9);
  return VAR_12;
 }

 VAR_10.rpc_argp = &VAR_9->args;
 VAR_10.rpc_resp = &VAR_9->res;
 VAR_10.rpc_cred = VAR_9->cred;


 VAR_9->old_dir = VAR_5;
 FUNC_6(&VAR_5->i_count);
 VAR_9->new_dir = VAR_6;
 FUNC_6(&VAR_6->i_count);
 VAR_9->old_dentry = FUNC_7(VAR_7);
 VAR_9->new_dentry = FUNC_7(VAR_8);
 FUNC_10(&VAR_9->old_fattr);
 FUNC_10(&VAR_9->new_fattr);


 VAR_9->args.old_dir = FUNC_4(VAR_5);
 VAR_9->args.old_name = &VAR_7->d_name;
 VAR_9->args.new_dir = FUNC_4(VAR_6);
 VAR_9->args.new_name = &VAR_8->d_name;


 VAR_9->res.old_fattr = &VAR_9->old_fattr;
 VAR_9->res.new_fattr = &VAR_9->new_fattr;

 FUNC_11(VAR_5->i_sb);

 FUNC_5(VAR_9->old_dir)->rename_setup(&VAR_10, VAR_5);

 return FUNC_13(&VAR_11);
}
