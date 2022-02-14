
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_root {TYPE_1__* fs_info; int root_list; } ;
struct TYPE_2__ {int trans_lock; int dead_roots; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct btrfs_root *VAR_0)
{
 FUNC_1(&VAR_0->fs_info->trans_lock);
 FUNC_0(&VAR_0->root_list, &VAR_0->fs_info->dead_roots);
 FUNC_2(&VAR_0->fs_info->trans_lock);
 return 0;
}
