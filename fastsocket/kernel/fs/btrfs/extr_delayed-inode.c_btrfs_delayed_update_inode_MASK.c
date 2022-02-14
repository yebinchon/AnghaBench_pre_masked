
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {TYPE_2__* fs_info; } ;
struct btrfs_delayed_node {int inode_dirty; int mutex; int count; int inode_item; } ;
struct TYPE_4__ {TYPE_1__* delayed_root; } ;
struct TYPE_3__ {int items; } ;


 scalar_t__ FUNC_0 (struct btrfs_delayed_node*) ;
 int FUNC_1 (struct btrfs_delayed_node*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*,struct btrfs_delayed_node*) ;
 struct btrfs_delayed_node* FUNC_4 (struct inode*) ;
 int FUNC_5 (struct btrfs_delayed_node*) ;
 int FUNC_6 (struct btrfs_trans_handle*,int *,struct inode*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct btrfs_trans_handle *VAR_0,
          struct btrfs_root *VAR_1, struct inode *VAR_2)
{
 struct btrfs_delayed_node *VAR_3;
 int VAR_4 = 0;

 VAR_3 = FUNC_4(VAR_2);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 FUNC_7(&VAR_3->mutex);
 if (VAR_3->inode_dirty) {
  FUNC_6(VAR_0, &VAR_3->inode_item, VAR_2);
  goto release_node;
 }

 VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2,
         VAR_3);
 if (VAR_4)
  goto release_node;

 FUNC_6(VAR_0, &VAR_3->inode_item, VAR_2);
 VAR_3->inode_dirty = 1;
 VAR_3->count++;
 FUNC_2(&VAR_1->fs_info->delayed_root->items);
release_node:
 FUNC_8(&VAR_3->mutex);
 FUNC_5(VAR_3);
 return VAR_4;
}
