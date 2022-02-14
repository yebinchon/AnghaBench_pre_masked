
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct btrfs_root {int inode_lock; int inode_tree; TYPE_1__* fs_info; int root_item; } ;
struct TYPE_4__ {int rb_node; struct btrfs_root* root; } ;
struct TYPE_3__ {int subvol_srcu; struct btrfs_root* tree_root; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct btrfs_root*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct inode *VAR_0)
{
 struct btrfs_root *VAR_1 = FUNC_0(VAR_0)->root;
 int VAR_2 = 0;

 FUNC_7(&VAR_1->inode_lock);
 if (!FUNC_2(&FUNC_0(VAR_0)->rb_node)) {
  FUNC_6(&FUNC_0(VAR_0)->rb_node, &VAR_1->inode_tree);
  FUNC_1(&FUNC_0(VAR_0)->rb_node);
  VAR_2 = FUNC_3(&VAR_1->inode_tree);
 }
 FUNC_8(&VAR_1->inode_lock);







 if (VAR_2 && FUNC_5(&VAR_1->root_item) == 0 &&
     VAR_1 != VAR_1->fs_info->tree_root) {
  FUNC_9(&VAR_1->fs_info->subvol_srcu);
  FUNC_7(&VAR_1->inode_lock);
  VAR_2 = FUNC_3(&VAR_1->inode_tree);
  FUNC_8(&VAR_1->inode_lock);
  if (VAR_2)
   FUNC_4(VAR_1);
 }
}
