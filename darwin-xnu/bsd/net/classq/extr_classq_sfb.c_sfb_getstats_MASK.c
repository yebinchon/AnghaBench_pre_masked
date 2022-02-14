
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rehash_intval; int pbox_time; int hold_time; } ;
struct sfb_stats {TYPE_3__* binstats; TYPE_1__ sfbstats; int update_interval; int flags; int delay_fcthreshold; int min_estdelay; int target_qdelay; int current; int clearpkts; int dropthresh; int allocation; } ;
struct sfb {TYPE_2__** sfb_bins; TYPE_1__ sfb_stats; int sfb_update_interval; int sfb_hinterval; int sfb_pboxtime; int sfb_holdtime; int sfb_flags; int sfb_fc_threshold; int sfb_min_qdelay; int sfb_target_qdelay; int sfb_current; int sfb_clearpkts; int sfb_drop_thresh; int sfb_allocation; } ;
struct TYPE_6__ {int stats; } ;
struct TYPE_5__ {int stats; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *) ;

void
FUNC_3(struct sfb *VAR_0, struct sfb_stats *VAR_1)
{
 VAR_1->allocation = VAR_0->sfb_allocation;
 VAR_1->dropthresh = VAR_0->sfb_drop_thresh;
 VAR_1->clearpkts = VAR_0->sfb_clearpkts;
 VAR_1->current = VAR_0->sfb_current;
 VAR_1->target_qdelay = VAR_0->sfb_target_qdelay;
 VAR_1->min_estdelay = VAR_0->sfb_min_qdelay;
 VAR_1->delay_fcthreshold = VAR_0->sfb_fc_threshold;
 VAR_1->flags = VAR_0->sfb_flags;

 FUNC_2(&VAR_0->sfb_holdtime, &VAR_0->sfb_stats.hold_time);
 FUNC_2(&VAR_0->sfb_pboxtime, &VAR_0->sfb_stats.pbox_time);
 FUNC_2(&VAR_0->sfb_hinterval, &VAR_0->sfb_stats.rehash_intval);
 FUNC_2(&VAR_0->sfb_update_interval, &VAR_1->update_interval);
 *(&(VAR_1->sfbstats)) = *(&(VAR_0->sfb_stats));

 FUNC_0(sizeof ((*VAR_0->sfb_bins)[0].stats) ==
     sizeof (VAR_1->binstats[0].stats));

 FUNC_1(&(*VAR_0->sfb_bins)[0].stats, &VAR_1->binstats[0].stats,
     sizeof (VAR_1->binstats[0].stats));
 FUNC_1(&(*VAR_0->sfb_bins)[1].stats, &VAR_1->binstats[1].stats,
     sizeof (VAR_1->binstats[1].stats));
}
