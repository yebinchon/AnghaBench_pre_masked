
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; int i_mode; } ;
struct dentry {struct inode* d_inode; } ;
struct btrfs_trans_handle {scalar_t__ transid; } ;
struct btrfs_root {TYPE_1__* fs_info; int root_item; } ;
struct TYPE_4__ {scalar_t__ generation; scalar_t__ last_unlink_trans; struct btrfs_root* root; } ;
struct TYPE_3__ {scalar_t__ last_trans_committed; scalar_t__ last_trans_log_full_commit; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct btrfs_root*) ;
 scalar_t__ FUNC_5 (struct inode*,scalar_t__) ;
 int FUNC_6 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*,int) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct btrfs_root*,int ) ;
 int FUNC_9 (struct btrfs_trans_handle*,struct inode*,struct dentry*,struct super_block*,scalar_t__) ;
 struct dentry* FUNC_10 (struct dentry*) ;
 int FUNC_11 (struct dentry*) ;
 int FUNC_12 (struct btrfs_trans_handle*,struct btrfs_root*) ;

int FUNC_13(struct btrfs_trans_handle *VAR_5,
      struct btrfs_root *VAR_6, struct inode *VAR_7,
      struct dentry *VAR_8, int VAR_9)
{
 int VAR_10 = VAR_9 ? VAR_3 : VAR_2;
 struct super_block *VAR_11;
 struct dentry *VAR_12 = ((void*)0);
 int VAR_13 = 0;
 u64 VAR_14 = VAR_6->fs_info->last_trans_committed;

 VAR_11 = VAR_7->i_sb;

 if (FUNC_8(VAR_6, VAR_4)) {
  VAR_13 = 1;
  goto end_no_trans;
 }

 if (VAR_6->fs_info->last_trans_log_full_commit >
     VAR_6->fs_info->last_trans_committed) {
  VAR_13 = 1;
  goto end_no_trans;
 }

 if (VAR_6 != FUNC_0(VAR_7)->root ||
     FUNC_7(&VAR_6->root_item) == 0) {
  VAR_13 = 1;
  goto end_no_trans;
 }

 VAR_13 = FUNC_9(VAR_5, VAR_7, VAR_8,
      VAR_11, VAR_14);
 if (VAR_13)
  goto end_no_trans;

 if (FUNC_5(VAR_7, VAR_5->transid)) {
  VAR_13 = VAR_0;
  goto end_no_trans;
 }

 VAR_13 = FUNC_12(VAR_5, VAR_6);
 if (VAR_13)
  goto end_trans;

 VAR_13 = FUNC_6(VAR_5, VAR_6, VAR_7, VAR_10);
 if (VAR_13)
  goto end_trans;







 if (FUNC_3(VAR_7->i_mode) &&
     FUNC_0(VAR_7)->generation <= VAR_14 &&
     FUNC_0(VAR_7)->last_unlink_trans <= VAR_14) {
  VAR_13 = 0;
  goto end_trans;
 }

 VAR_10 = VAR_3;
 while (1) {
  if (!VAR_8 || !VAR_8->d_inode || VAR_11 != VAR_8->d_inode->i_sb)
   break;

  VAR_7 = VAR_8->d_inode;
  if (VAR_6 != FUNC_0(VAR_7)->root)
   break;

  if (FUNC_0(VAR_7)->generation >
      VAR_6->fs_info->last_trans_committed) {
   VAR_13 = FUNC_6(VAR_5, VAR_6, VAR_7, VAR_10);
   if (VAR_13)
    goto end_trans;
  }
  if (FUNC_2(VAR_8))
   break;

  VAR_8 = FUNC_10(VAR_8);
  FUNC_11(VAR_12);
  VAR_12 = VAR_8;
 }
 VAR_13 = 0;
end_trans:
 FUNC_11(VAR_12);
 if (VAR_13 < 0) {
  FUNC_1(VAR_13 != -VAR_1);
  VAR_6->fs_info->last_trans_log_full_commit = VAR_5->transid;
  VAR_13 = 1;
 }
 FUNC_4(VAR_6);
end_no_trans:
 return VAR_13;
}
