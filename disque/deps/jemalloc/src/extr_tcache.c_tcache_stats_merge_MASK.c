
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {TYPE_5__* tbins; } ;
typedef TYPE_4__ tcache_t ;
struct TYPE_13__ {scalar_t__ nrequests; } ;
struct TYPE_15__ {TYPE_3__ tstats; } ;
typedef TYPE_5__ tcache_bin_t ;
struct TYPE_16__ {int nrequests; } ;
typedef TYPE_6__ malloc_large_stats_t ;
struct TYPE_12__ {int nrequests_large; TYPE_6__* lstats; } ;
struct TYPE_17__ {TYPE_2__ stats; TYPE_8__* bins; } ;
typedef TYPE_7__ arena_t ;
struct TYPE_11__ {int nrequests; } ;
struct TYPE_18__ {int lock; TYPE_1__ stats; } ;
typedef TYPE_8__ arena_bin_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned int VAR_2 ;

void
FUNC_3(tcache_t *VAR_3, arena_t *VAR_4)
{
 unsigned VAR_5;

 FUNC_0(VAR_1);


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  arena_bin_t *VAR_6 = &VAR_4->bins[VAR_5];
  tcache_bin_t *VAR_7 = &VAR_3->tbins[VAR_5];
  FUNC_1(&VAR_6->lock);
  VAR_6->stats.nrequests += VAR_7->tstats.nrequests;
  FUNC_2(&VAR_6->lock);
  VAR_7->tstats.nrequests = 0;
 }

 for (; VAR_5 < VAR_2; VAR_5++) {
  malloc_large_stats_t *VAR_8 = &VAR_4->stats.lstats[VAR_5 - VAR_0];
  tcache_bin_t *VAR_9 = &VAR_3->tbins[VAR_5];
  VAR_4->stats.nrequests_large += VAR_9->tstats.nrequests;
  VAR_8->nrequests += VAR_9->tstats.nrequests;
  VAR_9->tstats.nrequests = 0;
 }
}
