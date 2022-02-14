
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int malloc_large_stats_t ;
typedef int malloc_huge_stats_t ;
typedef int malloc_bin_stats_t ;
struct TYPE_3__ {int lg_dirty_mult; int * hstats; int * lstats; int * bstats; scalar_t__ nrequests_small; scalar_t__ ndalloc_small; scalar_t__ nmalloc_small; scalar_t__ allocated_small; int astats; scalar_t__ pdirty; scalar_t__ pactive; int dss; } ;
typedef TYPE_1__ ctl_arena_stats_t ;
typedef int arena_stats_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int *,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_1(ctl_arena_stats_t *VAR_6)
{

 VAR_6->dss = VAR_3[VAR_2];
 VAR_6->lg_dirty_mult = -1;
 VAR_6->pactive = 0;
 VAR_6->pdirty = 0;
 if (VAR_1) {
  FUNC_0(&VAR_6->astats, 0, sizeof(arena_stats_t));
  VAR_6->allocated_small = 0;
  VAR_6->nmalloc_small = 0;
  VAR_6->ndalloc_small = 0;
  VAR_6->nrequests_small = 0;
  FUNC_0(VAR_6->bstats, 0, VAR_0 * sizeof(malloc_bin_stats_t));
  FUNC_0(VAR_6->lstats, 0, VAR_5 *
      sizeof(malloc_large_stats_t));
  FUNC_0(VAR_6->hstats, 0, VAR_4 *
      sizeof(malloc_huge_stats_t));
 }
}
