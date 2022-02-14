
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct inode {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_ordered_extent {int disk_len; int start; int flags; } ;
struct btrfs_dio_private {int disk_bytenr; int pending_bios; struct bio* orig_bio; scalar_t__ errors; scalar_t__ bytes; int logical_offset; struct inode* inode; struct btrfs_dio_private* private; int * csums; } ;
struct bio_vec {scalar_t__ bv_len; } ;
struct bio {int bi_vcnt; int bi_end_io; struct btrfs_dio_private* bi_private; scalar_t__ bi_sector; struct bio_vec* bi_io_vec; } ;
typedef int loff_t ;
struct TYPE_2__ {int flags; struct btrfs_root* root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct bio*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct btrfs_root*,int ,int ) ;
 struct btrfs_ordered_extent* FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (struct btrfs_ordered_extent*) ;
 int FUNC_6 (int,struct btrfs_dio_private*,int) ;
 int FUNC_7 (struct btrfs_dio_private*) ;
 void* FUNC_8 (int,int ) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(int VAR_8, struct bio *VAR_9, struct inode *VAR_10,
    loff_t VAR_11)
{
 struct btrfs_root *VAR_12 = FUNC_0(VAR_10)->root;
 struct btrfs_dio_private *VAR_13;
 struct bio_vec *VAR_14 = VAR_9->bi_io_vec;
 int VAR_15;
 int VAR_16 = VAR_8 & VAR_5;
 int VAR_17 = 0;

 VAR_15 = FUNC_0(VAR_10)->flags & VAR_0;

 VAR_13 = FUNC_8(sizeof(*VAR_13), VAR_4);
 if (!VAR_13) {
  VAR_17 = -VAR_3;
  goto free_ordered;
 }
 VAR_13->csums = ((void*)0);


 if (!VAR_16 && !VAR_15) {
  VAR_13->csums = FUNC_8(sizeof(u32) * VAR_9->bi_vcnt, VAR_4);
  if (!VAR_13->csums) {
   FUNC_7(VAR_13);
   VAR_17 = -VAR_3;
   goto free_ordered;
  }
 }

 VAR_13->private = VAR_9->bi_private;
 VAR_13->inode = VAR_10;
 VAR_13->logical_offset = VAR_11;

 VAR_13->bytes = 0;
 do {
  VAR_13->bytes += VAR_14->bv_len;
  VAR_14++;
 } while (VAR_14 <= (VAR_9->bi_io_vec + VAR_9->bi_vcnt - 1));

 VAR_13->disk_bytenr = (u64)VAR_9->bi_sector << 9;
 VAR_9->bi_private = VAR_13;
 VAR_13->errors = 0;
 VAR_13->orig_bio = VAR_9;
 FUNC_1(&VAR_13->pending_bios, 0);

 if (VAR_16)
  VAR_9->bi_end_io = VAR_7;
 else
  VAR_9->bi_end_io = VAR_6;

 VAR_17 = FUNC_6(VAR_8, VAR_13, VAR_15);
 if (!VAR_17)
  return;
free_ordered:




 if (VAR_16) {
  struct btrfs_ordered_extent *VAR_18;
  VAR_18 = FUNC_4(VAR_10, VAR_11);
  if (!FUNC_9(VAR_2, &VAR_18->flags) &&
      !FUNC_9(VAR_1, &VAR_18->flags))
   FUNC_3(VAR_12, VAR_18->start,
         VAR_18->disk_len);
  FUNC_5(VAR_18);
  FUNC_5(VAR_18);
 }
 FUNC_2(VAR_9, VAR_17);
}
