
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct r1conf {TYPE_4__* mddev; TYPE_2__* mirrors; } ;
struct r1bio {int ** bios; struct bio* master_bio; int state; int remaining; int behind_remaining; int sectors; int sector; TYPE_1__* mddev; } ;
struct bio {scalar_t__ bi_sector; struct r1bio* bi_private; int bi_flags; } ;
typedef int sector_t ;
struct TYPE_9__ {int recovery; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_7__ {TYPE_3__* rdev; } ;
struct TYPE_6__ {struct r1conf* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bio*) ;
 scalar_t__ FUNC_3 (struct bio*) ;
 int FUNC_4 (struct r1bio*) ;
 int FUNC_5 (struct r1bio*,struct bio*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int ,int ,int *,int*) ;
 int FUNC_7 (char*,unsigned long long,scalar_t__) ;
 int FUNC_8 (struct r1bio*) ;
 int FUNC_9 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static void FUNC_13(struct bio *VAR_13, int VAR_14)
{
 int VAR_15 = FUNC_12(VAR_0, &VAR_13->bi_flags);
 struct r1bio *VAR_16 = VAR_13->bi_private;
 int VAR_17, VAR_18 = FUNC_12(VAR_5, &VAR_16->state);
 struct r1conf *VAR_19 = VAR_16->mddev->private;
 struct bio *VAR_20 = ((void*)0);

 VAR_17 = FUNC_5(VAR_16, VAR_13);




 if (!VAR_15) {
  FUNC_10(VAR_11,
   &VAR_19->mirrors[VAR_17].rdev->flags);
  if (!FUNC_11(VAR_10,
          &VAR_19->mirrors[VAR_17].rdev->flags))
   FUNC_10(VAR_4, &
    VAR_19->mddev->recovery);

  FUNC_10(VAR_9, &VAR_16->state);
 } else {
  sector_t VAR_21;
  int VAR_22;

  VAR_16->bios[VAR_17] = ((void*)0);
  VAR_20 = VAR_13;
  if (FUNC_12(VAR_3, &VAR_19->mirrors[VAR_17].rdev->flags) &&
      !FUNC_12(VAR_1, &VAR_19->mirrors[VAR_17].rdev->flags))
   FUNC_10(VAR_8, &VAR_16->state);


  if (FUNC_6(VAR_19->mirrors[VAR_17].rdev,
    VAR_16->sector, VAR_16->sectors,
    &VAR_21, &VAR_22)) {
   VAR_16->bios[VAR_17] = VAR_2;
   FUNC_10(VAR_6, &VAR_16->state);
  }
 }

 if (VAR_18) {
  if (FUNC_12(VAR_12, &VAR_19->mirrors[VAR_17].rdev->flags))
   FUNC_0(&VAR_16->behind_remaining);
  if (FUNC_1(&VAR_16->behind_remaining) >= (FUNC_1(&VAR_16->remaining)-1) &&
      FUNC_12(VAR_8, &VAR_16->state)) {

   if (!FUNC_11(VAR_7, &VAR_16->state)) {
    struct bio *VAR_23 = VAR_16->master_bio;
    FUNC_7("raid1: behind end write sectors"
      " %llu-%llu\n",
      (unsigned long long) VAR_23->bi_sector,
      (unsigned long long) VAR_23->bi_sector +
      FUNC_3(VAR_23) - 1);
    FUNC_4(VAR_16);
   }
  }
 }
 if (VAR_16->bios[VAR_17] == ((void*)0))
  FUNC_9(VAR_19->mirrors[VAR_17].rdev,
     VAR_19->mddev);





 FUNC_8(VAR_16);

 if (VAR_20)
  FUNC_2(VAR_20);
}
