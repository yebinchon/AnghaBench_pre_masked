
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_root {int dummy; } ;
struct btrfs_delayed_root {int dummy; } ;
struct btrfs_delayed_node {int dummy; } ;


 int FUNC_0 (struct btrfs_delayed_node*) ;
 struct btrfs_delayed_node* FUNC_1 (struct btrfs_delayed_root*) ;
 struct btrfs_delayed_root* FUNC_2 (struct btrfs_root*) ;
 struct btrfs_delayed_node* FUNC_3 (struct btrfs_delayed_node*) ;
 int FUNC_4 (struct btrfs_delayed_node*) ;

void FUNC_5(struct btrfs_root *VAR_0)
{
 struct btrfs_delayed_root *VAR_1;
 struct btrfs_delayed_node *VAR_2, *VAR_3;

 VAR_1 = FUNC_2(VAR_0);

 VAR_2 = FUNC_1(VAR_1);
 while (VAR_2) {
  FUNC_0(VAR_2);

  VAR_3 = VAR_2;
  VAR_2 = FUNC_3(VAR_2);
  FUNC_4(VAR_3);
 }
}
