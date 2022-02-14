
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_root {int dummy; } ;
struct btrfs_key {int dummy; } ;
struct btrfs_delayed_node {int mutex; } ;
struct btrfs_delayed_item {int dummy; } ;


 struct btrfs_delayed_item* FUNC_0 (struct btrfs_delayed_node*,struct btrfs_key*) ;
 int FUNC_1 (struct btrfs_root*,struct btrfs_delayed_item*) ;
 int FUNC_2 (struct btrfs_delayed_item*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct btrfs_root *VAR_0,
            struct btrfs_delayed_node *VAR_1,
            struct btrfs_key *VAR_2)
{
 struct btrfs_delayed_item *VAR_3;

 FUNC_3(&VAR_1->mutex);
 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_3) {
  FUNC_4(&VAR_1->mutex);
  return 1;
 }

 FUNC_1(VAR_0, VAR_3);
 FUNC_2(VAR_3);
 FUNC_4(&VAR_1->mutex);
 return 0;
}
