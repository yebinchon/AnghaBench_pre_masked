
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stripe_head_state {int dummy; } ;
struct stripe_head {int state; TYPE_2__* dev; int sector; int stripe_lock; } ;
struct r5conf {TYPE_3__* mddev; int pending_full_writes; int wait_for_overlap; TYPE_1__* disks; } ;
struct md_rdev {int nr_pending; int flags; } ;
struct bio {scalar_t__ bi_sector; struct bio* bi_next; int bi_flags; } ;
struct TYPE_8__ {int thread; int bitmap; } ;
struct TYPE_7__ {scalar_t__ sector; int flags; struct bio* toread; struct bio* written; struct bio* towrite; } ;
struct TYPE_6__ {int rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,scalar_t__,int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_3__*,struct md_rdev*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;
 struct bio* FUNC_7 (struct bio*,scalar_t__) ;
 int FUNC_8 (struct bio*) ;
 struct md_rdev* FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (struct md_rdev*,TYPE_3__*) ;
 int FUNC_13 (struct md_rdev*,int ,scalar_t__,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int ,int *) ;
 scalar_t__ FUNC_17 (int ,int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static void
FUNC_19(struct r5conf *VAR_9, struct stripe_head *VAR_10,
    struct stripe_head_state *VAR_11, int VAR_12,
    struct bio **VAR_13)
{
 int VAR_14;
 for (VAR_14 = VAR_12; VAR_14--; ) {
  struct bio *VAR_15;
  int VAR_16 = 0;

  if (FUNC_17(VAR_5, &VAR_10->dev[VAR_14].flags)) {
   struct md_rdev *VAR_17;
   FUNC_10();
   VAR_17 = FUNC_9(VAR_9->disks[VAR_14].rdev);
   if (VAR_17 && FUNC_17(VAR_1, &VAR_17->flags))
    FUNC_1(&VAR_17->nr_pending);
   else
    VAR_17 = ((void*)0);
   FUNC_11();
   if (VAR_17) {
    if (!FUNC_13(
         VAR_17,
         VAR_10->sector,
         VAR_8, 0))
     FUNC_4(VAR_9->mddev, VAR_17);
    FUNC_12(VAR_17, VAR_9->mddev);
   }
  }
  FUNC_14(&VAR_10->stripe_lock);

  VAR_15 = VAR_10->dev[VAR_14].towrite;
  VAR_10->dev[VAR_14].towrite = ((void*)0);
  FUNC_15(&VAR_10->stripe_lock);
  if (VAR_15)
   VAR_16 = 1;

  if (FUNC_16(VAR_4, &VAR_10->dev[VAR_14].flags))
   FUNC_18(&VAR_9->wait_for_overlap);

  while (VAR_15 && VAR_15->bi_sector <
   VAR_10->dev[VAR_14].sector + VAR_8) {
   struct bio *VAR_18 = FUNC_7(VAR_15, VAR_10->dev[VAR_14].sector);
   FUNC_3(VAR_0, &VAR_15->bi_flags);
   if (!FUNC_8(VAR_15)) {
    FUNC_6(VAR_9->mddev);
    VAR_15->bi_next = *VAR_13;
    *VAR_13 = VAR_15;
   }
   VAR_15 = VAR_18;
  }
  if (VAR_16)
   FUNC_2(VAR_9->mddev->bitmap, VAR_10->sector,
    VAR_8, 0, 0);
  VAR_16 = 0;

  VAR_15 = VAR_10->dev[VAR_14].written;
  VAR_10->dev[VAR_14].written = ((void*)0);
  if (VAR_15) VAR_16 = 1;
  while (VAR_15 && VAR_15->bi_sector <
         VAR_10->dev[VAR_14].sector + VAR_8) {
   struct bio *VAR_19 = FUNC_7(VAR_15, VAR_10->dev[VAR_14].sector);
   FUNC_3(VAR_0, &VAR_15->bi_flags);
   if (!FUNC_8(VAR_15)) {
    FUNC_6(VAR_9->mddev);
    VAR_15->bi_next = *VAR_13;
    *VAR_13 = VAR_15;
   }
   VAR_15 = VAR_19;
  }




  if (!FUNC_17(VAR_6, &VAR_10->dev[VAR_14].flags) &&
      (!FUNC_17(VAR_2, &VAR_10->dev[VAR_14].flags) ||
        FUNC_17(VAR_5, &VAR_10->dev[VAR_14].flags))) {
   FUNC_14(&VAR_10->stripe_lock);
   VAR_15 = VAR_10->dev[VAR_14].toread;
   VAR_10->dev[VAR_14].toread = ((void*)0);
   FUNC_15(&VAR_10->stripe_lock);
   if (FUNC_16(VAR_4, &VAR_10->dev[VAR_14].flags))
    FUNC_18(&VAR_9->wait_for_overlap);
   while (VAR_15 && VAR_15->bi_sector <
          VAR_10->dev[VAR_14].sector + VAR_8) {
    struct bio *VAR_20 =
     FUNC_7(VAR_15, VAR_10->dev[VAR_14].sector);
    FUNC_3(VAR_0, &VAR_15->bi_flags);
    if (!FUNC_8(VAR_15)) {
     VAR_15->bi_next = *VAR_13;
     *VAR_13 = VAR_15;
    }
    VAR_15 = VAR_20;
   }
  }
  if (VAR_16)
   FUNC_2(VAR_9->mddev->bitmap, VAR_10->sector,
     VAR_8, 0, 0);



  FUNC_3(VAR_3, &VAR_10->dev[VAR_14].flags);
 }

 if (FUNC_16(VAR_7, &VAR_10->state))
  if (FUNC_0(&VAR_9->pending_full_writes))
   FUNC_5(VAR_9->mddev->thread);
}
