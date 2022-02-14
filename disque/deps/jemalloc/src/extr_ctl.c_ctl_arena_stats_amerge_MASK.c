
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int allocated_small; TYPE_3__* bstats; int nrequests_small; int ndalloc_small; int nmalloc_small; int hstats; int lstats; int astats; int pdirty; int pactive; int lg_dirty_mult; int dss; } ;
typedef TYPE_1__ ctl_arena_stats_t ;
typedef int arena_t ;
struct TYPE_5__ {int curregs; scalar_t__ nrequests; scalar_t__ ndalloc; scalar_t__ nmalloc; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,int *,int *,int *,int *,int *,TYPE_3__*,int ,int ) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static void
FUNC_2(ctl_arena_stats_t *VAR_1, arena_t *VAR_2)
{
 unsigned VAR_3;

 FUNC_0(VAR_2, &VAR_1->dss, &VAR_1->lg_dirty_mult,
     &VAR_1->pactive, &VAR_1->pdirty, &VAR_1->astats, VAR_1->bstats,
     VAR_1->lstats, VAR_1->hstats);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_1->allocated_small += VAR_1->bstats[VAR_3].curregs *
      FUNC_1(VAR_3);
  VAR_1->nmalloc_small += VAR_1->bstats[VAR_3].nmalloc;
  VAR_1->ndalloc_small += VAR_1->bstats[VAR_3].ndalloc;
  VAR_1->nrequests_small += VAR_1->bstats[VAR_3].nrequests;
 }
}
