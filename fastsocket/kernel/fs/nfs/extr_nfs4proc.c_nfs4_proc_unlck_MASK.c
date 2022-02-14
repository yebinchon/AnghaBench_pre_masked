
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task {int dummy; } ;
struct nfs_seqid {int dummy; } ;
struct nfs_inode {int rwsem; } ;
struct nfs4_state_owner {int so_delegreturn_mutex; } ;
struct nfs4_state {int flags; struct nfs4_state_owner* owner; struct inode* inode; } ;
struct nfs4_lock_state {int ls_seqid; } ;
struct inode {int dummy; } ;
struct TYPE_3__ {struct nfs4_lock_state* owner; } ;
struct TYPE_4__ {TYPE_1__ nfs4_fl; } ;
struct file_lock {unsigned char fl_flags; int fl_file; TYPE_2__ fl_u; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct rpc_task*) ;
 int VAR_4 ;
 struct nfs_inode* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct rpc_task*) ;
 int FUNC_3 (int ,struct file_lock*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct rpc_task* FUNC_7 (struct file_lock*,int ,struct nfs4_lock_state*,struct nfs_seqid*) ;
 int FUNC_8 (struct nfs4_state*,struct file_lock*) ;
 int FUNC_9 (struct rpc_task*) ;
 struct nfs_seqid* FUNC_10 (int *,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct rpc_task*) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct nfs4_state *VAR_5, int VAR_6, struct file_lock *VAR_7)
{
 struct inode *VAR_8 = VAR_5->inode;
 struct nfs4_state_owner *VAR_9 = VAR_5->owner;
 struct nfs_inode *VAR_10 = FUNC_1(VAR_8);
 struct nfs_seqid *VAR_11;
 struct nfs4_lock_state *VAR_12;
 struct rpc_task *VAR_13;
 int VAR_14 = 0;
 unsigned char VAR_15 = VAR_7->fl_flags;

 VAR_14 = FUNC_8(VAR_5, VAR_7);

 VAR_7->fl_flags |= VAR_2;

 FUNC_5(&VAR_9->so_delegreturn_mutex);

 FUNC_4(&VAR_10->rwsem);
 if (FUNC_3(VAR_7->fl_file, VAR_7) == -VAR_0) {
  FUNC_14(&VAR_10->rwsem);
  FUNC_6(&VAR_9->so_delegreturn_mutex);
  goto out;
 }
 FUNC_14(&VAR_10->rwsem);
 FUNC_6(&VAR_9->so_delegreturn_mutex);
 if (VAR_14 != 0)
  goto out;

 if (FUNC_13(VAR_4, &VAR_5->flags))
  goto out;
 VAR_12 = VAR_7->fl_u.nfs4_fl.owner;
 VAR_11 = FUNC_10(&VAR_12->ls_seqid, VAR_3);
 VAR_14 = -VAR_1;
 if (VAR_11 == ((void*)0))
  goto out;
 VAR_13 = FUNC_7(VAR_7, FUNC_11(VAR_7->fl_file), VAR_12, VAR_11);
 VAR_14 = FUNC_2(VAR_13);
 if (FUNC_0(VAR_13))
  goto out;
 VAR_14 = FUNC_9(VAR_13);
 FUNC_12(VAR_13);
out:
 VAR_7->fl_flags = VAR_15;
 return VAR_14;
}
