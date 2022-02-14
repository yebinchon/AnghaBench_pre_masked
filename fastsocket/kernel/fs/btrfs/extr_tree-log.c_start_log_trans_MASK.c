
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {scalar_t__ log_start_pid; int log_multiple_pids; int log_mutex; int log_writers; int log_batch; TYPE_2__* fs_info; scalar_t__ log_root; } ;
struct TYPE_4__ {int tree_log_mutex; int log_root_tree; } ;
struct TYPE_3__ {scalar_t__ pid; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 int FUNC_2 (struct btrfs_trans_handle*,TYPE_2__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct btrfs_trans_handle *VAR_1,
      struct btrfs_root *VAR_2)
{
 int VAR_3;
 int VAR_4 = 0;

 FUNC_3(&VAR_2->log_mutex);
 if (VAR_2->log_root) {
  if (!VAR_2->log_start_pid) {
   VAR_2->log_start_pid = VAR_0->pid;
   VAR_2->log_multiple_pids = 0;
  } else if (VAR_2->log_start_pid != VAR_0->pid) {
   VAR_2->log_multiple_pids = 1;
  }

  VAR_2->log_batch++;
  FUNC_0(&VAR_2->log_writers);
  FUNC_4(&VAR_2->log_mutex);
  return 0;
 }
 VAR_2->log_multiple_pids = 0;
 VAR_2->log_start_pid = VAR_0->pid;
 FUNC_3(&VAR_2->fs_info->tree_log_mutex);
 if (!VAR_2->fs_info->log_root_tree) {
  VAR_3 = FUNC_2(VAR_1, VAR_2->fs_info);
  if (VAR_3)
   VAR_4 = VAR_3;
 }
 if (VAR_4 == 0 && !VAR_2->log_root) {
  VAR_3 = FUNC_1(VAR_1, VAR_2);
  if (VAR_3)
   VAR_4 = VAR_3;
 }
 FUNC_4(&VAR_2->fs_info->tree_log_mutex);
 VAR_2->log_batch++;
 FUNC_0(&VAR_2->log_writers);
 FUNC_4(&VAR_2->log_mutex);
 return VAR_4;
}
