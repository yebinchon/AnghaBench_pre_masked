
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct btrfs_delayed_node {int dummy; } ;


 int FUNC_0 (struct btrfs_delayed_node*) ;
 struct btrfs_delayed_node* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct btrfs_delayed_node*) ;

void FUNC_3(struct inode *VAR_0)
{
 struct btrfs_delayed_node *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (!VAR_1)
  return;

 FUNC_0(VAR_1);
 FUNC_2(VAR_1);
}
