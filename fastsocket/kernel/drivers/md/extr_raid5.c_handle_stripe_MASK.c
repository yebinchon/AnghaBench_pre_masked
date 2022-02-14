
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stripe_head_state {int uptodate; scalar_t__ failed; size_t* failed_num; int dec_preread_active; int p_failed; int q_failed; int compute; int return_bi; scalar_t__ ops_request; scalar_t__ handle_bad_blocks; struct md_rdev* blocked_rdev; int locked; scalar_t__ expanding; scalar_t__ expanded; scalar_t__ replacing; scalar_t__ syncing; scalar_t__ to_write; scalar_t__ non_overwrite; scalar_t__ to_read; scalar_t__ written; scalar_t__ to_fill; } ;
struct stripe_head {int disks; size_t pd_idx; scalar_t__ qd_idx; scalar_t__ reconstruct_state; scalar_t__ sector; struct r5dev* dev; int lock; scalar_t__ state; scalar_t__ check_state; int count; int stripe_lock; struct r5conf* raid_conf; } ;
struct r5dev {scalar_t__ flags; scalar_t__ written; } ;
struct r5conf {scalar_t__ max_degraded; int level; int raid_disks; TYPE_2__* mddev; int preread_active_stripes; TYPE_1__* disks; int wait_for_overlap; int reshape_stripes; } ;
struct md_rdev {int dummy; } ;
struct TYPE_7__ {int thread; scalar_t__ external; int ro; } ;
struct TYPE_6__ {struct md_rdev* rdev; struct md_rdev* replacement; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
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
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct stripe_head*,struct stripe_head_state*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,scalar_t__*) ;
 struct stripe_head* FUNC_7 (struct r5conf*,scalar_t__,int,int,int) ;
 int FUNC_8 (struct r5conf*,struct stripe_head*,struct stripe_head_state*,int,int *) ;
 int FUNC_9 (struct r5conf*,struct stripe_head*,struct stripe_head_state*) ;
 int FUNC_10 (struct r5conf*,struct stripe_head*,struct stripe_head_state*,int) ;
 int FUNC_11 (struct r5conf*,struct stripe_head*,struct stripe_head_state*,int) ;
 int FUNC_12 (struct r5conf*,struct stripe_head*,int,int *) ;
 int FUNC_13 (struct r5conf*,struct stripe_head*,struct stripe_head_state*,int) ;
 int FUNC_14 (struct r5conf*,struct stripe_head*) ;
 int FUNC_15 (struct stripe_head*,struct stripe_head_state*,int) ;
 int FUNC_16 (TYPE_2__*,int ,int) ;
 int FUNC_17 (TYPE_2__*,struct md_rdev*) ;
 int FUNC_18 (struct md_rdev*,TYPE_2__*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct stripe_head*,struct stripe_head_state*) ;
 int FUNC_21 (char*,int,...) ;
 int FUNC_22 (struct stripe_head*,scalar_t__) ;
 int FUNC_23 (struct md_rdev*,scalar_t__,int ,int ) ;
 int FUNC_24 (struct md_rdev*,TYPE_2__*) ;
 int FUNC_25 (struct md_rdev*,scalar_t__,int ,int ) ;
 scalar_t__ VAR_30 ;
 void* VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 int FUNC_26 (struct stripe_head*) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (struct stripe_head*,struct stripe_head_state*,int,int) ;
 int FUNC_29 (int ,scalar_t__*) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (scalar_t__,struct r5conf*,int ,struct stripe_head*) ;
 scalar_t__ FUNC_33 (int ,scalar_t__*) ;
 int FUNC_34 (int ,scalar_t__*) ;
 scalar_t__ FUNC_35 (int ,scalar_t__*) ;
 scalar_t__ FUNC_36 (struct md_rdev*) ;
 int FUNC_37 (int *) ;

