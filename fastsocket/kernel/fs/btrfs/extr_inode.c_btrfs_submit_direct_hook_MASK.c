
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct inode {int dummy; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct btrfs_mapping_tree {int dummy; } ;
struct btrfs_dio_private {int logical_offset; int errors; struct bio* orig_bio; int pending_bios; int * csums; struct inode* inode; } ;
struct bio_vec {int bv_len; int bv_offset; int bv_page; } ;
struct bio {int bi_sector; int bi_size; int bi_vcnt; void* bi_end_io; struct btrfs_dio_private* bi_private; int bi_bdev; struct bio_vec* bi_io_vec; } ;
struct TYPE_4__ {struct btrfs_root* root; } ;
struct TYPE_3__ {struct btrfs_mapping_tree mapping_tree; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bio*,struct inode*,int,int,int,int *,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct bio*,int ,int,int ) ;
 int FUNC_6 (struct bio*) ;
 int FUNC_7 (struct bio*) ;
 struct bio* FUNC_8 (int ,int,int ) ;
 void* VAR_5 ;
 int FUNC_9 (struct btrfs_mapping_tree*,int ,int,int*,int *,int ) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(int VAR_6, struct btrfs_dio_private *VAR_7,
        int VAR_8)
{
 struct inode *VAR_9 = VAR_7->inode;
 struct btrfs_root *VAR_10 = FUNC_0(VAR_9)->root;
 struct btrfs_mapping_tree *VAR_11 = &VAR_10->fs_info->mapping_tree;
 struct bio *VAR_12;
 struct bio *VAR_13 = VAR_7->orig_bio;
 struct bio_vec *VAR_14 = VAR_13->bi_io_vec;
 u64 VAR_15 = VAR_13->bi_sector;
 u64 VAR_16 = VAR_7->logical_offset;
 u64 VAR_17 = 0;
 u64 VAR_18;
 int VAR_19 = 0;
 u32 *VAR_20 = VAR_7->csums;
 int VAR_21 = 0;
 int VAR_22 = 0;
 int VAR_23 = VAR_6 & VAR_4;

 VAR_18 = VAR_13->bi_size;
 VAR_21 = FUNC_9(VAR_11, VAR_3, VAR_15 << 9,
         &VAR_18, ((void*)0), 0);
 if (VAR_21) {
  FUNC_7(VAR_13);
  return -VAR_0;
 }

 if (VAR_18 >= VAR_13->bi_size) {
  VAR_12 = VAR_13;
  goto submit;
 }

 VAR_22 = 1;
 VAR_12 = FUNC_8(VAR_13->bi_bdev, VAR_15, VAR_2);
 if (!VAR_12)
  return -VAR_1;
 VAR_12->bi_private = VAR_7;
 VAR_12->bi_end_io = VAR_5;
 FUNC_4(&VAR_7->pending_bios);

 while (VAR_14 <= (VAR_13->bi_io_vec + VAR_13->bi_vcnt - 1)) {
  if (FUNC_11(VAR_18 < VAR_17 + VAR_14->bv_len ||
      FUNC_5(VAR_12, VAR_14->bv_page, VAR_14->bv_len,
     VAR_14->bv_offset) < VAR_14->bv_len)) {






   FUNC_4(&VAR_7->pending_bios);
   VAR_21 = FUNC_1(VAR_12, VAR_9, VAR_6,
           VAR_16, VAR_8,
           VAR_20, VAR_22);
   if (VAR_21) {
    FUNC_7(VAR_12);
    FUNC_2(&VAR_7->pending_bios);
    goto out_err;
   }


   if (!VAR_23 && !VAR_8)
    VAR_20 = VAR_20 + VAR_19;
   VAR_15 += VAR_17 >> 9;
   VAR_16 += VAR_17;

   VAR_17 = 0;
   VAR_19 = 0;

   VAR_12 = FUNC_8(VAR_13->bi_bdev,
        VAR_15, VAR_2);
   if (!VAR_12)
    goto out_err;
   VAR_12->bi_private = VAR_7;
   VAR_12->bi_end_io = VAR_5;

   VAR_18 = VAR_13->bi_size;
   VAR_21 = FUNC_9(VAR_11, VAR_3, VAR_15 << 9,
           &VAR_18, ((void*)0), 0);
   if (VAR_21) {
    FUNC_7(VAR_12);
    goto out_err;
   }
  } else {
   VAR_17 += VAR_14->bv_len;
   VAR_19 ++;
   VAR_14++;
  }
 }

submit:
 VAR_21 = FUNC_1(VAR_12, VAR_9, VAR_6, VAR_16, VAR_8,
         VAR_20, VAR_22);
 if (!VAR_21)
  return 0;

 FUNC_7(VAR_12);
out_err:
 VAR_7->errors = 1;




 FUNC_10();
 if (FUNC_3(&VAR_7->pending_bios))
  FUNC_6(VAR_7->orig_bio);


 return 0;
}
