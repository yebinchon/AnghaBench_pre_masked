
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct inode {int transid; TYPE_1__* transaction; } ;
struct dentry {TYPE_3__* d_parent; } ;
struct btrfs_trans_handle {int transid; TYPE_1__* transaction; } ;
struct btrfs_root {TYPE_2__* fs_info; int ref_cows; } ;
struct btrfs_pending_snapshot {int readonly; int error; int snap; int list; struct btrfs_root* root; struct dentry* dentry; int block_rsv; } ;
struct TYPE_6__ {int d_inode; } ;
struct TYPE_5__ {int extent_root; int trans_lock; } ;
struct TYPE_4__ {int pending_snapshots; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct inode*,int ,int) ;
 int FUNC_5 (int *) ;
 struct inode* FUNC_6 (int ,struct dentry*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct inode*,struct btrfs_pending_snapshot*) ;
 struct inode* FUNC_9 (int ,int) ;
 int FUNC_10 (struct dentry*,struct inode*) ;
 int FUNC_11 (struct btrfs_pending_snapshot*) ;
 struct btrfs_pending_snapshot* FUNC_12 (int,int ) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct btrfs_root *VAR_3, struct dentry *VAR_4,
      char *VAR_5, int VAR_6, u64 *VAR_7,
      bool VAR_8)
{
 struct inode *VAR_9;
 struct btrfs_pending_snapshot *VAR_10;
 struct btrfs_trans_handle *VAR_11;
 int VAR_12;

 if (!VAR_3->ref_cows)
  return -VAR_0;

 VAR_10 = FUNC_12(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 FUNC_5(&VAR_10->block_rsv);
 VAR_10->dentry = VAR_4;
 VAR_10->root = VAR_3;
 VAR_10->readonly = VAR_8;

 VAR_11 = FUNC_9(VAR_3->fs_info->extent_root, 5);
 if (FUNC_1(VAR_11)) {
  VAR_12 = FUNC_2(VAR_11);
  goto fail;
 }

 VAR_12 = FUNC_8(VAR_11, VAR_10);
 FUNC_0(VAR_12);

 FUNC_14(&VAR_3->fs_info->trans_lock);
 FUNC_13(&VAR_10->list,
   &VAR_11->transaction->pending_snapshots);
 FUNC_15(&VAR_3->fs_info->trans_lock);
 if (VAR_7) {
  *VAR_7 = VAR_11->transid;
  VAR_12 = FUNC_4(VAR_11,
         VAR_3->fs_info->extent_root, 1);
 } else {
  VAR_12 = FUNC_3(VAR_11,
            VAR_3->fs_info->extent_root);
 }
 FUNC_0(VAR_12);

 VAR_12 = VAR_10->error;
 if (VAR_12)
  goto fail;

 VAR_12 = FUNC_7(VAR_10->snap);
 if (VAR_12)
  goto fail;

 VAR_9 = FUNC_6(VAR_4->d_parent->d_inode, VAR_4);
 if (FUNC_1(VAR_9)) {
  VAR_12 = FUNC_2(VAR_9);
  goto fail;
 }
 FUNC_0(!VAR_9);
 FUNC_10(VAR_4, VAR_9);
 VAR_12 = 0;
fail:
 FUNC_11(VAR_10);
 return VAR_12;
}