__attribute__((used)) static void FUNC_38(struct stripe_head *VAR_34)
{
 struct stripe_head_state VAR_35;
 struct r5conf *VAR_36 = VAR_34->raid_conf;
 int VAR_37;
 int VAR_38;
 int VAR_39 = VAR_34->disks;
 struct r5dev *VAR_40, *VAR_41;

 FUNC_30(&VAR_34->lock);

 if (FUNC_35(VAR_29, &VAR_34->state)) {
  FUNC_30(&VAR_34->stripe_lock);

  if (!FUNC_35(VAR_18, &VAR_34->state) &&
      FUNC_33(VAR_29, &VAR_34->state)) {
   FUNC_29(VAR_28, &VAR_34->state);
   FUNC_6(VAR_23, &VAR_34->state);
   FUNC_6(VAR_26, &VAR_34->state);
  }
  FUNC_31(&VAR_34->stripe_lock);
 }
 FUNC_6(VAR_22, &VAR_34->state);
 FUNC_6(VAR_17, &VAR_34->state);

 FUNC_21("handling stripe %llu, state=%#lx cnt=%d, "
  "pd_idx=%d, qd_idx=%d\n, check:%d, reconstruct:%d\n",
        (unsigned long long)VAR_34->sector, VAR_34->state,
        FUNC_5(&VAR_34->count), VAR_34->pd_idx, VAR_34->qd_idx,
        VAR_34->check_state, VAR_34->reconstruct_state);

 FUNC_2(VAR_34, &VAR_35);

 if (VAR_35.handle_bad_blocks) {
  FUNC_29(VAR_22, &VAR_34->state);
  goto finish;
 }

 if (FUNC_36(VAR_35.blocked_rdev)) {
  if (VAR_35.syncing || VAR_35.expanding || VAR_35.expanded ||
      VAR_35.replacing || VAR_35.to_write || VAR_35.written) {
   FUNC_29(VAR_22, &VAR_34->state);
   goto finish;
  }

  FUNC_24(VAR_35.blocked_rdev, VAR_36->mddev);
  VAR_35.blocked_rdev = ((void*)0);
 }

 if (VAR_35.to_fill && !FUNC_35(VAR_15, &VAR_34->state)) {
  FUNC_29(VAR_24, &VAR_35.ops_request);
  FUNC_29(VAR_15, &VAR_34->state);
 }

 FUNC_21("locked=%d uptodate=%d to_read=%d"
        " to_write=%d failed=%d failed_num=%d,%d\n",
        VAR_35.locked, VAR_35.uptodate, VAR_35.to_read, VAR_35.to_write, VAR_35.failed,
        VAR_35.failed_num[0], VAR_35.failed_num[1]);



 if (VAR_35.failed > VAR_36->max_degraded) {
  VAR_34->check_state = 0;
  VAR_34->reconstruct_state = 0;
  if (VAR_35.to_read+VAR_35.to_write+VAR_35.written)
   FUNC_8(VAR_36, VAR_34, &VAR_35, VAR_39, &VAR_35.return_bi);
  if (VAR_35.syncing + VAR_35.replacing)
   FUNC_9(VAR_36, VAR_34, &VAR_35);
 }




 VAR_38 = 0;
 if (VAR_34->reconstruct_state == VAR_32)
  VAR_38 = 1;
 if (VAR_34->reconstruct_state == VAR_30 ||
     VAR_34->reconstruct_state == VAR_32) {
  VAR_34->reconstruct_state = VAR_31;




  FUNC_0(!FUNC_35(VAR_10, &VAR_34->dev[VAR_34->pd_idx].flags) &&
         !FUNC_35(VAR_1, &VAR_34->dev[VAR_34->pd_idx].flags));
  FUNC_0(VAR_34->qd_idx >= 0 &&
         !FUNC_35(VAR_10, &VAR_34->dev[VAR_34->qd_idx].flags) &&
         !FUNC_35(VAR_1, &VAR_34->dev[VAR_34->qd_idx].flags));
  for (VAR_37 = VAR_39; VAR_37--; ) {
   struct r5dev *VAR_42 = &VAR_34->dev[VAR_37];
   if (FUNC_35(VAR_3, &VAR_42->flags) &&
    (VAR_37 == VAR_34->pd_idx || VAR_37 == VAR_34->qd_idx ||
     VAR_42->written)) {
    FUNC_21("Writing block %d\n", VAR_37);
    FUNC_29(VAR_13, &VAR_42->flags);
    if (VAR_38)
     continue;
    if (!FUNC_35(VAR_2, &VAR_42->flags) ||
        ((VAR_37 == VAR_34->pd_idx || VAR_37 == VAR_34->qd_idx) &&
         VAR_35.failed == 0))
     FUNC_29(VAR_23, &VAR_34->state);
   }
  }
  if (FUNC_33(VAR_25, &VAR_34->state))
   VAR_35.dec_preread_active = 1;
 }





 VAR_40 = &VAR_34->dev[VAR_34->pd_idx];
 VAR_35.p_failed = (VAR_35.failed >= 1 && VAR_35.failed_num[0] == VAR_34->pd_idx)
  || (VAR_35.failed >= 2 && VAR_35.failed_num[1] == VAR_34->pd_idx);
 VAR_41 = &VAR_34->dev[VAR_34->qd_idx];
 VAR_35.q_failed = (VAR_35.failed >= 1 && VAR_35.failed_num[0] == VAR_34->qd_idx)
  || (VAR_35.failed >= 2 && VAR_35.failed_num[1] == VAR_34->qd_idx)
  || VAR_36->level < 6;

 if (VAR_35.written &&
     (VAR_35.p_failed || ((FUNC_35(VAR_2, &VAR_40->flags)
        && !FUNC_35(VAR_3, &VAR_40->flags)
        && (FUNC_35(VAR_10, &VAR_40->flags) ||
     FUNC_35(VAR_1, &VAR_40->flags))))) &&
     (VAR_35.q_failed || ((FUNC_35(VAR_2, &VAR_41->flags)
        && !FUNC_35(VAR_3, &VAR_41->flags)
        && (FUNC_35(VAR_10, &VAR_41->flags) ||
     FUNC_35(VAR_1, &VAR_41->flags))))))
  FUNC_12(VAR_36, VAR_34, VAR_39, &VAR_35.return_bi);





 if (VAR_35.to_read || VAR_35.non_overwrite
     || (VAR_36->level == 6 && VAR_35.to_write && VAR_35.failed)
     || (VAR_35.syncing && (VAR_35.uptodate + VAR_35.compute < VAR_39))
     || VAR_35.replacing
     || VAR_35.expanding)
  FUNC_15(VAR_34, &VAR_35, VAR_39);







 if (VAR_35.to_write && !VAR_34->reconstruct_state && !VAR_34->check_state)
  FUNC_13(VAR_36, VAR_34, &VAR_35, VAR_39);






 if (VAR_34->check_state ||
     (VAR_35.syncing && VAR_35.locked == 0 &&
      !FUNC_35(VAR_16, &VAR_34->state) &&
      !FUNC_35(VAR_23, &VAR_34->state))) {
  if (VAR_36->level == 6)
   FUNC_11(VAR_36, VAR_34, &VAR_35, VAR_39);
  else
   FUNC_10(VAR_36, VAR_34, &VAR_35, VAR_39);
 }

 if ((VAR_35.replacing || VAR_35.syncing) && VAR_35.locked == 0
     && !FUNC_35(VAR_16, &VAR_34->state)
     && !FUNC_35(VAR_26, &VAR_34->state)) {

  for (VAR_37 = 0; VAR_37 < VAR_36->raid_disks; VAR_37++)
   if (FUNC_35(VAR_6, &VAR_34->dev[VAR_37].flags)) {
    FUNC_1(!FUNC_35(VAR_10, &VAR_34->dev[VAR_37].flags));
    FUNC_29(VAR_11, &VAR_34->dev[VAR_37].flags);
    FUNC_29(VAR_3, &VAR_34->dev[VAR_37].flags);
    VAR_35.locked++;
   }
  if (VAR_35.replacing)
   FUNC_29(VAR_23, &VAR_34->state);
  FUNC_29(VAR_26, &VAR_34->state);
 }
 if ((VAR_35.syncing || VAR_35.replacing) && VAR_35.locked == 0 &&
     !FUNC_35(VAR_16, &VAR_34->state) &&
     FUNC_35(VAR_23, &VAR_34->state)) {
  FUNC_16(VAR_36->mddev, VAR_27, 1);
  FUNC_6(VAR_28, &VAR_34->state);
  if (FUNC_33(VAR_7, &VAR_34->dev[VAR_34->pd_idx].flags))
   FUNC_37(&VAR_36->wait_for_overlap);
 }




 if (VAR_35.failed <= VAR_36->max_degraded && !VAR_36->mddev->ro)
  for (VAR_37 = 0; VAR_37 < VAR_35.failed; VAR_37++) {
   struct r5dev *VAR_43 = &VAR_34->dev[VAR_35.failed_num[VAR_37]];
   if (FUNC_35(VAR_9, &VAR_43->flags)
       && !FUNC_35(VAR_3, &VAR_43->flags)
       && FUNC_35(VAR_10, &VAR_43->flags)
    ) {
    if (!FUNC_35(VAR_8, &VAR_43->flags)) {
     FUNC_29(VAR_13, &VAR_43->flags);
     FUNC_29(VAR_8, &VAR_43->flags);
     FUNC_29(VAR_3, &VAR_43->flags);
     VAR_35.locked++;
    } else {

     FUNC_29(VAR_12, &VAR_43->flags);
     FUNC_29(VAR_3, &VAR_43->flags);
     VAR_35.locked++;
    }
   }
  }



 if (VAR_34->reconstruct_state == VAR_33) {
  struct stripe_head *VAR_44
   = FUNC_7(VAR_36, VAR_34->sector, 1, 1, 1);
  if (VAR_44 && FUNC_35(VAR_21, &VAR_44->state)) {



   FUNC_29(VAR_17, &VAR_34->state);
   FUNC_29(VAR_22, &VAR_34->state);
   if (!FUNC_34(VAR_25,
           &VAR_44->state))
    FUNC_4(&VAR_36->preread_active_stripes);
   FUNC_26(VAR_44);
   goto finish;
  }
  if (VAR_44)
   FUNC_26(VAR_44);

  VAR_34->reconstruct_state = VAR_31;
  FUNC_6(VAR_19, &VAR_34->state);
  for (VAR_37 = VAR_36->raid_disks; VAR_37--; ) {
   FUNC_29(VAR_13, &VAR_34->dev[VAR_37].flags);
   FUNC_29(VAR_3, &VAR_34->dev[VAR_37].flags);
   VAR_35.locked++;
  }
 }

 if (VAR_35.expanded && FUNC_35(VAR_19, &VAR_34->state) &&
     !VAR_34->reconstruct_state) {

  VAR_34->disks = VAR_36->raid_disks;
  FUNC_32(VAR_34->sector, VAR_36, 0, VAR_34);
  FUNC_28(VAR_34, &VAR_35, 1, 1);
 } else if (VAR_35.expanded && !VAR_34->reconstruct_state && VAR_35.locked == 0) {
  FUNC_6(VAR_20, &VAR_34->state);
  FUNC_3(&VAR_36->reshape_stripes);
  FUNC_37(&VAR_36->wait_for_overlap);
  FUNC_16(VAR_36->mddev, VAR_27, 1);
 }

 if (VAR_35.expanding && VAR_35.locked == 0 &&
     !FUNC_35(VAR_16, &VAR_34->state))
  FUNC_14(VAR_36, VAR_34);

finish:
 FUNC_31(&VAR_34->lock);


 if (FUNC_36(VAR_35.blocked_rdev)) {
  if (VAR_36->mddev->external)
   FUNC_18(VAR_35.blocked_rdev,
       VAR_36->mddev);
  else




   FUNC_24(VAR_35.blocked_rdev,
      VAR_36->mddev);
 }

 if (VAR_35.handle_bad_blocks)
  for (VAR_37 = VAR_39; VAR_37--; ) {
   struct md_rdev *VAR_45;
   struct r5dev *VAR_46 = &VAR_34->dev[VAR_37];
   if (FUNC_33(VAR_14, &VAR_46->flags)) {

    VAR_45 = VAR_36->disks[VAR_37].rdev;
    if (!FUNC_25(VAR_45, VAR_34->sector,
       VAR_27, 0))
     FUNC_17(VAR_36->mddev, VAR_45);
    FUNC_24(VAR_45, VAR_36->mddev);
   }
   if (FUNC_33(VAR_4, &VAR_46->flags)) {
    VAR_45 = VAR_36->disks[VAR_37].rdev;
    FUNC_23(VAR_45, VAR_34->sector,
           VAR_27, 0);
    FUNC_24(VAR_45, VAR_36->mddev);
   }
   if (FUNC_33(VAR_5, &VAR_46->flags)) {
    VAR_45 = VAR_36->disks[VAR_37].replacement;
    if (!VAR_45)

     VAR_45 = VAR_36->disks[VAR_37].rdev;
    FUNC_23(VAR_45, VAR_34->sector,
           VAR_27, 0);
    FUNC_24(VAR_45, VAR_36->mddev);
   }
  }

 if (VAR_35.ops_request)
  FUNC_22(VAR_34, VAR_35.ops_request);

 FUNC_20(VAR_34, &VAR_35);

 if (VAR_35.dec_preread_active) {




  FUNC_3(&VAR_36->preread_active_stripes);
  if (FUNC_5(&VAR_36->preread_active_stripes) <
      VAR_0)
   FUNC_19(VAR_36->mddev->thread);
 }

 FUNC_27(VAR_35.return_bi);
}
