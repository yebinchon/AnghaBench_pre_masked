
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stripe_head_state {int* failed_num; int compute; int handle_bad_blocks; int failed; int syncing; int replacing; struct md_rdev* blocked_rdev; int written; int non_overwrite; int to_write; int to_read; int to_fill; int uptodate; int locked; void* expanded; void* expanding; } ;
struct stripe_head {int disks; scalar_t__ sector; int state; struct r5dev* dev; struct r5conf* raid_conf; } ;
struct r5dev {int flags; scalar_t__ written; scalar_t__ towrite; scalar_t__ toread; } ;
struct r5conf {TYPE_2__* mddev; TYPE_1__* disks; } ;
struct md_rdev {scalar_t__ recovery_offset; int flags; int nr_pending; } ;
typedef int sector_t ;
struct TYPE_4__ {scalar_t__ recovery_cp; int recovery; } ;
struct TYPE_3__ {int replacement; int rdev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct md_rdev*,scalar_t__,scalar_t__,int *,int*) ;
 int FUNC_4 (struct stripe_head_state*,int ,int) ;
 int FUNC_5 (char*,int,int ,scalar_t__,scalar_t__,scalar_t__) ;
 struct md_rdev* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int *) ;
 void* FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(struct stripe_head *VAR_25, struct stripe_head_state *VAR_26)
{
 struct r5conf *VAR_27 = VAR_25->raid_conf;
 int VAR_28 = VAR_25->disks;
 struct r5dev *VAR_29;
 int VAR_30;
 int VAR_31 = 0;

 FUNC_4(VAR_26, 0, sizeof(*VAR_26));

 VAR_26->expanding = FUNC_10(VAR_21, &VAR_25->state);
 VAR_26->expanded = FUNC_10(VAR_20, &VAR_25->state);
 VAR_26->failed_num[0] = -1;
 VAR_26->failed_num[1] = -1;


 FUNC_7();
 for (VAR_30=VAR_28; VAR_30--; ) {
  struct md_rdev *VAR_32;
  sector_t VAR_33;
  int VAR_34;
  int VAR_35 = 0;

  VAR_29 = &VAR_25->dev[VAR_30];

  FUNC_5("check %d: state 0x%lx read %p write %p written %p\n",
    VAR_30, VAR_29->flags,
    VAR_29->toread, VAR_29->towrite, VAR_29->written);





  if (FUNC_10(VAR_15, &VAR_29->flags) && VAR_29->toread &&
      !FUNC_10(VAR_19, &VAR_25->state))
   FUNC_9(VAR_17, &VAR_29->flags);


  if (FUNC_10(VAR_7, &VAR_29->flags))
   VAR_26->locked++;
  if (FUNC_10(VAR_15, &VAR_29->flags))
   VAR_26->uptodate++;
  if (FUNC_10(VAR_16, &VAR_29->flags)) {
   VAR_26->compute++;
   FUNC_0(VAR_26->compute > 2);
  }

  if (FUNC_10(VAR_17, &VAR_29->flags))
   VAR_26->to_fill++;
  else if (VAR_29->toread)
   VAR_26->to_read++;
  if (VAR_29->towrite) {
   VAR_26->to_write++;
   if (!FUNC_10(VAR_11, &VAR_29->flags))
    VAR_26->non_overwrite++;
  }
  if (VAR_29->written)
   VAR_26->written++;



  VAR_32 = FUNC_6(VAR_27->disks[VAR_30].replacement);
  if (VAR_32 && !FUNC_10(VAR_2, &VAR_32->flags) &&
      VAR_32->recovery_offset >= VAR_25->sector + VAR_22 &&
      !FUNC_3(VAR_32, VAR_25->sector, VAR_22,
     &VAR_33, &VAR_34))
   FUNC_9(VAR_14, &VAR_29->flags);
  else {
   if (VAR_32)
    FUNC_9(VAR_10, &VAR_29->flags);
   VAR_32 = FUNC_6(VAR_27->disks[VAR_30].rdev);
   FUNC_2(VAR_14, &VAR_29->flags);
  }
  if (VAR_32 && FUNC_10(VAR_2, &VAR_32->flags))
   VAR_32 = ((void*)0);
  if (VAR_32) {
   VAR_35 = FUNC_3(VAR_32, VAR_25->sector, VAR_22,
          &VAR_33, &VAR_34);
   if (VAR_26->blocked_rdev == ((void*)0)
       && (FUNC_10(VAR_0, &VAR_32->flags)
    || VAR_35 < 0)) {
    if (VAR_35 < 0)
     FUNC_9(VAR_1,
      &VAR_32->flags);
    VAR_26->blocked_rdev = VAR_32;
    FUNC_1(&VAR_32->nr_pending);
   }
  }
  FUNC_2(VAR_6, &VAR_29->flags);
  if (!VAR_32)
                    ;
  else if (VAR_35) {

   if (!FUNC_10(VAR_24, &VAR_32->flags) &&
       FUNC_10(VAR_15, &VAR_29->flags)) {



    FUNC_9(VAR_6, &VAR_29->flags);
    FUNC_9(VAR_13, &VAR_29->flags);
   }
  } else if (FUNC_10(VAR_3, &VAR_32->flags))
   FUNC_9(VAR_6, &VAR_29->flags);
  else if (VAR_25->sector + VAR_22 <= VAR_32->recovery_offset)

   FUNC_9(VAR_6, &VAR_29->flags);
  else if (FUNC_10(VAR_15, &VAR_29->flags) &&
    FUNC_10(VAR_5, &VAR_29->flags))




   FUNC_9(VAR_6, &VAR_29->flags);

  if (VAR_32 && FUNC_10(VAR_18, &VAR_29->flags)) {


   struct md_rdev *VAR_36 = FUNC_6(
    VAR_27->disks[VAR_30].rdev);
   if (VAR_36 == VAR_32)
    FUNC_2(VAR_6, &VAR_29->flags);
   if (VAR_36 && !FUNC_10(VAR_2, &VAR_36->flags)) {
    VAR_26->handle_bad_blocks = 1;
    FUNC_1(&VAR_36->nr_pending);
   } else
    FUNC_2(VAR_18, &VAR_29->flags);
  }
  if (VAR_32 && FUNC_10(VAR_8, &VAR_29->flags)) {


   struct md_rdev *VAR_37 = FUNC_6(
    VAR_27->disks[VAR_30].rdev);
   if (VAR_37 && !FUNC_10(VAR_2, &VAR_37->flags)) {
    VAR_26->handle_bad_blocks = 1;
    FUNC_1(&VAR_37->nr_pending);
   } else
    FUNC_2(VAR_8, &VAR_29->flags);
  }
  if (FUNC_10(VAR_9, &VAR_29->flags)) {
   struct md_rdev *VAR_38 = FUNC_6(
    VAR_27->disks[VAR_30].replacement);
   if (VAR_38 && !FUNC_10(VAR_2, &VAR_38->flags)) {
    VAR_26->handle_bad_blocks = 1;
    FUNC_1(&VAR_38->nr_pending);
   } else
    FUNC_2(VAR_9, &VAR_29->flags);
  }
  if (!FUNC_10(VAR_6, &VAR_29->flags)) {

   FUNC_2(VAR_13, &VAR_29->flags);
   FUNC_2(VAR_12, &VAR_29->flags);
  }
  if (FUNC_10(VAR_13, &VAR_29->flags))
   FUNC_2(VAR_6, &VAR_29->flags);
  if (!FUNC_10(VAR_6, &VAR_29->flags)) {
   if (VAR_26->failed < 2)
    VAR_26->failed_num[VAR_26->failed] = VAR_30;
   VAR_26->failed++;
   if (VAR_32 && !FUNC_10(VAR_2, &VAR_32->flags))
    VAR_31 = 1;
  }
 }
 if (FUNC_10(VAR_23, &VAR_25->state)) {
  if (VAR_31 ||
      VAR_25->sector >= VAR_27->mddev->recovery_cp ||
      FUNC_10(VAR_4, &(VAR_27->mddev->recovery)))
   VAR_26->syncing = 1;
  else
   VAR_26->replacing = 1;
 }
 FUNC_8();
}
