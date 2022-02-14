
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_23__ {int prof_accumbytes; TYPE_6__* tbins; } ;
typedef TYPE_5__ tcache_t ;
struct TYPE_22__ {scalar_t__ nrequests; } ;
struct TYPE_24__ {TYPE_4__ tstats; } ;
typedef TYPE_6__ tcache_bin_t ;
struct TYPE_21__ {TYPE_2__* lstats; int nrequests_large; } ;
struct TYPE_25__ {int lock; TYPE_3__ stats; TYPE_8__* bins; } ;
typedef TYPE_7__ arena_t ;
struct TYPE_19__ {int nrequests; } ;
struct TYPE_26__ {int lock; TYPE_1__ stats; } ;
typedef TYPE_8__ arena_bin_t ;
struct TYPE_20__ {int nrequests; } ;


 unsigned int VAR_0 ;
 TYPE_7__* FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (TYPE_7__*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,TYPE_5__*,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned int VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_5__*,TYPE_7__*) ;
 int FUNC_7 (int *,TYPE_6__*,unsigned int,int ,TYPE_5__*) ;
 int FUNC_8 (int *,TYPE_5__*,TYPE_6__*,unsigned int,int ) ;

__attribute__((used)) static void
FUNC_9(tsd_t *VAR_4, tcache_t *VAR_5)
{
 arena_t *VAR_6;
 unsigned VAR_7;

 VAR_6 = FUNC_0(VAR_4, ((void*)0));
 FUNC_6(VAR_5, VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  tcache_bin_t *VAR_8 = &VAR_5->tbins[VAR_7];
  FUNC_8(VAR_4, VAR_5, VAR_8, VAR_7, 0);

  if (VAR_2 && VAR_8->tstats.nrequests != 0) {
   arena_bin_t *VAR_9 = &VAR_6->bins[VAR_7];
   FUNC_3(&VAR_9->lock);
   VAR_9->stats.nrequests += VAR_8->tstats.nrequests;
   FUNC_4(&VAR_9->lock);
  }
 }

 for (; VAR_7 < VAR_3; VAR_7++) {
  tcache_bin_t *VAR_10 = &VAR_5->tbins[VAR_7];
  FUNC_7(VAR_4, VAR_10, VAR_7, 0, VAR_5);

  if (VAR_2 && VAR_10->tstats.nrequests != 0) {
   FUNC_3(&VAR_6->lock);
   VAR_6->stats.nrequests_large += VAR_10->tstats.nrequests;
   VAR_6->stats.lstats[VAR_7 - VAR_0].nrequests +=
       VAR_10->tstats.nrequests;
   FUNC_4(&VAR_6->lock);
  }
 }

 if (VAR_1 && VAR_5->prof_accumbytes > 0 &&
     FUNC_1(VAR_6, VAR_5->prof_accumbytes))
  FUNC_5();

 FUNC_2(VAR_4, VAR_5, 0, 1);
}
