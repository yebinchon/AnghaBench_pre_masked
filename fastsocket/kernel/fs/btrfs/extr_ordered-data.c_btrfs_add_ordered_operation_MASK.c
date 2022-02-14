
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {TYPE_2__* fs_info; } ;
struct TYPE_6__ {int ordered_operations; int last_trans; int generation; } ;
struct TYPE_5__ {scalar_t__ last_trans_committed; int ordered_extent_lock; int ordered_operations; TYPE_1__* running_transaction; } ;
struct TYPE_4__ {scalar_t__ blocked; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,int ,scalar_t__) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct btrfs_trans_handle *VAR_0,
     struct btrfs_root *VAR_1, struct inode *VAR_2)
{
 u64 VAR_3;

 VAR_3 = FUNC_4(FUNC_0(VAR_2)->generation, FUNC_0(VAR_2)->last_trans);





 if (VAR_3 < VAR_1->fs_info->last_trans_committed)
  return;





 if (VAR_0 && VAR_1->fs_info->running_transaction->blocked) {
  FUNC_1(VAR_2, 0, (u64)-1);
  return;
 }

 FUNC_5(&VAR_1->fs_info->ordered_extent_lock);
 if (FUNC_3(&FUNC_0(VAR_2)->ordered_operations)) {
  FUNC_2(&FUNC_0(VAR_2)->ordered_operations,
         &VAR_1->fs_info->ordered_operations);
 }
 FUNC_6(&VAR_1->fs_info->ordered_extent_lock);
}
