
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct inode {int dummy; } ;
struct btrfs_trans_handle {int bytes_reserved; struct btrfs_block_rsv* block_rsv; int transid; } ;
struct TYPE_4__ {scalar_t__ objectid; } ;
struct btrfs_root {scalar_t__ cached; TYPE_2__* fs_info; int cache_lock; int root_item; TYPE_1__ root_key; struct btrfs_free_space_ctl* free_ino_ctl; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_free_space_ctl {int free_extents; int total_bitmaps; int tree_lock; } ;
struct btrfs_free_space {int dummy; } ;
struct btrfs_block_rsv {int dummy; } ;
struct TYPE_6__ {scalar_t__ generation; } ;
struct TYPE_5__ {struct btrfs_block_rsv trans_block_rsv; struct btrfs_root* tree_root; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int VAR_7 ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct btrfs_trans_handle*,struct btrfs_root*,int) ;
 struct btrfs_path* FUNC_6 () ;
 int FUNC_7 (struct btrfs_root*,struct btrfs_block_rsv*,int ) ;
 int FUNC_8 (struct btrfs_root*,struct btrfs_block_rsv*,int ) ;
 int FUNC_9 (struct btrfs_root*,int) ;
 int FUNC_10 (struct inode*,int) ;
 int FUNC_11 (struct inode*,int) ;
 int FUNC_12 (struct btrfs_path*) ;
 int FUNC_13 (struct inode*,int) ;
 int FUNC_14 (struct inode*,struct btrfs_trans_handle*,int ,int ,int,int,int,int *) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (struct btrfs_root*,int ) ;
 int FUNC_17 (struct btrfs_root*,struct btrfs_trans_handle*,struct btrfs_path*,struct inode*) ;
 int FUNC_18 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*) ;
 int FUNC_19 (struct btrfs_root*,struct btrfs_trans_handle*,struct btrfs_path*) ;
 int FUNC_20 (struct btrfs_root*,struct btrfs_trans_handle*,struct btrfs_path*) ;
 scalar_t__ FUNC_21 (struct inode*) ;
 int FUNC_22 (struct inode*) ;
 struct inode* FUNC_23 (struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (TYPE_2__*,char*,int ,int ,int) ;

int FUNC_27(struct btrfs_root *VAR_8,
    struct btrfs_trans_handle *VAR_9)
{
 struct btrfs_free_space_ctl *VAR_10 = VAR_8->free_ino_ctl;
 struct btrfs_path *VAR_11;
 struct inode *VAR_12;
 struct btrfs_block_rsv *VAR_13;
 u64 VAR_14;
 u64 VAR_15 = 0;
 int VAR_16;
 int VAR_17;
 bool VAR_18 = 0;


 if (VAR_8->root_key.objectid != VAR_2 &&
     (VAR_8->root_key.objectid < VAR_1 ||
      VAR_8->root_key.objectid > VAR_3))
  return 0;


 if (FUNC_15(&VAR_8->root_item) == 0 &&
     VAR_8 != VAR_8->fs_info->tree_root)
  return 0;

 if (!FUNC_16(VAR_8, VAR_6))
  return 0;

 VAR_11 = FUNC_6();
 if (!VAR_11)
  return -VAR_5;

 VAR_13 = VAR_9->block_rsv;
 VAR_9->block_rsv = &VAR_8->fs_info->trans_block_rsv;

 VAR_14 = VAR_9->bytes_reserved;






 VAR_9->bytes_reserved = FUNC_9(VAR_8, 8);
 VAR_16 = FUNC_7(VAR_8, VAR_9->block_rsv,
       VAR_9->bytes_reserved);
 if (VAR_16)
  goto out;
 FUNC_26(VAR_8->fs_info, "ino_cache",
          VAR_9->transid, VAR_9->bytes_reserved, 1);
again:
 VAR_12 = FUNC_23(VAR_8, VAR_11);
 if (FUNC_3(VAR_12) && (FUNC_4(VAR_12) != -VAR_4 || VAR_18)) {
  VAR_16 = FUNC_4(VAR_12);
  goto out_release;
 }

 if (FUNC_3(VAR_12)) {
  FUNC_2(VAR_18);
  VAR_18 = 1;

  VAR_16 = FUNC_20(VAR_8, VAR_9, VAR_11);
  if (VAR_16)
   goto out_release;
  goto again;
 }

 FUNC_1(VAR_12)->generation = 0;
 VAR_16 = FUNC_18(VAR_9, VAR_8, VAR_12);
 if (VAR_16) {
  FUNC_5(VAR_9, VAR_8, VAR_16);
  goto out_put;
 }

 if (FUNC_21(VAR_12) > 0) {
  VAR_16 = FUNC_17(VAR_8, VAR_9, VAR_11, VAR_12);
  if (VAR_16) {
   FUNC_5(VAR_9, VAR_8, VAR_16);
   goto out_put;
  }
 }

 FUNC_24(&VAR_8->cache_lock);
 if (VAR_8->cached != VAR_0) {
  VAR_16 = -1;
  FUNC_25(&VAR_8->cache_lock);
  goto out_put;
 }
 FUNC_25(&VAR_8->cache_lock);

 FUNC_24(&VAR_10->tree_lock);
 VAR_17 = sizeof(struct btrfs_free_space) * VAR_10->free_extents;
 VAR_17 = FUNC_0(VAR_17, VAR_7);
 VAR_17 += VAR_10->total_bitmaps * VAR_7;
 FUNC_25(&VAR_10->tree_lock);


 VAR_17 += 8 * VAR_7;

 VAR_16 = FUNC_11(VAR_12, VAR_17);
 if (VAR_16)
  goto out_put;

 VAR_16 = FUNC_14(VAR_12, VAR_9, 0, 0, VAR_17,
           VAR_17, VAR_17, &VAR_15);
 if (VAR_16) {
  FUNC_10(VAR_12, VAR_17);
  goto out_put;
 }
 FUNC_13(VAR_12, VAR_17);

 VAR_16 = FUNC_19(VAR_8, VAR_9, VAR_11);
out_put:
 FUNC_22(VAR_12);
out_release:
 FUNC_26(VAR_8->fs_info, "ino_cache",
          VAR_9->transid, VAR_9->bytes_reserved, 0);
 FUNC_8(VAR_8, VAR_9->block_rsv, VAR_9->bytes_reserved);
out:
 VAR_9->block_rsv = VAR_13;
 VAR_9->bytes_reserved = VAR_14;

 FUNC_12(VAR_11);
 return VAR_16;
}
