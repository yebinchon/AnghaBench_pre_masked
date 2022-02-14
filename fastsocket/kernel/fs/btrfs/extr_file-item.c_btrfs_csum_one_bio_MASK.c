
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct inode {int dummy; } ;
struct btrfs_sector_sum {int bytenr; int sum; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_ordered_sum {unsigned long len; int bytenr; struct btrfs_sector_sum* sums; int list; } ;
struct btrfs_ordered_extent {int file_offset; int len; int start; } ;
struct bio_vec {int bv_offset; int bv_len; int bv_page; } ;
struct bio {int bi_vcnt; unsigned long bi_size; scalar_t__ bi_sector; struct bio_vec* bi_io_vec; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct inode*,struct btrfs_ordered_extent*,struct btrfs_ordered_sum*) ;
 int FUNC_4 (struct btrfs_root*,char*,int ,int) ;
 int FUNC_5 (int ,char*) ;
 struct btrfs_ordered_extent* FUNC_6 (struct inode*,int) ;
 int FUNC_7 (struct btrfs_root*,unsigned long) ;
 int FUNC_8 (struct btrfs_ordered_extent*) ;
 char* FUNC_9 (int ,int ) ;
 int FUNC_10 (char*,int ) ;
 struct btrfs_ordered_sum* FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;

int FUNC_13(struct btrfs_root *VAR_3, struct inode *VAR_4,
         struct bio *VAR_5, u64 VAR_6, int VAR_7)
{
 struct btrfs_ordered_sum *VAR_8;
 struct btrfs_sector_sum *VAR_9;
 struct btrfs_ordered_extent *VAR_10;
 char *VAR_11;
 struct bio_vec *VAR_12 = VAR_5->bi_io_vec;
 int VAR_13 = 0;
 unsigned long VAR_14 = 0;
 unsigned long VAR_15 = 0;
 u64 VAR_16;
 u64 VAR_17;

 FUNC_2(VAR_5->bi_vcnt <= 0);
 VAR_8 = FUNC_11(FUNC_7(VAR_3, VAR_5->bi_size), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = VAR_8->sums;
 VAR_17 = (u64)VAR_5->bi_sector << 9;
 VAR_8->len = VAR_5->bi_size;
 FUNC_1(&VAR_8->list);

 if (VAR_7)
  VAR_16 = VAR_6;
 else
  VAR_16 = FUNC_12(VAR_12->bv_page) + VAR_12->bv_offset;

 VAR_10 = FUNC_6(VAR_4, VAR_16);
 FUNC_0(!VAR_10);
 VAR_8->bytenr = VAR_10->start;

 while (VAR_13 < VAR_5->bi_vcnt) {
  if (!VAR_7)
   VAR_16 = FUNC_12(VAR_12->bv_page) + VAR_12->bv_offset;

  if (!VAR_7 && (VAR_16 >= VAR_10->file_offset + VAR_10->len ||
      VAR_16 < VAR_10->file_offset)) {
   unsigned long VAR_18;
   VAR_8->len = VAR_15;
   VAR_15 = 0;
   FUNC_3(VAR_4, VAR_10, VAR_8);
   FUNC_8(VAR_10);

   VAR_18 = VAR_5->bi_size - VAR_14;

   VAR_8 = FUNC_11(FUNC_7(VAR_3, VAR_18),
           VAR_1);
   FUNC_0(!VAR_8);
   VAR_9 = VAR_8->sums;
   VAR_8->len = VAR_18;
   VAR_10 = FUNC_6(VAR_4, VAR_16);
   FUNC_0(!VAR_10);
   VAR_8->bytenr = VAR_10->start;
  }

  VAR_11 = FUNC_9(VAR_12->bv_page, VAR_2);
  VAR_9->sum = ~(u32)0;
  VAR_9->sum = FUNC_4(VAR_3,
        VAR_11 + VAR_12->bv_offset,
        VAR_9->sum,
        VAR_12->bv_len);
  FUNC_10(VAR_11, VAR_2);
  FUNC_5(VAR_9->sum,
     (char *)&VAR_9->sum);
  VAR_9->bytenr = VAR_17;

  VAR_9++;
  VAR_13++;
  VAR_14 += VAR_12->bv_len;
  VAR_15 += VAR_12->bv_len;
  VAR_17 += VAR_12->bv_len;
  VAR_16 += VAR_12->bv_len;
  VAR_12++;
 }
 VAR_15 = 0;
 FUNC_3(VAR_4, VAR_10, VAR_8);
 FUNC_8(VAR_10);
 return 0;
}
