
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_18__ {int prof_accumbytes; } ;
typedef TYPE_3__ tcache_t ;
struct TYPE_17__ {scalar_t__ nrequests; } ;
struct TYPE_19__ {unsigned int ncached; void** avail; int low_water; TYPE_2__ tstats; } ;
typedef TYPE_4__ tcache_bin_t ;
typedef size_t szind_t ;
struct TYPE_20__ {TYPE_7__* bins; } ;
typedef TYPE_5__ arena_t ;
struct TYPE_21__ {int node; } ;
typedef TYPE_6__ arena_chunk_t ;
typedef int arena_chunk_map_bits_t ;
struct TYPE_16__ {int nrequests; int nflushes; } ;
struct TYPE_22__ {int lock; TYPE_1__ stats; } ;
typedef TYPE_7__ arena_bin_t ;


 scalar_t__ FUNC_0 (void*) ;
 uintptr_t VAR_0 ;
 size_t VAR_1 ;
 int * FUNC_1 (TYPE_6__*,size_t) ;
 TYPE_5__* FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_5__*,TYPE_6__*,void*,int *) ;
 scalar_t__ FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_5__* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (void**,void**,unsigned int) ;
 int FUNC_10 () ;

void
FUNC_11(tsd_t *VAR_4, tcache_t *VAR_5, tcache_bin_t *VAR_6,
    szind_t VAR_7, unsigned VAR_8)
{
 arena_t *VAR_9;
 void *VAR_10;
 unsigned VAR_11, VAR_12, VAR_13;
 bool VAR_14 = 0;

 FUNC_5(VAR_7 < VAR_1);
 FUNC_5(VAR_8 <= VAR_6->ncached);

 VAR_9 = FUNC_2(VAR_4, ((void*)0));
 FUNC_5(VAR_9 != ((void*)0));
 for (VAR_12 = VAR_6->ncached - VAR_8; VAR_12 > 0; VAR_12 = VAR_13) {

  arena_chunk_t *VAR_15 = (arena_chunk_t *)FUNC_0(
      VAR_6->avail[0]);
  arena_t *VAR_16 = FUNC_6(&VAR_15->node);
  arena_bin_t *VAR_17 = &VAR_16->bins[VAR_7];

  if (VAR_2 && VAR_16 == VAR_9) {
   if (FUNC_4(VAR_9, VAR_5->prof_accumbytes))
    FUNC_10();
   VAR_5->prof_accumbytes = 0;
  }

  FUNC_7(&VAR_17->lock);
  if (VAR_3 && VAR_16 == VAR_9) {
   FUNC_5(!VAR_14);
   VAR_14 = 1;
   VAR_17->stats.nflushes++;
   VAR_17->stats.nrequests += VAR_6->tstats.nrequests;
   VAR_6->tstats.nrequests = 0;
  }
  VAR_13 = 0;
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
   VAR_10 = VAR_6->avail[VAR_11];
   FUNC_5(VAR_10 != ((void*)0));
   VAR_15 = (arena_chunk_t *)FUNC_0(VAR_10);
   if (FUNC_6(&VAR_15->node) == VAR_16) {
    size_t VAR_18 = ((uintptr_t)VAR_10 -
        (uintptr_t)VAR_15) >> VAR_0;
    arena_chunk_map_bits_t *VAR_19 =
        FUNC_1(VAR_15, VAR_18);
    FUNC_3(VAR_16, VAR_15,
        VAR_10, VAR_19);
   } else {






    VAR_6->avail[VAR_13] = VAR_10;
    VAR_13++;
   }
  }
  FUNC_8(&VAR_17->lock);
 }
 if (VAR_3 && !VAR_14) {




  arena_bin_t *VAR_20 = &VAR_9->bins[VAR_7];
  FUNC_7(&VAR_20->lock);
  VAR_20->stats.nflushes++;
  VAR_20->stats.nrequests += VAR_6->tstats.nrequests;
  VAR_6->tstats.nrequests = 0;
  FUNC_8(&VAR_20->lock);
 }

 FUNC_9(VAR_6->avail, &VAR_6->avail[VAR_6->ncached - VAR_8],
     VAR_8 * sizeof(void *));
 VAR_6->ncached = VAR_8;
 if ((int)VAR_6->ncached < VAR_6->low_water)
  VAR_6->low_water = VAR_6->ncached;
}
