
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct extent_map_tree {int lock; } ;
struct extent_map {scalar_t__ start; scalar_t__ len; scalar_t__ orig_start; scalar_t__ block_len; scalar_t__ flags; int bdev; int block_start; } ;
struct btrfs_trans_handle {int * block_rsv; } ;
struct btrfs_root {TYPE_2__* fs_info; int sectorsize; } ;
struct btrfs_key {scalar_t__ offset; int objectid; } ;
struct TYPE_6__ {scalar_t__ disk_i_size; struct extent_map_tree extent_tree; struct btrfs_root* root; } ;
struct TYPE_5__ {TYPE_1__* fs_devices; int delalloc_block_rsv; } ;
struct TYPE_4__ {int latest_bdev; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct extent_map* FUNC_1 (struct btrfs_trans_handle*) ;
 struct extent_map* FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct btrfs_trans_handle*) ;
 int FUNC_4 (struct extent_map_tree*,struct extent_map*) ;
 struct extent_map* FUNC_5 () ;
 int FUNC_6 (struct btrfs_trans_handle*,struct inode*) ;
 int FUNC_7 (struct inode*,scalar_t__,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_8 (struct inode*,scalar_t__,scalar_t__,int ) ;
 int FUNC_9 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 int FUNC_10 (struct btrfs_root*,int ,scalar_t__) ;
 struct btrfs_trans_handle* FUNC_11 (struct btrfs_root*) ;
 int FUNC_12 (struct btrfs_trans_handle*,struct btrfs_root*,scalar_t__,int ,int ,scalar_t__,struct btrfs_key*,int) ;
 int FUNC_13 (struct extent_map*) ;
 scalar_t__ FUNC_14 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_15 (int ,scalar_t__*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static struct extent_map *FUNC_18(struct inode *VAR_4,
        struct extent_map *VAR_5,
        u64 VAR_6, u64 VAR_7)
{
 struct btrfs_root *VAR_8 = FUNC_0(VAR_4)->root;
 struct btrfs_trans_handle *VAR_9;
 struct extent_map_tree *VAR_10 = &FUNC_0(VAR_4)->extent_tree;
 struct btrfs_key VAR_11;
 u64 VAR_12;
 int VAR_13;
 bool VAR_14 = 0;







 if (VAR_5->block_start != VAR_3 || VAR_5->start != VAR_6 ||
     VAR_5->len != VAR_7) {
  FUNC_13(VAR_5);
  VAR_5 = ((void*)0);
  VAR_14 = 1;
  FUNC_8(VAR_4, VAR_6, VAR_6 + VAR_7 - 1, 0);
 }

 VAR_9 = FUNC_11(VAR_8);
 if (FUNC_3(VAR_9))
  return FUNC_1(VAR_9);

 if (VAR_6 <= FUNC_0(VAR_4)->disk_i_size && VAR_7 < 64 * 1024)
  FUNC_6(VAR_9, VAR_4);

 VAR_9->block_rsv = &VAR_8->fs_info->delalloc_block_rsv;

 VAR_12 = FUNC_14(VAR_4, VAR_6, VAR_7);
 VAR_13 = FUNC_12(VAR_9, VAR_8, VAR_7, VAR_8->sectorsize, 0,
       VAR_12, &VAR_11, 1);
 if (VAR_13) {
  VAR_5 = FUNC_2(VAR_13);
  goto out;
 }

 if (!VAR_5) {
  VAR_5 = FUNC_5();
  if (!VAR_5) {
   VAR_5 = FUNC_2(-VAR_1);
   goto out;
  }
 }

 VAR_5->start = VAR_6;
 VAR_5->orig_start = VAR_5->start;
 VAR_5->len = VAR_11.offset;

 VAR_5->block_start = VAR_11.objectid;
 VAR_5->block_len = VAR_11.offset;
 VAR_5->bdev = VAR_8->fs_info->fs_devices->latest_bdev;





 VAR_5->flags = 0;
 FUNC_15(VAR_2, &VAR_5->flags);

 while (VAR_14) {
  FUNC_16(&VAR_10->lock);
  VAR_13 = FUNC_4(VAR_10, VAR_5);
  FUNC_17(&VAR_10->lock);
  if (VAR_13 != -VAR_0)
   break;
  FUNC_8(VAR_4, VAR_6, VAR_6 + VAR_5->len - 1, 0);
 }

 VAR_13 = FUNC_7(VAR_4, VAR_6, VAR_11.objectid,
        VAR_11.offset, VAR_11.offset, 0);
 if (VAR_13) {
  FUNC_10(VAR_8, VAR_11.objectid, VAR_11.offset);
  VAR_5 = FUNC_2(VAR_13);
 }
out:
 FUNC_9(VAR_9, VAR_8);
 return VAR_5;
}
