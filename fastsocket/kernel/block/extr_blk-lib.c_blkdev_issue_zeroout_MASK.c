
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_device {int dummy; } ;
struct bio_batch {int flags; int done; int * wait; } ;
struct bio {struct bio_batch* bi_private; int bi_end_io; struct block_device* bi_bdev; scalar_t__ bi_sector; } ;
typedef scalar_t__ sector_t ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct bio*,int ,unsigned int,int ) ;
 struct bio* FUNC_6 (int ,unsigned int) ;
 int VAR_6 ;
 unsigned int FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (int ,struct bio*) ;
 int FUNC_9 (int,int*) ;
 int VAR_7 ;
 int FUNC_10 (int *) ;

int FUNC_11(struct block_device *VAR_8, sector_t VAR_9,
   sector_t VAR_10, gfp_t VAR_11)
{
 int VAR_12;
 struct bio *VAR_13;
 struct bio_batch VAR_14;
 unsigned int VAR_15;
 FUNC_0(VAR_7);

 FUNC_4(&VAR_14.done, 1);
 VAR_14.flags = 1 << VAR_1;
 VAR_14.wait = &VAR_7;

 VAR_12 = 0;
 while (VAR_10 != 0) {
  VAR_13 = FUNC_6(VAR_11,
    FUNC_7(VAR_10, (sector_t)VAR_0));
  if (!VAR_13) {
   VAR_12 = -VAR_3;
   break;
  }

  VAR_13->bi_sector = VAR_9;
  VAR_13->bi_bdev = VAR_8;
  VAR_13->bi_end_io = VAR_6;
  VAR_13->bi_private = &VAR_14;

  while (VAR_10 != 0) {
   VAR_15 = FUNC_7((sector_t) VAR_4 >> 9 , VAR_10);
   VAR_12 = FUNC_5(VAR_13, FUNC_1(0), VAR_15 << 9, 0);
   VAR_10 -= VAR_12 >> 9;
   VAR_9 += VAR_12 >> 9;
   if (VAR_12 < (VAR_15 << 9))
    break;
  }
  VAR_12 = 0;
  FUNC_3(&VAR_14.done);
  FUNC_8(VAR_5, VAR_13);
 }


 if (!FUNC_2(&VAR_14.done))
  FUNC_10(&VAR_7);

 if (!FUNC_9(VAR_1, &VAR_14.flags))

  VAR_12 = -VAR_2;

 return VAR_12;
}
