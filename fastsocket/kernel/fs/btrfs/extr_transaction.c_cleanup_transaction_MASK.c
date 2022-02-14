
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct btrfs_transaction {int list; } ;
struct btrfs_trans_handle {int use_count; struct btrfs_transaction* transaction; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct TYPE_4__ {struct btrfs_trans_handle* journal_info; } ;
struct TYPE_3__ {int trans_lock; scalar_t__ trans_no_join; struct btrfs_transaction* running_transaction; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_root*,int) ;
 int FUNC_2 (struct btrfs_transaction*,struct btrfs_root*) ;
 int FUNC_3 (struct btrfs_root*) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_4 (int ,struct btrfs_trans_handle*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct btrfs_transaction*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct btrfs_root*) ;

__attribute__((used)) static void FUNC_10(struct btrfs_trans_handle *VAR_2,
    struct btrfs_root *VAR_3, int VAR_4)
{
 struct btrfs_transaction *VAR_5 = VAR_2->transaction;

 FUNC_0(VAR_2->use_count > 1);

 FUNC_1(VAR_2, VAR_3, VAR_4);

 FUNC_7(&VAR_3->fs_info->trans_lock);
 FUNC_5(&VAR_5->list);
 if (VAR_5 == VAR_3->fs_info->running_transaction) {
  VAR_3->fs_info->running_transaction = ((void*)0);
  VAR_3->fs_info->trans_no_join = 0;
 }
 FUNC_8(&VAR_3->fs_info->trans_lock);

 FUNC_2(VAR_2->transaction, VAR_3);

 FUNC_6(VAR_5);
 FUNC_6(VAR_5);

 FUNC_9(VAR_3);

 FUNC_3(VAR_3);

 if (VAR_1->journal_info == VAR_2)
  VAR_1->journal_info = ((void*)0);

 FUNC_4(VAR_0, VAR_2);
}
