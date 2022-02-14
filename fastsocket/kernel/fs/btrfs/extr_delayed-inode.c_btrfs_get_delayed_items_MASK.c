
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct inode {int dummy; } ;
struct btrfs_delayed_node {int refs; int mutex; } ;
struct btrfs_delayed_item {int readdir_list; int refs; } ;


 struct btrfs_delayed_item* FUNC_0 (struct btrfs_delayed_node*) ;
 struct btrfs_delayed_item* FUNC_1 (struct btrfs_delayed_node*) ;
 struct btrfs_delayed_item* FUNC_2 (struct btrfs_delayed_item*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct btrfs_delayed_node* FUNC_5 (struct inode*) ;
 int FUNC_6 (int *,struct list_head*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct inode *VAR_0, struct list_head *VAR_1,
        struct list_head *VAR_2)
{
 struct btrfs_delayed_node *VAR_3;
 struct btrfs_delayed_item *VAR_4;

 VAR_3 = FUNC_5(VAR_0);
 if (!VAR_3)
  return;

 FUNC_7(&VAR_3->mutex);
 VAR_4 = FUNC_1(VAR_3);
 while (VAR_4) {
  FUNC_4(&VAR_4->refs);
  FUNC_6(&VAR_4->readdir_list, VAR_1);
  VAR_4 = FUNC_2(VAR_4);
 }

 VAR_4 = FUNC_0(VAR_3);
 while (VAR_4) {
  FUNC_4(&VAR_4->refs);
  FUNC_6(&VAR_4->readdir_list, VAR_2);
  VAR_4 = FUNC_2(VAR_4);
 }
 FUNC_8(&VAR_3->mutex);
 FUNC_3(&VAR_3->refs);
}
