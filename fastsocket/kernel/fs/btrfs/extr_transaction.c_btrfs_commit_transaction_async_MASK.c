
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_transaction {int use_count; } ;
struct btrfs_trans_handle {struct btrfs_transaction* transaction; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_async_commit {int work; int newtrans; struct btrfs_root* root; } ;
struct TYPE_2__ {struct btrfs_trans_handle* journal_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 int FUNC_5 (struct btrfs_root*) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct btrfs_async_commit*) ;
 struct btrfs_async_commit* FUNC_7 (int,int ) ;
 int FUNC_8 (struct btrfs_transaction*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (struct btrfs_root*,struct btrfs_transaction*) ;
 int FUNC_11 (struct btrfs_root*,struct btrfs_transaction*) ;

int FUNC_12(struct btrfs_trans_handle *VAR_4,
       struct btrfs_root *VAR_5,
       int VAR_6)
{
 struct btrfs_async_commit *VAR_7;
 struct btrfs_transaction *VAR_8;

 VAR_7 = FUNC_7(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_0(&VAR_7->work, VAR_3);
 VAR_7->root = VAR_5;
 VAR_7->newtrans = FUNC_5(VAR_5);
 if (FUNC_1(VAR_7->newtrans)) {
  int VAR_9 = FUNC_2(VAR_7->newtrans);
  FUNC_6(VAR_7);
  return VAR_9;
 }


 VAR_8 = VAR_4->transaction;
 FUNC_3(&VAR_8->use_count);

 FUNC_4(VAR_4, VAR_5);
 FUNC_9(&VAR_7->work, 0);


 if (VAR_6)
  FUNC_11(VAR_5, VAR_8);
 else
  FUNC_10(VAR_5, VAR_8);

 if (VAR_2->journal_info == VAR_4)
  VAR_2->journal_info = ((void*)0);

 FUNC_8(VAR_8);
 return 0;
}
