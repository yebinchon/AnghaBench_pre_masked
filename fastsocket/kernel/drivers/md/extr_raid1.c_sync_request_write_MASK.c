
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r1conf {int raid_disks; TYPE_2__* mirrors; } ;
struct r1bio {size_t read_disk; int sectors; int state; int remaining; struct bio** bios; } ;
struct mddev {int recovery; struct r1conf* private; } ;
struct bio {int * bi_end_io; int bi_rw; } ;
struct TYPE_4__ {TYPE_1__* rdev; } ;
struct TYPE_3__ {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct bio*) ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_4 (struct r1bio*) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (struct mddev*,int,int) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (struct r1bio*) ;
 int FUNC_9 (struct r1bio*) ;
 int FUNC_10 (struct r1bio*) ;
 scalar_t__ FUNC_11 (int ,int *) ;

__attribute__((used)) static void FUNC_12(struct mddev *VAR_8, struct r1bio *VAR_9)
{
 struct r1conf *VAR_10 = VAR_8->private;
 int VAR_11;
 int VAR_12 = VAR_10->raid_disks * 2;
 struct bio *VAR_13, *VAR_14;

 VAR_13 = VAR_9->bios[VAR_9->read_disk];

 if (!FUNC_11(VAR_3, &VAR_9->state))

  if (!FUNC_4(VAR_9))
   return;

 if (FUNC_11(VAR_0, &VAR_8->recovery))
  if (FUNC_8(VAR_9) < 0)
   return;



 FUNC_2(&VAR_9->remaining, 1);
 for (VAR_11 = 0; VAR_11 < VAR_12 ; VAR_11++) {
  VAR_14 = VAR_9->bios[VAR_11];
  if (VAR_14->bi_end_io == ((void*)0) ||
      (VAR_14->bi_end_io == VAR_6 &&
       (VAR_11 == VAR_9->read_disk ||
        !FUNC_11(VAR_1, &VAR_8->recovery))))
   continue;

  VAR_14->bi_rw = VAR_5;
  VAR_14->bi_end_io = VAR_7;
  FUNC_1(&VAR_9->remaining);
  FUNC_7(VAR_10->mirrors[VAR_11].rdev->bdev, FUNC_3(VAR_14));

  FUNC_5(VAR_14);
 }

 if (FUNC_0(&VAR_9->remaining)) {

  int VAR_15 = VAR_9->sectors;
  if (FUNC_11(VAR_2, &VAR_9->state) ||
      FUNC_11(VAR_4, &VAR_9->state))
   FUNC_10(VAR_9);
  else {
   FUNC_9(VAR_9);
   FUNC_6(VAR_8, VAR_15, 1);
  }
 }
}
