
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_head_state {scalar_t__ locked; scalar_t__ req_compute; } ;
struct stripe_head {scalar_t__ sector; int pd_idx; int qd_idx; int state; struct r5dev* dev; } ;
struct r5dev {int flags; scalar_t__ towrite; } ;
struct r5conf {int max_degraded; TYPE_1__* mddev; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {scalar_t__ recovery_cp; scalar_t__ queue; } ;


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
 int FUNC_0 (scalar_t__,char*,unsigned long long,int,...) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (struct stripe_head*,struct stripe_head_state*,int,int ) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct r5conf *VAR_12,
       struct stripe_head *VAR_13,
       struct stripe_head_state *VAR_14,
       int VAR_15)
{
 int VAR_16 = 0, VAR_17 = 0, VAR_18;
 sector_t VAR_19 = VAR_12->mddev->recovery_cp;
 if (VAR_12->max_degraded == 2 ||
     (VAR_19 < VAR_0 && VAR_13->sector >= VAR_19)) {



  VAR_17 = 1; VAR_16 = 2;
  FUNC_1("force RCW max_degraded=%u, recovery_cp=%llu sh->sector=%llu\n",
    VAR_12->max_degraded, (unsigned long long)VAR_19,
    (unsigned long long)VAR_13->sector);
 } else for (VAR_18 = VAR_15; VAR_18--; ) {

  struct r5dev *VAR_20 = &VAR_13->dev[VAR_18];
  if ((VAR_20->towrite || VAR_18 == VAR_13->pd_idx) &&
      !FUNC_4(VAR_2, &VAR_20->flags) &&
      !(FUNC_4(VAR_4, &VAR_20->flags) ||
        FUNC_4(VAR_5, &VAR_20->flags))) {
   if (FUNC_4(VAR_1, &VAR_20->flags))
    VAR_16++;
   else
    VAR_16 += 2*VAR_15;
  }

  if (!FUNC_4(VAR_3, &VAR_20->flags) && VAR_18 != VAR_13->pd_idx &&
      !FUNC_4(VAR_2, &VAR_20->flags) &&
      !(FUNC_4(VAR_4, &VAR_20->flags) ||
      FUNC_4(VAR_5, &VAR_20->flags))) {
   if (FUNC_4(VAR_1, &VAR_20->flags)) VAR_17++;
   else
    VAR_17 += 2*VAR_15;
  }
 }
 FUNC_1("for sector %llu, rmw=%d rcw=%d\n",
  (unsigned long long)VAR_13->sector, VAR_16, VAR_17);
 FUNC_3(VAR_10, &VAR_13->state);
 if (VAR_16 < VAR_17 && VAR_16 > 0) {

  if (VAR_12->mddev->queue)
   FUNC_0(VAR_12->mddev->queue,
       "raid5 rmw %llu %d",
       (unsigned long long)VAR_13->sector, VAR_16);
  for (VAR_18 = VAR_15; VAR_18--; ) {
   struct r5dev *VAR_21 = &VAR_13->dev[VAR_18];
   if ((VAR_21->towrite || VAR_18 == VAR_13->pd_idx) &&
       !FUNC_4(VAR_2, &VAR_21->flags) &&
       !(FUNC_4(VAR_4, &VAR_21->flags) ||
       FUNC_4(VAR_5, &VAR_21->flags)) &&
       FUNC_4(VAR_1, &VAR_21->flags)) {
    if (
      FUNC_4(VAR_11, &VAR_13->state)) {
     FUNC_1("Read_old block "
       "%d for r-m-w\n", VAR_18);
     FUNC_3(VAR_2, &VAR_21->flags);
     FUNC_3(VAR_6, &VAR_21->flags);
     VAR_14->locked++;
    } else {
     FUNC_3(VAR_9, &VAR_13->state);
     FUNC_3(VAR_10, &VAR_13->state);
    }
   }
  }
 }
 if (VAR_17 <= VAR_16 && VAR_17 > 0) {

  int VAR_22 =0;
  VAR_17 = 0;
  for (VAR_18 = VAR_15; VAR_18--; ) {
   struct r5dev *VAR_23 = &VAR_13->dev[VAR_18];
   if (!FUNC_4(VAR_3, &VAR_23->flags) &&
       VAR_18 != VAR_13->pd_idx && VAR_18 != VAR_13->qd_idx &&
       !FUNC_4(VAR_2, &VAR_23->flags) &&
       !(FUNC_4(VAR_4, &VAR_23->flags) ||
         FUNC_4(VAR_5, &VAR_23->flags))) {
    VAR_17++;
    if (!FUNC_4(VAR_1, &VAR_23->flags))
     continue;
    if (
      FUNC_4(VAR_11, &VAR_13->state)) {
     FUNC_1("Read_old block "
      "%d for Reconstruct\n", VAR_18);
     FUNC_3(VAR_2, &VAR_23->flags);
     FUNC_3(VAR_6, &VAR_23->flags);
     VAR_14->locked++;
     VAR_22++;
    } else {
     FUNC_3(VAR_9, &VAR_13->state);
     FUNC_3(VAR_10, &VAR_13->state);
    }
   }
  }
  if (VAR_17 && VAR_12->mddev->queue)
   FUNC_0(VAR_12->mddev->queue, "raid5 rcw %llu %d %d %d",
       (unsigned long long)VAR_13->sector,
       VAR_17, VAR_22, FUNC_4(VAR_9, &VAR_13->state));
 }
 if ((VAR_14->req_compute || !FUNC_4(VAR_8, &VAR_13->state)) &&
     (VAR_14->locked == 0 && (VAR_17 == 0 || VAR_16 == 0) &&
     !FUNC_4(VAR_7, &VAR_13->state)))
  FUNC_2(VAR_13, VAR_14, VAR_17 == 0, 0);
}
