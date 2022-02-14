
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ ndalloc_huge; scalar_t__ nmalloc_huge; scalar_t__ allocated_huge; scalar_t__ nrequests_large; scalar_t__ ndalloc_large; scalar_t__ nmalloc_large; scalar_t__ allocated_large; scalar_t__ metadata_allocated; scalar_t__ metadata_mapped; scalar_t__ purged; scalar_t__ nmadvise; scalar_t__ npurge; scalar_t__ mapped; } ;
struct TYPE_12__ {TYPE_1__* hstats; TYPE_4__* lstats; TYPE_3__* bstats; TYPE_2__ astats; scalar_t__ nrequests_small; scalar_t__ ndalloc_small; scalar_t__ nmalloc_small; scalar_t__ allocated_small; scalar_t__ pdirty; scalar_t__ pactive; } ;
typedef TYPE_5__ ctl_arena_stats_t ;
struct TYPE_11__ {scalar_t__ curruns; scalar_t__ nrequests; scalar_t__ ndalloc; scalar_t__ nmalloc; } ;
struct TYPE_10__ {scalar_t__ curruns; scalar_t__ reruns; scalar_t__ nruns; scalar_t__ nflushes; scalar_t__ nfills; scalar_t__ curregs; scalar_t__ nrequests; scalar_t__ ndalloc; scalar_t__ nmalloc; } ;
struct TYPE_8__ {scalar_t__ curhchunks; scalar_t__ ndalloc; scalar_t__ nmalloc; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static void
FUNC_0(ctl_arena_stats_t *VAR_4, ctl_arena_stats_t *VAR_5)
{
 unsigned VAR_6;

 VAR_4->pactive += VAR_5->pactive;
 VAR_4->pdirty += VAR_5->pdirty;

 VAR_4->astats.mapped += VAR_5->astats.mapped;
 VAR_4->astats.npurge += VAR_5->astats.npurge;
 VAR_4->astats.nmadvise += VAR_5->astats.nmadvise;
 VAR_4->astats.purged += VAR_5->astats.purged;

 VAR_4->astats.metadata_mapped += VAR_5->astats.metadata_mapped;
 VAR_4->astats.metadata_allocated += VAR_5->astats.metadata_allocated;

 VAR_4->allocated_small += VAR_5->allocated_small;
 VAR_4->nmalloc_small += VAR_5->nmalloc_small;
 VAR_4->ndalloc_small += VAR_5->ndalloc_small;
 VAR_4->nrequests_small += VAR_5->nrequests_small;

 VAR_4->astats.allocated_large += VAR_5->astats.allocated_large;
 VAR_4->astats.nmalloc_large += VAR_5->astats.nmalloc_large;
 VAR_4->astats.ndalloc_large += VAR_5->astats.ndalloc_large;
 VAR_4->astats.nrequests_large += VAR_5->astats.nrequests_large;

 VAR_4->astats.allocated_huge += VAR_5->astats.allocated_huge;
 VAR_4->astats.nmalloc_huge += VAR_5->astats.nmalloc_huge;
 VAR_4->astats.ndalloc_huge += VAR_5->astats.ndalloc_huge;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_4->bstats[VAR_6].nmalloc += VAR_5->bstats[VAR_6].nmalloc;
  VAR_4->bstats[VAR_6].ndalloc += VAR_5->bstats[VAR_6].ndalloc;
  VAR_4->bstats[VAR_6].nrequests += VAR_5->bstats[VAR_6].nrequests;
  VAR_4->bstats[VAR_6].curregs += VAR_5->bstats[VAR_6].curregs;
  if (VAR_1) {
   VAR_4->bstats[VAR_6].nfills += VAR_5->bstats[VAR_6].nfills;
   VAR_4->bstats[VAR_6].nflushes +=
       VAR_5->bstats[VAR_6].nflushes;
  }
  VAR_4->bstats[VAR_6].nruns += VAR_5->bstats[VAR_6].nruns;
  VAR_4->bstats[VAR_6].reruns += VAR_5->bstats[VAR_6].reruns;
  VAR_4->bstats[VAR_6].curruns += VAR_5->bstats[VAR_6].curruns;
 }

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_4->lstats[VAR_6].nmalloc += VAR_5->lstats[VAR_6].nmalloc;
  VAR_4->lstats[VAR_6].ndalloc += VAR_5->lstats[VAR_6].ndalloc;
  VAR_4->lstats[VAR_6].nrequests += VAR_5->lstats[VAR_6].nrequests;
  VAR_4->lstats[VAR_6].curruns += VAR_5->lstats[VAR_6].curruns;
 }

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_4->hstats[VAR_6].nmalloc += VAR_5->hstats[VAR_6].nmalloc;
  VAR_4->hstats[VAR_6].ndalloc += VAR_5->hstats[VAR_6].ndalloc;
  VAR_4->hstats[VAR_6].curhchunks += VAR_5->hstats[VAR_6].curhchunks;
 }
}
