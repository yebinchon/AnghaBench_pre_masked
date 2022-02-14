
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_root {TYPE_1__* fs_info; int dirty_list; scalar_t__ track_dirty; } ;
struct TYPE_2__ {int trans_lock; int dirty_cowonly_roots; } ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct btrfs_root *VAR_0)
{
 FUNC_2(&VAR_0->fs_info->trans_lock);
 if (VAR_0->track_dirty && FUNC_1(&VAR_0->dirty_list)) {
  FUNC_0(&VAR_0->dirty_list,
    &VAR_0->fs_info->dirty_cowonly_roots);
 }
 FUNC_3(&VAR_0->fs_info->trans_lock);
}
