
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {TYPE_1__* d_parent; struct inode* d_inode; } ;
struct btrfs_root {int root_item; } ;
struct TYPE_4__ {struct btrfs_root* root; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct dentry*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct dentry *VAR_1)
{
 struct btrfs_root *VAR_2;
 struct inode *VAR_3 = VAR_1->d_inode;

 if (!VAR_3 && !FUNC_1(VAR_1))
  VAR_3 = VAR_1->d_parent->d_inode;

 if (VAR_3) {
  VAR_2 = FUNC_0(VAR_3)->root;
  if (FUNC_3(&VAR_2->root_item) == 0)
   return 1;

  if (FUNC_2(VAR_3) == VAR_0)
   return 1;
 }
 return 0;
}
