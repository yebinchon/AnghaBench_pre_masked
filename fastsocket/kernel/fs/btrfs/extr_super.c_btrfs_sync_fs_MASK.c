
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_fs_info {TYPE_1__* btree_inode; struct btrfs_root* tree_root; } ;
struct TYPE_2__ {int i_mapping; } ;


 scalar_t__ FUNC_0 (struct btrfs_trans_handle*) ;
 int FUNC_1 (struct btrfs_trans_handle*) ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 struct btrfs_fs_info* FUNC_3 (struct super_block*) ;
 struct btrfs_trans_handle* FUNC_4 (struct btrfs_root*,int ) ;
 int FUNC_5 (struct btrfs_root*,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;

int FUNC_8(struct super_block *VAR_0, int VAR_1)
{
 struct btrfs_trans_handle *VAR_2;
 struct btrfs_fs_info *VAR_3 = FUNC_3(VAR_0);
 struct btrfs_root *VAR_4 = VAR_3->tree_root;
 int VAR_5;

 FUNC_7(VAR_1);

 if (!VAR_1) {
  FUNC_6(VAR_3->btree_inode->i_mapping);
  return 0;
 }

 FUNC_5(VAR_4, 0, 0);

 VAR_2 = FUNC_4(VAR_4, 0);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);
 VAR_5 = FUNC_2(VAR_2, VAR_4);
 return VAR_5;
}
