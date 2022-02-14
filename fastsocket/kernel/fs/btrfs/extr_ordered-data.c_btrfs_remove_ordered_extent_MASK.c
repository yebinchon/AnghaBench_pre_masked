
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rb_node {int dummy; } ;
struct inode {int i_mapping; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct btrfs_ordered_inode_tree {int tree; int lock; int * last; } ;
struct btrfs_ordered_extent {int wait; int root_extent_list; int flags; struct rb_node rb_node; } ;
struct TYPE_4__ {int ordered_operations; struct btrfs_ordered_inode_tree ordered_tree; struct btrfs_root* root; } ;
struct TYPE_3__ {int ordered_extent_lock; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct rb_node*,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct inode*,struct btrfs_ordered_extent*) ;
 int FUNC_11 (int *) ;

void FUNC_12(struct inode *VAR_2,
     struct btrfs_ordered_extent *VAR_3)
{
 struct btrfs_ordered_inode_tree *VAR_4;
 struct btrfs_root *VAR_5 = FUNC_0(VAR_2)->root;
 struct rb_node *VAR_6;

 VAR_4 = &FUNC_0(VAR_2)->ordered_tree;
 FUNC_7(&VAR_4->lock);
 VAR_6 = &VAR_3->rb_node;
 FUNC_4(VAR_6, &VAR_4->tree);
 VAR_4->last = ((void*)0);
 FUNC_5(VAR_0, &VAR_3->flags);
 FUNC_9(&VAR_4->lock);

 FUNC_6(&VAR_5->fs_info->ordered_extent_lock);
 FUNC_2(&VAR_3->root_extent_list);

 FUNC_10(VAR_2, VAR_3);






 if (FUNC_1(&VAR_4->tree) &&
     !FUNC_3(VAR_2->i_mapping, VAR_1)) {
  FUNC_2(&FUNC_0(VAR_2)->ordered_operations);
 }
 FUNC_8(&VAR_5->fs_info->ordered_extent_lock);
 FUNC_11(&VAR_3->wait);
}
