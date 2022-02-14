
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct btrfs_transaction {scalar_t__ blocked; int transid; } ;
struct btrfs_trans_handle {int use_count; scalar_t__ bytes_reserved; int * block_rsv; int transid; scalar_t__ aborted; int * orig_rsv; scalar_t__ delayed_ref_updates; scalar_t__ blocks_used; struct btrfs_transaction* transaction; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct TYPE_4__ {struct btrfs_trans_handle* journal_info; } ;
struct TYPE_3__ {int fs_state; int trans_block_rsv; struct btrfs_transaction* running_transaction; int sb; struct btrfs_root* chunk_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct btrfs_trans_handle* FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct btrfs_root*,int *,scalar_t__) ;
 scalar_t__ FUNC_3 (struct btrfs_root*,scalar_t__) ;
 int FUNC_4 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 int FUNC_5 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 int VAR_8 ;
 TYPE_2__* VAR_9 ;
 int FUNC_6 (struct btrfs_root*,int) ;
 struct btrfs_trans_handle* FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,struct btrfs_trans_handle*) ;
 scalar_t__ FUNC_9 (struct btrfs_root*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (TYPE_1__*,char*,int ,scalar_t__,int) ;
 int FUNC_14 (struct btrfs_root*) ;

__attribute__((used)) static struct btrfs_trans_handle *FUNC_15(struct btrfs_root *VAR_10,
          u64 VAR_11, int VAR_12)
{
 struct btrfs_trans_handle *VAR_13;
 struct btrfs_transaction *VAR_14;
 u64 VAR_15 = 0;
 int VAR_16;

 if (VAR_10->fs_info->fs_state & VAR_0)
  return FUNC_0(-VAR_3);

 if (VAR_9->journal_info) {
  FUNC_1(VAR_12 != VAR_5 && VAR_12 != VAR_6);
  VAR_13 = VAR_9->journal_info;
  VAR_13->use_count++;
  VAR_13->orig_rsv = VAR_13->block_rsv;
  VAR_13->block_rsv = ((void*)0);
  goto got_it;
 }





 if (VAR_11 > 0 && VAR_10 != VAR_10->fs_info->chunk_root) {
  VAR_15 = FUNC_3(VAR_10, VAR_11);
  VAR_16 = FUNC_2(VAR_10,
       &VAR_10->fs_info->trans_block_rsv,
       VAR_15);
  if (VAR_16)
   return FUNC_0(VAR_16);
 }
again:
 VAR_13 = FUNC_7(VAR_8, VAR_4);
 if (!VAR_13)
  return FUNC_0(-VAR_2);

 FUNC_11(VAR_10->fs_info->sb);

 if (FUNC_9(VAR_10, VAR_12))
  FUNC_14(VAR_10);

 do {
  VAR_16 = FUNC_6(VAR_10, VAR_12 == VAR_6);
  if (VAR_16 == -VAR_1)
   FUNC_14(VAR_10);
 } while (VAR_16 == -VAR_1);

 if (VAR_16 < 0) {
  FUNC_10(VAR_10->fs_info->sb);
  FUNC_8(VAR_8, VAR_13);
  return FUNC_0(VAR_16);
 }

 VAR_14 = VAR_10->fs_info->running_transaction;

 VAR_13->transid = VAR_14->transid;
 VAR_13->transaction = VAR_14;
 VAR_13->blocks_used = 0;
 VAR_13->bytes_reserved = 0;
 VAR_13->delayed_ref_updates = 0;
 VAR_13->use_count = 1;
 VAR_13->block_rsv = ((void*)0);
 VAR_13->orig_rsv = ((void*)0);
 VAR_13->aborted = 0;

 FUNC_12();
 if (VAR_14->blocked && FUNC_9(VAR_10, VAR_12)) {
  FUNC_4(VAR_13, VAR_10);
  goto again;
 }

 if (VAR_15) {
  FUNC_13(VAR_10->fs_info, "transaction",
           VAR_13->transid, VAR_15, 1);
  VAR_13->block_rsv = &VAR_10->fs_info->trans_block_rsv;
  VAR_13->bytes_reserved = VAR_15;
 }

got_it:
 FUNC_5(VAR_13, VAR_10);

 if (!VAR_9->journal_info && VAR_12 != VAR_7)
  VAR_9->journal_info = VAR_13;
 return VAR_13;
}
