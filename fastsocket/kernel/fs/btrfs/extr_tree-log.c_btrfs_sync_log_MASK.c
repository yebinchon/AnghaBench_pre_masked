
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct btrfs_trans_handle {scalar_t__ transid; } ;
struct btrfs_root {int log_transid; unsigned long log_batch; unsigned long last_log_commit; int * log_commit_wait; int * log_commit; int log_mutex; TYPE_1__* fs_info; TYPE_2__* node; int dirty_log_pages; int log_writer_wait; int log_writers; scalar_t__ log_start_pid; int root_item; scalar_t__ log_multiple_pids; struct btrfs_root* log_root; } ;
struct TYPE_5__ {int start; } ;
struct TYPE_4__ {scalar_t__ last_trans_log_full_commit; int tree_root; int super_for_commit; struct btrfs_root* log_root_tree; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct btrfs_trans_handle*,struct btrfs_root*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct btrfs_root*) ;
 int FUNC_7 (struct btrfs_root*) ;
 int FUNC_8 (int *,TYPE_2__*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct btrfs_root*,int ) ;
 int FUNC_12 (struct btrfs_root*,int *,int) ;
 int FUNC_13 (struct btrfs_root*,int *,int) ;
 int FUNC_14 (struct btrfs_root*,int *,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int) ;
 int FUNC_18 () ;
 int FUNC_19 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 int FUNC_20 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 int FUNC_21 (struct btrfs_trans_handle*,struct btrfs_root*,int) ;
 scalar_t__ FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (struct btrfs_trans_handle*,int ,int) ;

int FUNC_25(struct btrfs_trans_handle *VAR_5,
     struct btrfs_root *VAR_6)
{
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 struct btrfs_root *VAR_11 = VAR_6->log_root;
 struct btrfs_root *VAR_12 = VAR_6->fs_info->log_root_tree;
 unsigned long VAR_13 = 0;

 FUNC_15(&VAR_6->log_mutex);
 VAR_7 = VAR_6->log_transid % 2;
 if (FUNC_2(&VAR_6->log_commit[VAR_7])) {
  FUNC_21(VAR_5, VAR_6, VAR_6->log_transid);
  FUNC_16(&VAR_6->log_mutex);
  return 0;
 }
 FUNC_3(&VAR_6->log_commit[VAR_7], 1);


 if (FUNC_2(&VAR_6->log_commit[(VAR_7 + 1) % 2]))
  FUNC_21(VAR_5, VAR_6, VAR_6->log_transid - 1);
 while (1) {
  unsigned long VAR_14 = VAR_6->log_batch;

  if (!FUNC_11(VAR_6, VAR_4) && VAR_6->log_multiple_pids) {
   FUNC_16(&VAR_6->log_mutex);
   FUNC_17(1);
   FUNC_15(&VAR_6->log_mutex);
  }
  FUNC_20(VAR_5, VAR_6);
  if (VAR_14 == VAR_6->log_batch)
   break;
 }


 if (VAR_6->fs_info->last_trans_log_full_commit == VAR_5->transid) {
  VAR_10 = -VAR_0;
  FUNC_16(&VAR_6->log_mutex);
  goto out;
 }

 VAR_13 = VAR_6->log_transid;
 if (VAR_13 % 2 == 0)
  VAR_9 = VAR_2;
 else
  VAR_9 = VAR_3;




 VAR_10 = FUNC_14(VAR_11, &VAR_11->dirty_log_pages, VAR_9);
 if (VAR_10) {
  FUNC_4(VAR_5, VAR_6, VAR_10);
  FUNC_16(&VAR_6->log_mutex);
  goto out;
 }

 FUNC_8(&VAR_11->root_item, VAR_11->node);

 VAR_6->log_batch = 0;
 VAR_6->log_transid++;
 VAR_11->log_transid = VAR_6->log_transid;
 VAR_6->log_start_pid = 0;
 FUNC_18();





