
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scrub_page {int physical; TYPE_1__* dev; int * page; scalar_t__ io_error; } ;
struct scrub_block {scalar_t__ checksum_error; scalar_t__ header_error; struct scrub_page* pagev; } ;
struct bio {int bi_sector; int * bi_private; int bi_end_io; int bi_bdev; } ;
struct TYPE_2__ {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct bio*,int *,int,int ) ;
 struct bio* FUNC_3 (int ,int) ;
 int FUNC_4 (struct bio*,int ) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int,struct bio*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct scrub_block *VAR_9,
         struct scrub_block *VAR_10,
         int VAR_11, int VAR_12)
{
 struct scrub_page *VAR_13 = VAR_9->pagev + VAR_11;
 struct scrub_page *VAR_14 = VAR_10->pagev + VAR_11;

 FUNC_0(VAR_9->pagev[VAR_11].page == ((void*)0));
 FUNC_0(VAR_10->pagev[VAR_11].page == ((void*)0));
 if (VAR_12 || VAR_9->header_error ||
     VAR_9->checksum_error || VAR_13->io_error) {
  struct bio *VAR_15;
  int VAR_16;
  FUNC_1(VAR_7);

  VAR_15 = FUNC_3(VAR_3, 1);
  if (!VAR_15)
   return -VAR_2;
  VAR_15->bi_bdev = VAR_13->dev->bdev;
  VAR_15->bi_sector = VAR_13->physical >> 9;
  VAR_15->bi_end_io = VAR_8;
  VAR_15->bi_private = &VAR_7;

  VAR_16 = FUNC_2(VAR_15, VAR_14->page, VAR_4, 0);
  if (VAR_4 != VAR_16) {
   FUNC_5(VAR_15);
   return -VAR_2;
  }
  FUNC_7(VAR_6 | VAR_5, VAR_15);

  FUNC_8(&VAR_7);
  if (!FUNC_4(VAR_15, VAR_0)) {
   FUNC_6(VAR_13->dev,
    VAR_1);
   FUNC_5(VAR_15);
   return -VAR_2;
  }
  FUNC_5(VAR_15);
 }

 return 0;
}
