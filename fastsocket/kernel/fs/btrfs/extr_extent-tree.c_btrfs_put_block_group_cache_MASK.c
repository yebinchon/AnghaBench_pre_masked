
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct btrfs_fs_info {int tree_root; } ;
struct TYPE_2__ {scalar_t__ objectid; scalar_t__ offset; } ;
struct btrfs_block_group_cache {TYPE_1__ key; int lock; struct inode* inode; scalar_t__ iref; } ;


 struct btrfs_block_group_cache* FUNC_0 (struct btrfs_fs_info*,scalar_t__) ;
 int FUNC_1 (struct btrfs_block_group_cache*) ;
 int FUNC_2 (struct inode*) ;
 struct btrfs_block_group_cache* FUNC_3 (int ,struct btrfs_block_group_cache*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct btrfs_fs_info *VAR_0)
{
 struct btrfs_block_group_cache *VAR_1;
 u64 VAR_2 = 0;

 while (1) {
  struct inode *VAR_3;

  VAR_1 = FUNC_0(VAR_0, VAR_2);
  while (VAR_1) {
   FUNC_4(&VAR_1->lock);
   if (VAR_1->iref)
    break;
   FUNC_5(&VAR_1->lock);
   VAR_1 = FUNC_3(VAR_0->tree_root,
             VAR_1);
  }
  if (!VAR_1) {
   if (VAR_2 == 0)
    break;
   VAR_2 = 0;
   continue;
  }

  VAR_3 = VAR_1->inode;
  VAR_1->iref = 0;
  VAR_1->inode = ((void*)0);
  FUNC_5(&VAR_1->lock);
  FUNC_2(VAR_3);
  VAR_2 = VAR_1->key.objectid + VAR_1->key.offset;
  FUNC_1(VAR_1);
 }
}
