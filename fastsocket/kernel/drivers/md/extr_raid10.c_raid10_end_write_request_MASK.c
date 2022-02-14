
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct r10conf {int mddev; TYPE_2__* mirrors; } ;
struct r10bio {int state; TYPE_3__* devs; int sectors; TYPE_1__* mddev; } ;
struct md_rdev {int flags; TYPE_4__* mddev; } ;
struct bio {struct r10bio* bi_private; int bi_flags; } ;
typedef int sector_t ;
struct TYPE_8__ {int recovery; } ;
struct TYPE_7__ {void* bio; void* repl_bio; int addr; } ;
struct TYPE_6__ {struct md_rdev* rdev; struct md_rdev* replacement; } ;
struct TYPE_5__ {struct r10conf* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct r10conf*,struct r10bio*,struct bio*,int*,int*) ;
 scalar_t__ FUNC_2 (struct md_rdev*,int ,int ,int *,int*) ;
 int FUNC_3 (TYPE_4__*,struct md_rdev*) ;
 int FUNC_4 (struct r10bio*) ;
 int FUNC_5 (struct md_rdev*,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct bio *VAR_10, int VAR_11)
{
 int VAR_12 = FUNC_9(VAR_0, &VAR_10->bi_flags);
 struct r10bio *VAR_13 = VAR_10->bi_private;
 int VAR_14;
 int VAR_15 = 1;
 struct r10conf *VAR_16 = VAR_13->mddev->private;
 int VAR_17, VAR_18;
 struct md_rdev *VAR_19 = ((void*)0);

 VAR_14 = FUNC_1(VAR_16, VAR_13, VAR_10, &VAR_17, &VAR_18);

 if (VAR_18)
  VAR_19 = VAR_16->mirrors[VAR_14].replacement;
 if (!VAR_19) {
  FUNC_7();
  VAR_18 = 0;
  VAR_19 = VAR_16->mirrors[VAR_14].rdev;
 }



 if (!VAR_12) {
  if (VAR_18)



   FUNC_3(VAR_19->mddev, VAR_19);
  else {
   FUNC_6(VAR_9, &VAR_19->flags);
   if (!FUNC_8(VAR_8, &VAR_19->flags))
    FUNC_6(VAR_4,
     &VAR_19->mddev->recovery);
   FUNC_6(VAR_7, &VAR_13->state);
   VAR_15 = 0;
  }
 } else {
  sector_t VAR_20;
  int VAR_21;
  if (FUNC_9(VAR_3, &VAR_19->flags) &&
      !FUNC_9(VAR_1, &VAR_19->flags))
   FUNC_6(VAR_6, &VAR_13->state);


  if (FUNC_2(VAR_19,
    VAR_13->devs[VAR_17].addr,
    VAR_13->sectors,
    &VAR_20, &VAR_21)) {
   FUNC_0(VAR_10);
   if (VAR_18)
    VAR_13->devs[VAR_17].repl_bio = VAR_2;
   else
    VAR_13->devs[VAR_17].bio = VAR_2;
   VAR_15 = 0;
   FUNC_6(VAR_5, &VAR_13->state);
  }
 }






 FUNC_4(VAR_13);
 if (VAR_15)
  FUNC_5(VAR_19, VAR_16->mddev);
}
