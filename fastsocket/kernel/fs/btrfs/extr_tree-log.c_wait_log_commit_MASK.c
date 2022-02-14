
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_trans_handle {scalar_t__ transid; } ;
struct btrfs_root {unsigned long log_transid; int log_mutex; int * log_commit_wait; int * log_commit; TYPE_1__* fs_info; } ;
struct TYPE_2__ {scalar_t__ last_trans_log_full_commit; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 () ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(struct btrfs_trans_handle *VAR_2,
      struct btrfs_root *VAR_3, unsigned long VAR_4)
{
 FUNC_0(VAR_1);
 int VAR_5 = VAR_4 % 2;






 do {
  FUNC_5(&VAR_3->log_commit_wait[VAR_5],
    &VAR_1, VAR_0);
  FUNC_4(&VAR_3->log_mutex);

  if (VAR_3->fs_info->last_trans_log_full_commit !=
      VAR_2->transid && VAR_3->log_transid < VAR_4 + 2 &&
      FUNC_1(&VAR_3->log_commit[VAR_5]))
   FUNC_6();

  FUNC_2(&VAR_3->log_commit_wait[VAR_5], &VAR_1);
  FUNC_3(&VAR_3->log_mutex);
 } while (VAR_3->fs_info->last_trans_log_full_commit !=
   VAR_2->transid && VAR_3->log_transid < VAR_4 + 2 &&
   FUNC_1(&VAR_3->log_commit[VAR_5]));
 return 0;
}