 FUNC_16(&VAR_6->log_mutex);

 FUNC_15(&VAR_12->log_mutex);
 VAR_12->log_batch++;
 FUNC_1(&VAR_12->log_writers);
 FUNC_16(&VAR_12->log_mutex);

 VAR_10 = FUNC_19(VAR_5, VAR_11);

 FUNC_15(&VAR_12->log_mutex);
 if (FUNC_0(&VAR_12->log_writers)) {
  FUNC_18();
  if (FUNC_22(&VAR_12->log_writer_wait))
   FUNC_23(&VAR_12->log_writer_wait);
 }

 if (VAR_10) {
  if (VAR_10 != -VAR_1) {
   FUNC_4(VAR_5, VAR_6, VAR_10);
   FUNC_16(&VAR_12->log_mutex);
   goto out;
  }
  VAR_6->fs_info->last_trans_log_full_commit = VAR_5->transid;
  FUNC_12(VAR_11, &VAR_11->dirty_log_pages, VAR_9);
  FUNC_16(&VAR_12->log_mutex);
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_8 = VAR_12->log_transid % 2;
 if (FUNC_2(&VAR_12->log_commit[VAR_8])) {
  FUNC_12(VAR_11, &VAR_11->dirty_log_pages, VAR_9);
  FUNC_21(VAR_5, VAR_12,
    VAR_12->log_transid);
  FUNC_16(&VAR_12->log_mutex);
  VAR_10 = 0;
  goto out;
 }
 FUNC_3(&VAR_12->log_commit[VAR_8], 1);

 if (FUNC_2(&VAR_12->log_commit[(VAR_8 + 1) % 2])) {
  FUNC_21(VAR_5, VAR_12,
    VAR_12->log_transid - 1);
 }

 FUNC_20(VAR_5, VAR_12);





 if (VAR_6->fs_info->last_trans_log_full_commit == VAR_5->transid) {
  FUNC_12(VAR_11, &VAR_11->dirty_log_pages, VAR_9);
  FUNC_16(&VAR_12->log_mutex);
  VAR_10 = -VAR_0;
  goto out_wake_log_root;
 }

 VAR_10 = FUNC_13(VAR_12,
    &VAR_12->dirty_log_pages,
    VAR_2 | VAR_3);
 if (VAR_10) {
  FUNC_4(VAR_5, VAR_6, VAR_10);
  FUNC_16(&VAR_12->log_mutex);
  goto out_wake_log_root;
 }
 FUNC_12(VAR_11, &VAR_11->dirty_log_pages, VAR_9);

 FUNC_9(VAR_6->fs_info->super_for_commit,
    VAR_12->node->start);
 FUNC_10(VAR_6->fs_info->super_for_commit,
    FUNC_5(VAR_12->node));

 VAR_12->log_batch = 0;
 VAR_12->log_transid++;
 FUNC_18();

 FUNC_16(&VAR_12->log_mutex);
 FUNC_7(VAR_6);
 FUNC_24(VAR_5, VAR_6->fs_info->tree_root, 1);
 FUNC_6(VAR_6);
 VAR_10 = 0;

 FUNC_15(&VAR_6->log_mutex);
 if (VAR_6->last_log_commit < VAR_13)
  VAR_6->last_log_commit = VAR_13;
 FUNC_16(&VAR_6->log_mutex);

out_wake_log_root:
 FUNC_3(&VAR_12->log_commit[VAR_8], 0);
 FUNC_18();
 if (FUNC_22(&VAR_12->log_commit_wait[VAR_8]))
  FUNC_23(&VAR_12->log_commit_wait[VAR_8]);
out:
 FUNC_3(&VAR_6->log_commit[VAR_7], 0);
 FUNC_18();
 if (FUNC_22(&VAR_6->log_commit_wait[VAR_7]))
  FUNC_23(&VAR_6->log_commit_wait[VAR_7]);
 return VAR_10;
}
