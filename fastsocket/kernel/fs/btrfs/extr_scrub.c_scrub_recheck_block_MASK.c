
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct scrub_page {int io_error; int physical; int page; TYPE_1__* dev; } ;
struct scrub_block {int no_io_error_seen; int page_count; struct scrub_page* pagev; scalar_t__ checksum_error; scalar_t__ header_error; } ;
struct btrfs_fs_info {int dummy; } ;
struct bio {int bi_sector; int bi_flags; int * bi_private; int bi_end_io; int * bi_bdev; } ;
struct TYPE_2__ {int * bdev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct bio*,int ,int,int ) ;
 struct bio* FUNC_3 (int ,int) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (int,struct bio*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (struct btrfs_fs_info*,struct scrub_block*,int,int,int *,int ,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct btrfs_fs_info *VAR_8,
          struct scrub_block *VAR_9, int VAR_10,
          int VAR_11, u8 *VAR_12, u64 VAR_13,
          u16 VAR_14)
{
 int VAR_15;

 VAR_9->no_io_error_seen = 1;
 VAR_9->header_error = 0;
 VAR_9->checksum_error = 0;

 for (VAR_15 = 0; VAR_15 < VAR_9->page_count; VAR_15++) {
  struct bio *VAR_16;
  int VAR_17;
  struct scrub_page *VAR_18 = VAR_9->pagev + VAR_15;
  FUNC_1(VAR_6);

  if (VAR_18->dev->bdev == ((void*)0)) {
   VAR_18->io_error = 1;
   VAR_9->no_io_error_seen = 0;
   continue;
  }

  FUNC_0(!VAR_18->page);
  VAR_16 = FUNC_3(VAR_2, 1);
  if (!VAR_16)
   return -VAR_1;
  VAR_16->bi_bdev = VAR_18->dev->bdev;
  VAR_16->bi_sector = VAR_18->physical >> 9;
  VAR_16->bi_end_io = VAR_7;
  VAR_16->bi_private = &VAR_6;

  VAR_17 = FUNC_2(VAR_16, VAR_18->page, VAR_3, 0);
  if (VAR_3 != VAR_17) {
   FUNC_4(VAR_16);
   return -VAR_1;
  }
  FUNC_5(VAR_4 | VAR_5, VAR_16);

  FUNC_8(&VAR_6);

  VAR_18->io_error = !FUNC_7(VAR_0, &VAR_16->bi_flags);
  if (!FUNC_7(VAR_0, &VAR_16->bi_flags))
   VAR_9->no_io_error_seen = 0;
  FUNC_4(VAR_16);
 }

 if (VAR_9->no_io_error_seen)
  FUNC_6(VAR_8, VAR_9, VAR_10,
          VAR_11, VAR_12, VAR_13,
          VAR_14);

 return 0;
}
