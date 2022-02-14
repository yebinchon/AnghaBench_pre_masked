
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct extent_state {int dummy; } ;
struct extent_io_tree {int dummy; } ;
struct btrfs_trans_handle {int * block_rsv; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct btrfs_ordered_extent {int compress_type; scalar_t__ len; scalar_t__ file_offset; int flags; int list; int disk_len; int start; struct inode* inode; } ;
struct TYPE_4__ {int extent_tree; struct extent_io_tree io_tree; struct btrfs_root* root; } ;
struct TYPE_3__ {struct btrfs_root* tree_root; int delalloc_block_rsv; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct btrfs_trans_handle*) ;
 int FUNC_3 (struct btrfs_trans_handle*) ;
 int FUNC_4 (struct btrfs_trans_handle*,struct inode*,scalar_t__,int *) ;
 int FUNC_5 (struct btrfs_trans_handle*,struct btrfs_root*,int) ;
 int FUNC_6 (struct inode*,scalar_t__) ;
 int FUNC_7 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 int FUNC_8 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 int FUNC_9 (struct btrfs_root*,struct inode*) ;
 struct btrfs_trans_handle* FUNC_10 (struct btrfs_root*) ;
 struct btrfs_trans_handle* FUNC_11 (struct btrfs_root*) ;
 int FUNC_12 (struct btrfs_trans_handle*,struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_13 (struct inode*,int ,struct btrfs_ordered_extent*) ;
 int FUNC_14 (struct btrfs_ordered_extent*) ;
 int FUNC_15 (struct inode*,struct btrfs_ordered_extent*) ;
 int FUNC_16 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*) ;
 int FUNC_17 (struct extent_io_tree*,scalar_t__,scalar_t__,int *,int ) ;
 int FUNC_18 (struct btrfs_trans_handle*,struct inode*,scalar_t__,int ,int ,scalar_t__,scalar_t__,int,int ,int ,int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct extent_io_tree*,scalar_t__,scalar_t__,int ,struct extent_state**) ;
 scalar_t__ FUNC_21 (int ,int *) ;
 int FUNC_22 (struct extent_io_tree*,scalar_t__,scalar_t__,struct extent_state**,int ) ;
 int FUNC_23 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_24(struct btrfs_ordered_extent *VAR_7)
{
 struct inode *VAR_8 = VAR_7->inode;
 struct btrfs_root *VAR_9 = FUNC_0(VAR_8)->root;
 struct btrfs_trans_handle *VAR_10 = ((void*)0);
 struct extent_io_tree *VAR_11 = &FUNC_0(VAR_8)->io_tree;
 struct extent_state *VAR_12 = ((void*)0);
 int VAR_13 = 0;
 int VAR_14;
 bool VAR_15;

 VAR_15 = FUNC_9(VAR_9, VAR_8);

 if (FUNC_21(VAR_2, &VAR_7->flags)) {
  VAR_14 = -VAR_5;
  goto out;
 }

 if (FUNC_21(VAR_3, &VAR_7->flags)) {
  FUNC_1(!FUNC_19(&VAR_7->list));
  VAR_14 = FUNC_13(VAR_8, 0, VAR_7);
  if (!VAR_14) {
   if (VAR_15)
    VAR_10 = FUNC_11(VAR_9);
   else
    VAR_10 = FUNC_10(VAR_9);
   if (FUNC_2(VAR_10))
    return FUNC_3(VAR_10);
   VAR_10->block_rsv = &VAR_9->fs_info->delalloc_block_rsv;
   VAR_14 = FUNC_16(VAR_10, VAR_9, VAR_8);
   if (VAR_14)
    FUNC_5(VAR_10, VAR_9, VAR_14);
  }
  goto out;
 }

 FUNC_20(VAR_11, VAR_7->file_offset,
    VAR_7->file_offset + VAR_7->len - 1,
    0, &VAR_12);

 if (VAR_15)
  VAR_10 = FUNC_11(VAR_9);
 else
  VAR_10 = FUNC_10(VAR_9);
 if (FUNC_2(VAR_10)) {
  VAR_14 = FUNC_3(VAR_10);
  VAR_10 = ((void*)0);
  goto out_unlock;
 }
 VAR_10->block_rsv = &VAR_9->fs_info->delalloc_block_rsv;

 if (FUNC_21(VAR_1, &VAR_7->flags))
  VAR_13 = VAR_7->compress_type;
 if (FUNC_21(VAR_4, &VAR_7->flags)) {
  FUNC_1(VAR_13);
  VAR_14 = FUNC_12(VAR_10, VAR_8,
      VAR_7->file_offset,
      VAR_7->file_offset +
      VAR_7->len);
 } else {
  FUNC_1(VAR_9 == VAR_9->fs_info->tree_root);
  VAR_14 = FUNC_18(VAR_10, VAR_8,
      VAR_7->file_offset,
      VAR_7->start,
      VAR_7->disk_len,
      VAR_7->len,
      VAR_7->len,
      VAR_13, 0, 0,
      VAR_0);
  FUNC_23(&FUNC_0(VAR_8)->extent_tree,
       VAR_7->file_offset,
       VAR_7->len);
 }

 if (VAR_14 < 0) {
  FUNC_5(VAR_10, VAR_9, VAR_14);
  goto out_unlock;
 }

 FUNC_4(VAR_10, VAR_8, VAR_7->file_offset,
     &VAR_7->list);

 VAR_14 = FUNC_13(VAR_8, 0, VAR_7);
 if (!VAR_14 || !FUNC_21(VAR_4, &VAR_7->flags)) {
  VAR_14 = FUNC_16(VAR_10, VAR_9, VAR_8);
  if (VAR_14) {
   FUNC_5(VAR_10, VAR_9, VAR_14);
   goto out_unlock;
  }
 }
 VAR_14 = 0;
out_unlock:
 FUNC_22(VAR_11, VAR_7->file_offset,
        VAR_7->file_offset +
        VAR_7->len - 1, &VAR_12, VAR_6);
out:
 if (VAR_9 != VAR_9->fs_info->tree_root)
  FUNC_6(VAR_8, VAR_7->len);
 if (VAR_10) {
  if (VAR_15)
   FUNC_8(VAR_10, VAR_9);
  else
   FUNC_7(VAR_10, VAR_9);
 }

 if (VAR_14)
  FUNC_17(VAR_11, VAR_7->file_offset,
          VAR_7->file_offset +
          VAR_7->len - 1, ((void*)0), VAR_6);





 FUNC_15(VAR_8, VAR_7);


 FUNC_14(VAR_7);

 FUNC_14(VAR_7);

 return VAR_14;
}
