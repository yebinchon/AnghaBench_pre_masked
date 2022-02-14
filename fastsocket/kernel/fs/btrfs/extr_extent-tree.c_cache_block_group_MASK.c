
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_fs_info {int mount_opt; int caching_workers; int extent_commit_sem; int caching_block_groups; int extent_root; } ;
struct TYPE_4__ {int func; } ;
struct btrfs_caching_control {TYPE_2__ work; int list; int count; int wait; int progress; struct btrfs_block_group_cache* block_group; int mutex; } ;
struct TYPE_3__ {int objectid; } ;
struct btrfs_block_group_cache {scalar_t__ cached; int lock; struct btrfs_caching_control* caching_ctl; scalar_t__ last_byte_to_unpin; TYPE_1__ key; struct btrfs_fs_info* fs_info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int VAR_7 ;
 int FUNC_2 (struct btrfs_caching_control*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct btrfs_block_group_cache*) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int ,struct btrfs_block_group_cache*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct btrfs_caching_control*) ;
 struct btrfs_caching_control* FUNC_12 (int,int ) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (struct btrfs_fs_info*,struct btrfs_block_group_cache*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int *,int ) ;
 int FUNC_17 (struct btrfs_caching_control*) ;
 int FUNC_18 () ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int VAR_9 ;
 int FUNC_22 (int *) ;

__attribute__((used)) static int FUNC_23(struct btrfs_block_group_cache *VAR_10,
        struct btrfs_trans_handle *VAR_11,
        struct btrfs_root *VAR_12,
        int VAR_13)
{
 FUNC_0(VAR_9);
 struct btrfs_fs_info *VAR_14 = VAR_10->fs_info;
 struct btrfs_caching_control *VAR_15;
 int VAR_16 = 0;

 VAR_15 = FUNC_12(sizeof(*VAR_15), VAR_6);
 if (!VAR_15)
  return -VAR_5;

 FUNC_1(&VAR_15->list);
 FUNC_15(&VAR_15->mutex);
 FUNC_10(&VAR_15->wait);
 VAR_15->block_group = VAR_10;
 VAR_15->progress = VAR_10->key.objectid;
 FUNC_4(&VAR_15->count, 1);
 VAR_15->work.func = VAR_8;

 FUNC_19(&VAR_10->lock);
 while (VAR_10->cached == VAR_0) {
  struct btrfs_caching_control *VAR_17;

  VAR_17 = VAR_10->caching_ctl;
  FUNC_3(&VAR_17->count);
  FUNC_16(&VAR_17->wait, &VAR_9, VAR_7);
  FUNC_20(&VAR_10->lock);

  FUNC_18();

  FUNC_8(&VAR_17->wait, &VAR_9);
  FUNC_17(VAR_17);
  FUNC_19(&VAR_10->lock);
 }

 if (VAR_10->cached != VAR_2) {
  FUNC_20(&VAR_10->lock);
  FUNC_11(VAR_15);
  return 0;
 }
 FUNC_2(VAR_10->caching_ctl);
 VAR_10->caching_ctl = VAR_15;
 VAR_10->cached = VAR_0;
 FUNC_20(&VAR_10->lock);







 if (VAR_14->mount_opt & VAR_4) {
  VAR_16 = FUNC_14(VAR_14, VAR_10);

  FUNC_19(&VAR_10->lock);
  if (VAR_16 == 1) {
   VAR_10->caching_ctl = ((void*)0);
   VAR_10->cached = VAR_1;
   VAR_10->last_byte_to_unpin = (u64)-1;
  } else {
   if (VAR_13) {
    VAR_10->caching_ctl = ((void*)0);
    VAR_10->cached = VAR_2;
   } else {
    VAR_10->cached = VAR_3;
   }
  }
  FUNC_20(&VAR_10->lock);
  FUNC_22(&VAR_15->wait);
  if (VAR_16 == 1) {
   FUNC_17(VAR_15);
   FUNC_9(VAR_14->extent_root, VAR_10);
   return 0;
  }
 } else {




  FUNC_19(&VAR_10->lock);
  if (VAR_13) {
   VAR_10->caching_ctl = ((void*)0);
   VAR_10->cached = VAR_2;
  } else {
   VAR_10->cached = VAR_3;
  }
  FUNC_20(&VAR_10->lock);
  FUNC_22(&VAR_15->wait);
 }

 if (VAR_13) {
  FUNC_17(VAR_15);
  return 0;
 }

 FUNC_7(&VAR_14->extent_commit_sem);
 FUNC_3(&VAR_15->count);
 FUNC_13(&VAR_15->list, &VAR_14->caching_block_groups);
 FUNC_21(&VAR_14->extent_commit_sem);

 FUNC_5(VAR_10);

 FUNC_6(&VAR_14->caching_workers, &VAR_15->work);

 return VAR_16;
}
