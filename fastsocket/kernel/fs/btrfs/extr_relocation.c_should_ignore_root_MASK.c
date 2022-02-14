
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct btrfs_root {TYPE_2__* fs_info; int root_item; struct btrfs_root* reloc_root; int ref_cows; } ;
struct TYPE_4__ {TYPE_1__* running_transaction; } ;
struct TYPE_3__ {int transid; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct btrfs_root *VAR_0)
{
 struct btrfs_root *VAR_1;

 if (!VAR_0->ref_cows)
  return 0;

 VAR_1 = VAR_0->reloc_root;
 if (!VAR_1)
  return 0;

 if (FUNC_0(&VAR_1->root_item) ==
     VAR_0->fs_info->running_transaction->transid - 1)
  return 0;






 return 1;
}
