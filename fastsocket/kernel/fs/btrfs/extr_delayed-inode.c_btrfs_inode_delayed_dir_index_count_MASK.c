
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct btrfs_delayed_node {scalar_t__ index_cnt; } ;
struct TYPE_2__ {scalar_t__ index_cnt; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct btrfs_delayed_node* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct btrfs_delayed_node*) ;

int FUNC_3(struct inode *VAR_2)
{
 struct btrfs_delayed_node *VAR_3 = FUNC_1(VAR_2);

 if (!VAR_3)
  return -VAR_1;






 if (!VAR_3->index_cnt) {
  FUNC_2(VAR_3);
  return -VAR_0;
 }

 FUNC_0(VAR_2)->index_cnt = VAR_3->index_cnt;
 FUNC_2(VAR_3);
 return 0;
}
