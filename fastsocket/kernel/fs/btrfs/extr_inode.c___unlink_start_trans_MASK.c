
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int i_mode; int i_count; } ;
struct TYPE_4__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; struct inode* d_inode; } ;
struct btrfs_trans_handle {int * block_rsv; int bytes_reserved; } ;
struct btrfs_root {TYPE_2__* fs_info; } ;
struct btrfs_path {int skip_locking; int search_commit_root; int * nodes; } ;
struct btrfs_inode_ref {int * block_rsv; int bytes_reserved; } ;
struct btrfs_dir_item {int * block_rsv; int bytes_reserved; } ;
struct TYPE_6__ {int location; struct btrfs_root* root; } ;
struct TYPE_5__ {int global_block_rsv; scalar_t__ enospc_unlink; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct btrfs_trans_handle* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct btrfs_trans_handle*) ;
 int FUNC_4 (struct btrfs_trans_handle*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 struct btrfs_path* FUNC_8 () ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 int FUNC_11 (struct btrfs_path*) ;
 scalar_t__ FUNC_12 (struct inode*) ;
 scalar_t__ FUNC_13 (int ,struct btrfs_trans_handle*) ;
 struct btrfs_trans_handle* FUNC_14 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,scalar_t__,scalar_t__,int ,int ,int ) ;
 struct btrfs_trans_handle* FUNC_15 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,scalar_t__,int ,int ,int ) ;
 int FUNC_16 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,scalar_t__,scalar_t__,int ) ;
 int FUNC_17 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,int *,int ) ;
 struct btrfs_trans_handle* FUNC_18 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,int ,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_19 (struct btrfs_path*) ;
 struct btrfs_trans_handle* FUNC_20 (struct btrfs_root*,int) ;
 scalar_t__ FUNC_21 (struct btrfs_root*,struct btrfs_path*) ;
 scalar_t__ FUNC_22 (scalar_t__*,int) ;

__attribute__((used)) static struct btrfs_trans_handle *FUNC_23(struct inode *VAR_4,
             struct dentry *VAR_5)
{
 struct btrfs_trans_handle *VAR_6;
 struct btrfs_root *VAR_7 = FUNC_0(VAR_4)->root;
 struct btrfs_path *VAR_8;
 struct btrfs_inode_ref *VAR_9;
 struct btrfs_dir_item *VAR_10;
 struct inode *VAR_11 = VAR_5->d_inode;
 u64 VAR_12;
 int VAR_13 = 1;
 int VAR_14 = -VAR_3;
 int VAR_15;
 u64 VAR_16 = FUNC_12(VAR_11);
 u64 VAR_17 = FUNC_12(VAR_4);
 VAR_6 = FUNC_20(VAR_7, 8);
 if (!FUNC_3(VAR_6) || FUNC_4(VAR_6) != -VAR_3)
  return VAR_6;

 if (VAR_16 == VAR_0)
  return FUNC_2(-VAR_3);


 if (FUNC_5(VAR_11->i_mode) && FUNC_7(&VAR_11->i_count) > 1)
  return FUNC_2(-VAR_3);

 if (FUNC_7(&VAR_11->i_count) > 2)
  return FUNC_2(-VAR_3);

 if (FUNC_22(&VAR_7->fs_info->enospc_unlink, 1))
  return FUNC_2(-VAR_3);

 VAR_8 = FUNC_8();
 if (!VAR_8) {
  VAR_7->fs_info->enospc_unlink = 0;
  return FUNC_2(-VAR_2);
 }


 VAR_6 = FUNC_20(VAR_7, 1);
 if (FUNC_3(VAR_6)) {
  FUNC_11(VAR_8);
  VAR_7->fs_info->enospc_unlink = 0;
  return VAR_6;
 }

 VAR_8->skip_locking = 1;
 VAR_8->search_commit_root = 1;

 VAR_15 = FUNC_17(VAR_6, VAR_7, VAR_8,
    &FUNC_0(VAR_4)->location, 0);
 if (VAR_15 < 0) {
  VAR_14 = VAR_15;
  goto out;
 }
 if (VAR_15 == 0) {
  if (FUNC_21(VAR_7, VAR_8))
   goto out;
 } else {
  VAR_13 = 0;
 }
 FUNC_19(VAR_8);

 VAR_15 = FUNC_17(VAR_6, VAR_7, VAR_8,
    &FUNC_0(VAR_11)->location, 0);
 if (VAR_15 < 0) {
  VAR_14 = VAR_15;
  goto out;
 }
 if (VAR_15 == 0) {
  if (FUNC_21(VAR_7, VAR_8))
   goto out;
 } else {
  VAR_13 = 0;
 }
 FUNC_19(VAR_8);

 if (VAR_15 == 0 && FUNC_6(VAR_11->i_mode)) {
  VAR_15 = FUNC_16(VAR_6, VAR_7, VAR_8,
            VAR_16, (u64)-1, 0);
  if (VAR_15 < 0) {
   VAR_14 = VAR_15;
   goto out;
  }
  FUNC_1(VAR_15 == 0);
  if (FUNC_21(VAR_7, VAR_8))
   goto out;
  FUNC_19(VAR_8);
 }

 if (!VAR_13) {
  VAR_14 = 0;
  goto out;
 }

 VAR_10 = FUNC_15(VAR_6, VAR_7, VAR_8, VAR_17,
    VAR_5->d_name.name, VAR_5->d_name.len, 0);
 if (FUNC_3(VAR_10)) {
  VAR_14 = FUNC_4(VAR_10);
  goto out;
 }
 if (VAR_10) {
  if (FUNC_21(VAR_7, VAR_8))
   goto out;
 } else {
  VAR_14 = 0;
  goto out;
 }
 FUNC_19(VAR_8);

 VAR_9 = FUNC_18(VAR_6, VAR_7, VAR_8,
    VAR_5->d_name.name, VAR_5->d_name.len,
    VAR_16, VAR_17, 0);
 if (FUNC_3(VAR_9)) {
  VAR_14 = FUNC_4(VAR_9);
  goto out;
 }
 FUNC_1(!VAR_9);
 if (FUNC_21(VAR_7, VAR_8))
  goto out;
 VAR_12 = FUNC_13(VAR_8->nodes[0], VAR_9);
 FUNC_19(VAR_8);
 VAR_10 = FUNC_14(VAR_6, VAR_7, VAR_8, VAR_17, VAR_12,
    VAR_5->d_name.name, VAR_5->d_name.len, 0);
 if (FUNC_3(VAR_10)) {
  VAR_14 = FUNC_4(VAR_10);
  goto out;
 }
 FUNC_1(VAR_15 == -VAR_1);
 if (FUNC_21(VAR_7, VAR_8))
  goto out;

 VAR_14 = 0;
out:
 FUNC_11(VAR_8);

 if (!VAR_14)
  VAR_14 = FUNC_9(VAR_6->block_rsv,
    &VAR_7->fs_info->global_block_rsv,
    VAR_6->bytes_reserved);

 if (VAR_14) {
  FUNC_10(VAR_6, VAR_7);
  VAR_7->fs_info->enospc_unlink = 0;
  return FUNC_2(VAR_14);
 }

 VAR_6->block_rsv = &VAR_7->fs_info->global_block_rsv;
 return VAR_6;
}
