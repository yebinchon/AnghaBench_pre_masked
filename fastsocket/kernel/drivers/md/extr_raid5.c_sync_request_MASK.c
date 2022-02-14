
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_head {int state; } ;
struct r5conf {int quiesce; scalar_t__ max_degraded; int raid_disks; TYPE_1__* disks; scalar_t__ fullsync; int wait_for_overlap; } ;
struct mddev {scalar_t__ dev_sectors; scalar_t__ curr_resync; scalar_t__ degraded; int bitmap; int recovery; struct r5conf* private; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {int * rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__*,int) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__*,int) ;
 int FUNC_4 (struct r5conf*) ;
 struct stripe_head* FUNC_5 (struct r5conf*,scalar_t__,int ,int,int ) ;
 int FUNC_6 (struct stripe_head*) ;
 int FUNC_7 (struct stripe_head*) ;
 scalar_t__ FUNC_8 (struct mddev*,scalar_t__,int*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (struct mddev*) ;
 int FUNC_13 (int ,int) ;

__attribute__((used)) static inline sector_t FUNC_14(struct mddev *VAR_5, sector_t VAR_6, int *VAR_7, int VAR_8)
{
 struct r5conf *VAR_9 = VAR_5->private;
 struct stripe_head *VAR_10;
 sector_t VAR_11 = VAR_5->dev_sectors;
 sector_t VAR_12;
 int VAR_13 = 0;
 int VAR_14;

 if (VAR_6 >= VAR_11) {

  FUNC_12(VAR_5);

  if (FUNC_11(VAR_1, &VAR_5->recovery)) {
   FUNC_4(VAR_9);
   return 0;
  }

  if (VAR_5->curr_resync < VAR_11)
   FUNC_2(VAR_5->bitmap, VAR_5->curr_resync,
     &VAR_12, 1);
  else
   VAR_9->fullsync = 0;
  FUNC_0(VAR_5->bitmap);

  return 0;
 }


 FUNC_13(VAR_9->wait_for_overlap, VAR_9->quiesce != 2);

 if (FUNC_11(VAR_1, &VAR_5->recovery))
  return FUNC_8(VAR_5, VAR_6, VAR_7);
 if (VAR_5->degraded >= VAR_9->max_degraded &&
     FUNC_11(VAR_2, &VAR_5->recovery)) {
  sector_t VAR_15 = VAR_5->dev_sectors - VAR_6;
  *VAR_7 = 1;
  return VAR_15;
 }
 if (!FUNC_11(VAR_0, &VAR_5->recovery) &&
     !VAR_9->fullsync &&
     !FUNC_3(VAR_5->bitmap, VAR_6, &VAR_12, 1) &&
     VAR_12 >= VAR_3) {

  VAR_12 /= VAR_3;
  *VAR_7 = 1;
  return VAR_12 * VAR_3;
 }

 FUNC_1(VAR_5->bitmap, VAR_6);

 VAR_10 = FUNC_5(VAR_9, VAR_6, 0, 1, 0);
 if (VAR_10 == ((void*)0)) {
  VAR_10 = FUNC_5(VAR_9, VAR_6, 0, 0, 0);



  FUNC_9(1);
 }




 for (VAR_14 = 0; VAR_14 < VAR_9->raid_disks; VAR_14++)
  if (VAR_9->disks[VAR_14].rdev == ((void*)0))
   VAR_13 = 1;

 FUNC_3(VAR_5->bitmap, VAR_6, &VAR_12, VAR_13);

 FUNC_10(VAR_4, &VAR_10->state);

 FUNC_6(VAR_10);
 FUNC_7(VAR_10);

 return VAR_3;
}
