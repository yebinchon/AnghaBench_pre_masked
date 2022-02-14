
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r1conf {TYPE_1__* mirrors; } ;
struct r1bio {long sectors; size_t read_disk; int state; int remaining; scalar_t__ sector; struct mddev* mddev; } ;
struct mddev {int recovery; int bitmap; struct r1conf* private; } ;
struct bio {struct r1bio* bi_private; int bi_flags; } ;
typedef scalar_t__ sector_t ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {TYPE_2__* rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__*,int) ;
 int FUNC_2 (struct r1bio*,struct bio*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,scalar_t__,long,scalar_t__*,int*) ;
 int FUNC_4 (struct mddev*,int,int) ;
 int FUNC_5 (struct r1bio*) ;
 int FUNC_6 (struct r1bio*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct bio *VAR_6, int VAR_7)
{
 int VAR_8 = FUNC_9(VAR_0, &VAR_6->bi_flags);
 struct r1bio *VAR_9 = VAR_6->bi_private;
 struct mddev *VAR_10 = VAR_9->mddev;
 struct r1conf *VAR_11 = VAR_10->private;
 int VAR_12=0;
 sector_t VAR_13;
 int VAR_14;

 VAR_12 = FUNC_2(VAR_9, VAR_6);

 if (!VAR_8) {
  sector_t VAR_15 = 0;
  sector_t VAR_16 = VAR_9->sector;
  long VAR_17 = VAR_9->sectors;

  do {
   FUNC_1(VAR_10->bitmap, VAR_16,
     &VAR_15, 1);
   VAR_16 += VAR_15;
   VAR_17 -= VAR_15;
  } while (VAR_17 > 0);
  FUNC_7(VAR_5,
   &VAR_11->mirrors[VAR_12].rdev->flags);
  if (!FUNC_8(VAR_4,
          &VAR_11->mirrors[VAR_12].rdev->flags))
   FUNC_7(VAR_1, &
    VAR_10->recovery);
  FUNC_7(VAR_3, &VAR_9->state);
 } else if (FUNC_3(VAR_11->mirrors[VAR_12].rdev,
          VAR_9->sector,
          VAR_9->sectors,
          &VAR_13, &VAR_14) &&
     !FUNC_3(VAR_11->mirrors[VAR_9->read_disk].rdev,
    VAR_9->sector,
    VAR_9->sectors,
    &VAR_13, &VAR_14)
  )
  FUNC_7(VAR_2, &VAR_9->state);

 if (FUNC_0(&VAR_9->remaining)) {
  int VAR_18 = VAR_9->sectors;
  if (FUNC_9(VAR_2, &VAR_9->state) ||
      FUNC_9(VAR_3, &VAR_9->state))
   FUNC_6(VAR_9);
  else {
   FUNC_5(VAR_9);
   FUNC_4(VAR_10, VAR_18, VAR_8);
  }
 }
}
