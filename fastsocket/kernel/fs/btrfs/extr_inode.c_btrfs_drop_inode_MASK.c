
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct btrfs_root {int root_item; } ;
struct TYPE_2__ {struct btrfs_root* root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct btrfs_root*,struct inode*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;

void FUNC_5(struct inode *VAR_0)
{
 struct btrfs_root *VAR_1 = FUNC_0(VAR_0)->root;

 if (FUNC_2(&VAR_1->root_item) == 0 &&
     !FUNC_1(VAR_1, VAR_0))
  FUNC_3(VAR_0);
 else
  FUNC_4(VAR_0);
}
