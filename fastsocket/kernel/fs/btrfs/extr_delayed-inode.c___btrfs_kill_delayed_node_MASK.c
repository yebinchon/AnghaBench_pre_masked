
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_root {int dummy; } ;
struct btrfs_delayed_node {int mutex; scalar_t__ inode_dirty; struct btrfs_root* root; } ;
struct btrfs_delayed_item {int dummy; } ;


 struct btrfs_delayed_item* FUNC_0 (struct btrfs_delayed_node*) ;
 struct btrfs_delayed_item* FUNC_1 (struct btrfs_delayed_node*) ;
 struct btrfs_delayed_item* FUNC_2 (struct btrfs_delayed_item*) ;
 int FUNC_3 (struct btrfs_root*,struct btrfs_delayed_node*) ;
 int FUNC_4 (struct btrfs_root*,struct btrfs_delayed_item*) ;
 int FUNC_5 (struct btrfs_delayed_node*) ;
 int FUNC_6 (struct btrfs_delayed_item*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct btrfs_delayed_node *VAR_0)
{
 struct btrfs_root *VAR_1 = VAR_0->root;
 struct btrfs_delayed_item *VAR_2, *VAR_3;

 FUNC_7(&VAR_0->mutex);
 VAR_2 = FUNC_1(VAR_0);
 while (VAR_2) {
  FUNC_4(VAR_1, VAR_2);
  VAR_3 = VAR_2;
  VAR_2 = FUNC_2(VAR_3);
  FUNC_6(VAR_3);
 }

 VAR_2 = FUNC_0(VAR_0);
 while (VAR_2) {
  FUNC_4(VAR_1, VAR_2);
  VAR_3 = VAR_2;
  VAR_2 = FUNC_2(VAR_3);
  FUNC_6(VAR_3);
 }

 if (VAR_0->inode_dirty) {
  FUNC_3(VAR_1, VAR_0);
  FUNC_5(VAR_0);
 }
 FUNC_8(&VAR_0->mutex);
}
