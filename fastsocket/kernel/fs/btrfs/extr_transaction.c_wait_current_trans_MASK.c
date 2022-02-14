
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_transaction {scalar_t__ blocked; int use_count; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct TYPE_2__ {int trans_lock; int transaction_wait; struct btrfs_transaction* running_transaction; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct btrfs_transaction*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct btrfs_root *VAR_0)
{
 struct btrfs_transaction *VAR_1;

 FUNC_2(&VAR_0->fs_info->trans_lock);
 VAR_1 = VAR_0->fs_info->running_transaction;
 if (VAR_1 && VAR_1->blocked) {
  FUNC_0(&VAR_1->use_count);
  FUNC_3(&VAR_0->fs_info->trans_lock);

  FUNC_4(VAR_0->fs_info->transaction_wait,
      !VAR_1->blocked);
  FUNC_1(VAR_1);
 } else {
  FUNC_3(&VAR_0->fs_info->trans_lock);
 }
}
