
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct btrfs_ordered_sum {int list; } ;
struct btrfs_ordered_inode_tree {int lock; } ;
struct btrfs_ordered_extent {int list; } ;
struct TYPE_2__ {struct btrfs_ordered_inode_tree ordered_tree; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct inode *VAR_0,
      struct btrfs_ordered_extent *VAR_1,
      struct btrfs_ordered_sum *VAR_2)
{
 struct btrfs_ordered_inode_tree *VAR_3;

 VAR_3 = &FUNC_0(VAR_0)->ordered_tree;
 FUNC_2(&VAR_3->lock);
 FUNC_1(&VAR_2->list, &VAR_1->list);
 FUNC_3(&VAR_3->lock);
}
