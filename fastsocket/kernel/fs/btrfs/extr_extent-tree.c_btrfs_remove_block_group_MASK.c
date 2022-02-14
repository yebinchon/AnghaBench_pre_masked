
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct inode {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {TYPE_3__* fs_info; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_key {scalar_t__ type; int offset; int objectid; } ;
struct btrfs_free_cluster {int refill_lock; } ;
struct TYPE_7__ {int offset; int objectid; } ;
struct btrfs_block_group_cache {int flags; scalar_t__ cached; TYPE_2__ key; TYPE_1__* space_info; int list; int cache_node; int lock; int * inode; scalar_t__ iref; int ro; } ;
typedef int key ;
struct TYPE_8__ {int block_group_cache_lock; int block_group_cache_tree; struct btrfs_free_cluster meta_alloc_cluster; struct btrfs_free_cluster data_alloc_cluster; struct btrfs_root* extent_root; struct btrfs_root* tree_root; } ;
struct TYPE_6__ {int total_bytes; int bytes_readonly; int disk_total; int lock; int groups_sem; int * block_groups; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 struct btrfs_path* FUNC_3 () ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_6 (struct btrfs_path*) ;
 struct btrfs_block_group_cache* FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (struct btrfs_trans_handle*,struct inode*) ;
 int FUNC_9 (struct btrfs_block_group_cache*) ;
 int FUNC_10 (struct btrfs_path*) ;
 int FUNC_11 (struct btrfs_block_group_cache*) ;
 int FUNC_12 (struct btrfs_block_group_cache*,struct btrfs_free_cluster*) ;
 int FUNC_13 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int,int) ;
 int FUNC_14 (TYPE_3__*,int) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct btrfs_root*,struct btrfs_block_group_cache*) ;
 int FUNC_18 (struct btrfs_block_group_cache*) ;
 int FUNC_19 (struct inode*) ;
 int FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (int *) ;
 struct inode* FUNC_22 (struct btrfs_root*,struct btrfs_block_group_cache*,struct btrfs_path*) ;
 int FUNC_23 (struct btrfs_key*,TYPE_2__*,int) ;
 int FUNC_24 (int *,int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (struct btrfs_block_group_cache*) ;

int FUNC_29(struct btrfs_trans_handle *VAR_7,
        struct btrfs_root *VAR_8, u64 VAR_9)
{
 struct btrfs_path *VAR_10;
 struct btrfs_block_group_cache *VAR_11;
 struct btrfs_free_cluster *VAR_12;
 struct btrfs_root *VAR_13 = VAR_8->fs_info->tree_root;
 struct btrfs_key VAR_14;
 struct inode *VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_8 = VAR_8->fs_info->extent_root;

 VAR_11 = FUNC_7(VAR_8->fs_info, VAR_9);
 FUNC_0(!VAR_11);
 FUNC_0(!VAR_11->ro);





 FUNC_17(VAR_8, VAR_11);

 FUNC_23(&VAR_14, &VAR_11->key, sizeof(VAR_14));
 VAR_17 = FUNC_18(VAR_11);
 if (VAR_11->flags & (VAR_0 |
      VAR_1 |
      VAR_2))
  VAR_18 = 2;
 else
  VAR_18 = 1;


 VAR_12 = &VAR_8->fs_info->data_alloc_cluster;
 FUNC_25(&VAR_12->refill_lock);
 FUNC_12(VAR_11, VAR_12);
 FUNC_26(&VAR_12->refill_lock);





 VAR_12 = &VAR_8->fs_info->meta_alloc_cluster;
 FUNC_25(&VAR_12->refill_lock);
 FUNC_12(VAR_11, VAR_12);
 FUNC_26(&VAR_12->refill_lock);

 VAR_10 = FUNC_3();
 if (!VAR_10) {
  VAR_16 = -VAR_6;
  goto out;
 }

 VAR_15 = FUNC_22(VAR_13, VAR_11, VAR_10);
 if (!FUNC_1(VAR_15)) {
  VAR_16 = FUNC_8(VAR_7, VAR_15);
  if (VAR_16) {
   FUNC_2(VAR_15);
   goto out;
  }
  FUNC_15(VAR_15);

  FUNC_25(&VAR_11->lock);
  if (VAR_11->iref) {
   VAR_11->iref = 0;
   VAR_11->inode = ((void*)0);
   FUNC_26(&VAR_11->lock);
   FUNC_19(VAR_15);
  } else {
   FUNC_26(&VAR_11->lock);
  }

  FUNC_2(VAR_15);
 }

 VAR_14.objectid = VAR_4;
 VAR_14.offset = VAR_11->key.objectid;
 VAR_14.type = 0;

 VAR_16 = FUNC_13(VAR_7, VAR_13, &VAR_14, VAR_10, -1, 1);
 if (VAR_16 < 0)
  goto out;
 if (VAR_16 > 0)
  FUNC_10(VAR_10);
 if (VAR_16 == 0) {
  VAR_16 = FUNC_5(VAR_7, VAR_13, VAR_10);
  if (VAR_16)
   goto out;
  FUNC_10(VAR_10);
 }

 FUNC_25(&VAR_8->fs_info->block_group_cache_lock);
 FUNC_24(&VAR_11->cache_node,
   &VAR_8->fs_info->block_group_cache_tree);
 FUNC_26(&VAR_8->fs_info->block_group_cache_lock);

 FUNC_16(&VAR_11->space_info->groups_sem);




 FUNC_20(&VAR_11->list);
 if (FUNC_21(&VAR_11->space_info->block_groups[VAR_17]))
  FUNC_14(VAR_8->fs_info, VAR_11->flags);
 FUNC_27(&VAR_11->space_info->groups_sem);

 if (VAR_11->cached == VAR_3)
  FUNC_28(VAR_11);

 FUNC_11(VAR_11);

 FUNC_25(&VAR_11->space_info->lock);
 VAR_11->space_info->total_bytes -= VAR_11->key.offset;
 VAR_11->space_info->bytes_readonly -= VAR_11->key.offset;
 VAR_11->space_info->disk_total -= VAR_11->key.offset * VAR_18;
 FUNC_26(&VAR_11->space_info->lock);

 FUNC_23(&VAR_14, &VAR_11->key, sizeof(VAR_14));

 FUNC_4(VAR_8->fs_info);

 FUNC_9(VAR_11);
 FUNC_9(VAR_11);

 VAR_16 = FUNC_13(VAR_7, VAR_8, &VAR_14, VAR_10, -1, 1);
 if (VAR_16 > 0)
  VAR_16 = -VAR_5;
 if (VAR_16 < 0)
  goto out;

 VAR_16 = FUNC_5(VAR_7, VAR_8, VAR_10);
out:
 FUNC_6(VAR_10);
 return VAR_16;
}
