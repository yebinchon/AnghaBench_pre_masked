
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct inode {scalar_t__ i_generation; int * d_op; int root_item; } ;
struct dentry {scalar_t__ i_generation; int * d_op; int root_item; } ;
struct btrfs_root {scalar_t__ i_generation; int * d_op; int root_item; } ;
struct btrfs_key {scalar_t__ offset; scalar_t__ objectid; } ;
struct btrfs_fs_info {int subvol_srcu; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct inode* FUNC_0 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int VAR_5 ;
 struct inode* FUNC_3 (struct super_block*,struct btrfs_key*,struct inode*,int *) ;
 struct inode* FUNC_4 (struct btrfs_fs_info*,struct btrfs_key*) ;
 scalar_t__ FUNC_5 (int *) ;
 struct btrfs_fs_info* FUNC_6 (struct super_block*) ;
 int FUNC_7 (struct btrfs_key*,int ) ;
 struct inode* FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;

__attribute__((used)) static struct dentry *FUNC_12(struct super_block *VAR_6, u64 VAR_7,
           u64 VAR_8, u32 VAR_9,
           int VAR_10)
{
 struct btrfs_fs_info *VAR_11 = FUNC_6(VAR_6);
 struct btrfs_root *VAR_12;
 struct dentry *VAR_13;
 struct inode *VAR_14;
 struct btrfs_key VAR_15;
 int VAR_16;
 int VAR_17 = 0;

 if (VAR_7 < VAR_0)
  return FUNC_0(-VAR_4);

 VAR_15.objectid = VAR_8;
 FUNC_7(&VAR_15, VAR_2);
 VAR_15.offset = (u64)-1;

 VAR_16 = FUNC_10(&VAR_11->subvol_srcu);

 VAR_12 = FUNC_4(VAR_11, &VAR_15);
 if (FUNC_1(VAR_12)) {
  VAR_17 = FUNC_2(VAR_12);
  goto fail;
 }

 if (FUNC_5(&VAR_12->root_item) == 0) {
  VAR_17 = -VAR_3;
  goto fail;
 }

 VAR_15.objectid = VAR_7;
 FUNC_7(&VAR_15, VAR_1);
 VAR_15.offset = 0;

 VAR_14 = FUNC_3(VAR_6, &VAR_15, VAR_12, ((void*)0));
 if (FUNC_1(VAR_14)) {
  VAR_17 = FUNC_2(VAR_14);
  goto fail;
 }

 FUNC_11(&VAR_11->subvol_srcu, VAR_16);

 if (VAR_10 && VAR_9 != VAR_14->i_generation) {
  FUNC_9(VAR_14);
  return FUNC_0(-VAR_4);
 }

 VAR_13 = FUNC_8(VAR_14);
 if (!FUNC_1(VAR_13))
  VAR_13->d_op = &VAR_5;
 return VAR_13;
fail:
 FUNC_11(&VAR_11->subvol_srcu, VAR_16);
 return FUNC_0(VAR_17);
}
