
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_head {size_t pd_idx; size_t qd_idx; int state; struct r5dev* dev; int sector; } ;
struct r5dev {scalar_t__ sector; int flags; struct bio* written; } ;
struct r5conf {TYPE_1__* mddev; int pending_full_writes; } ;
struct bio {scalar_t__ bi_sector; struct bio* bi_next; } ;
struct TYPE_2__ {int thread; int bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,scalar_t__,int,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,int) ;
 struct bio* FUNC_6 (struct bio*,scalar_t__) ;
 int FUNC_7 (struct bio*) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(struct r5conf *VAR_9,
 struct stripe_head *VAR_10, int VAR_11, struct bio **VAR_12)
{
 int VAR_13;
 struct r5dev *VAR_14;
 int VAR_15 = 0;

 for (VAR_13 = VAR_11; VAR_13--; )
  if (VAR_10->dev[VAR_13].written) {
   VAR_14 = &VAR_10->dev[VAR_13];
   if (!FUNC_10(VAR_1, &VAR_14->flags) &&
       (FUNC_10(VAR_2, &VAR_14->flags) ||
        FUNC_10(VAR_0, &VAR_14->flags))) {

    struct bio *VAR_16, *VAR_17;
    FUNC_5("Return write for disc %d\n", VAR_13);
    if (FUNC_9(VAR_0, &VAR_14->flags))
     FUNC_2(VAR_2, &VAR_14->flags);
    VAR_16 = VAR_14->written;
    VAR_14->written = ((void*)0);
    while (VAR_16 && VAR_16->bi_sector <
     VAR_14->sector + VAR_7) {
     VAR_17 = FUNC_6(VAR_16, VAR_14->sector);
     if (!FUNC_7(VAR_16)) {
      FUNC_4(VAR_9->mddev);
      VAR_16->bi_next = *VAR_12;
      *VAR_12 = VAR_16;
     }
     VAR_16 = VAR_17;
    }
    FUNC_1(VAR_9->mddev->bitmap, VAR_10->sector,
      VAR_7,
      !FUNC_10(VAR_3, &VAR_10->state),
      0);
   } else if (FUNC_10(VAR_0, &VAR_14->flags))
    VAR_15 = 1;
  }
 if (!VAR_15 &&
     FUNC_10(VAR_0, &VAR_10->dev[VAR_10->pd_idx].flags)) {
  FUNC_2(VAR_0, &VAR_10->dev[VAR_10->pd_idx].flags);
  FUNC_2(VAR_2, &VAR_10->dev[VAR_10->pd_idx].flags);
  if (VAR_10->qd_idx >= 0) {
   FUNC_2(VAR_0, &VAR_10->dev[VAR_10->qd_idx].flags);
   FUNC_2(VAR_2, &VAR_10->dev[VAR_10->qd_idx].flags);
  }

  FUNC_2(VAR_4, &VAR_10->state);
  if (FUNC_10(VAR_8, &VAR_10->state))
   FUNC_8(VAR_6, &VAR_10->state);

 }

 if (FUNC_9(VAR_5, &VAR_10->state))
  if (FUNC_0(&VAR_9->pending_full_writes))
   FUNC_3(VAR_9->mddev->thread);
}
