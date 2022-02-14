
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_mapping; } ;
struct btrfs_trans_handle {TYPE_2__* transaction; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct TYPE_4__ {int dirty_pages; } ;
struct TYPE_3__ {struct inode* btree_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_root*,int *,int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct btrfs_trans_handle *VAR_1,
         struct btrfs_root *VAR_2)
{
 if (!VAR_1 || !VAR_1->transaction) {
  struct inode *VAR_3;
  VAR_3 = VAR_2->fs_info->btree_inode;
  return FUNC_1(VAR_3->i_mapping);
 }
 return FUNC_0(VAR_2,
        &VAR_1->transaction->dirty_pages,
        VAR_0);
}
