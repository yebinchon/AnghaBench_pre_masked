
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {struct faulty_conf* private; } ;
struct faulty_conf {TYPE_1__* rdev; int * counters; } ;
struct bio {int bi_size; int bi_bdev; int bi_end_io; struct bio* bi_private; scalar_t__ bi_sector; } ;
struct TYPE_2__ {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct faulty_conf*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 struct bio* FUNC_2 (struct bio*,int ,struct mddev*) ;
 scalar_t__ FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*,int ) ;
 scalar_t__ FUNC_5 (struct faulty_conf*,int ) ;
 scalar_t__ FUNC_6 (struct faulty_conf*,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_10 ;
 int FUNC_7 (struct bio*) ;

__attribute__((used)) static int FUNC_8(struct mddev *VAR_11, struct bio *VAR_12)
{
 struct faulty_conf *VAR_13 = VAR_11->private;
 int VAR_14 = 0;

 if (FUNC_3(VAR_12) == VAR_6) {

  if (FUNC_1(&VAR_13->counters[VAR_7])) {



   FUNC_4(VAR_12, -VAR_0);
   return 0;
  }

  if (FUNC_6(VAR_13, VAR_12->bi_sector, VAR_12->bi_sector+(VAR_12->bi_size>>9),
     VAR_6))
   VAR_14 = 1;
  if (FUNC_5(VAR_13, VAR_8)) {
   FUNC_0(VAR_13, VAR_12->bi_sector, VAR_8);
   VAR_14 = 1;
  }
  if (FUNC_5(VAR_13, VAR_9))
   VAR_14 = 1;
 } else {

  if (FUNC_6(VAR_13, VAR_12->bi_sector, VAR_12->bi_sector + (VAR_12->bi_size>>9),
     VAR_2))
   VAR_14 = 1;
  if (FUNC_5(VAR_13, VAR_5))
   VAR_14 = 1;
  if (FUNC_5(VAR_13, VAR_4)) {
   FUNC_0(VAR_13, VAR_12->bi_sector, VAR_4);
   VAR_14 = 1;
  }
  if (FUNC_5(VAR_13, VAR_3)) {
   FUNC_0(VAR_13, VAR_12->bi_sector, VAR_3);
   VAR_14 = 1;
  }
 }
 if (VAR_14) {
  struct bio *VAR_15 = FUNC_2(VAR_12, VAR_1, VAR_11);
  VAR_15->bi_bdev = VAR_13->rdev->bdev;
  VAR_15->bi_private = VAR_12;
  VAR_15->bi_end_io = VAR_10;
  FUNC_7(VAR_15);
  return 0;
 } else {
  VAR_12->bi_bdev = VAR_13->rdev->bdev;
  return 1;
 }
}
