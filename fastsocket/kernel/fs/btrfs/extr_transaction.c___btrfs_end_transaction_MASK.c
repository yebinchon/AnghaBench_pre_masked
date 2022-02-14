
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_heads_ready; } ;
struct btrfs_transaction {int blocked; int writer_wait; int num_writers; int in_commit; TYPE_1__ delayed_refs; } ;
struct btrfs_trans_handle {unsigned long delayed_ref_updates; scalar_t__ aborted; scalar_t__ use_count; struct btrfs_transaction* transaction; int * block_rsv; int * orig_rsv; } ;
struct btrfs_root {struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int fs_state; struct btrfs_transaction* running_transaction; int transaction_kthread; int open_ioctl_trans; int sb; } ;
struct TYPE_4__ {struct btrfs_trans_handle* journal_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 int FUNC_4 (struct btrfs_root*) ;
 int FUNC_5 (struct btrfs_trans_handle*,struct btrfs_root*,unsigned long) ;
 int VAR_2 ;
 int FUNC_6 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 TYPE_2__* VAR_3 ;
 int FUNC_7 (int ,struct btrfs_trans_handle*) ;
 int FUNC_8 (struct btrfs_trans_handle*,int ,int) ;
 int FUNC_9 (struct btrfs_transaction*) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(struct btrfs_trans_handle *VAR_4,
     struct btrfs_root *VAR_5, int VAR_6, int VAR_7)
{
 struct btrfs_transaction *VAR_8 = VAR_4->transaction;
 struct btrfs_fs_info *VAR_9 = VAR_5->fs_info;
 int VAR_10 = 0;
 int VAR_11 = 0;

 if (--VAR_4->use_count) {
  VAR_4->block_rsv = VAR_4->orig_rsv;
  return 0;
 }

 FUNC_6(VAR_4, VAR_5);
 VAR_4->block_rsv = ((void*)0);
 while (VAR_10 < 2) {
  unsigned long VAR_12 = VAR_4->delayed_ref_updates;
  VAR_4->delayed_ref_updates = 0;
  if (VAR_12 &&
      VAR_4->transaction->delayed_refs.num_heads_ready > 64) {
   VAR_4->delayed_ref_updates = 0;
   FUNC_5(VAR_4, VAR_5, VAR_12);
  } else {
   break;
  }
  VAR_10++;
 }

 FUNC_10(VAR_5->fs_info->sb);

 if (VAR_7 && !FUNC_2(&VAR_5->fs_info->open_ioctl_trans) &&
     FUNC_11(VAR_4, VAR_5)) {
  VAR_4->transaction->blocked = 1;
  FUNC_13();
 }

 if (VAR_7 && VAR_8->blocked && !VAR_8->in_commit) {
  if (VAR_6) {





   VAR_4->use_count++;
   return FUNC_3(VAR_4, VAR_5);
  } else {
   FUNC_16(VAR_9->transaction_kthread);
  }
 }

 FUNC_0(VAR_8 != VAR_9->running_transaction);
 FUNC_0(FUNC_2(&VAR_8->num_writers) < 1);
 FUNC_1(&VAR_8->num_writers);

 FUNC_12();
 if (FUNC_14(&VAR_8->writer_wait))
  FUNC_15(&VAR_8->writer_wait);
 FUNC_9(VAR_8);

 if (VAR_3->journal_info == VAR_4)
  VAR_3->journal_info = ((void*)0);

 if (VAR_6)
  FUNC_4(VAR_5);

 if (VAR_4->aborted ||
     VAR_5->fs_info->fs_state & VAR_0) {
  VAR_11 = -VAR_1;
 }

 FUNC_8(VAR_4, 0, sizeof(*VAR_4));
 FUNC_7(VAR_2, VAR_4);
 return VAR_11;
}
