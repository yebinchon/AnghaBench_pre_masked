
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_trans_handle {scalar_t__ transid; } ;
struct btrfs_root {scalar_t__ last_trans; TYPE_1__* fs_info; int in_trans_setup; int ref_cows; } ;
struct TYPE_2__ {int reloc_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 int FUNC_3 () ;

int FUNC_4(struct btrfs_trans_handle *VAR_0,
          struct btrfs_root *VAR_1)
{
 if (!VAR_1->ref_cows)
  return 0;





 FUNC_3();
 if (VAR_1->last_trans == VAR_0->transid &&
     !VAR_1->in_trans_setup)
  return 0;

 FUNC_0(&VAR_1->fs_info->reloc_mutex);
 FUNC_2(VAR_0, VAR_1);
 FUNC_1(&VAR_1->fs_info->reloc_mutex);

 return 0;
}
