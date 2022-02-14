
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int malloc_large_stats_t ;
typedef int malloc_huge_stats_t ;
struct TYPE_3__ {int * hstats; int * lstats; } ;
typedef TYPE_1__ ctl_arena_stats_t ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_1(ctl_arena_stats_t *VAR_2)
{

 if (VAR_2->lstats == ((void*)0)) {
  VAR_2->lstats = (malloc_large_stats_t *)FUNC_0(VAR_1 *
      sizeof(malloc_large_stats_t));
  if (VAR_2->lstats == ((void*)0))
   return (1);
 }

 if (VAR_2->hstats == ((void*)0)) {
  VAR_2->hstats = (malloc_huge_stats_t *)FUNC_0(VAR_0 *
      sizeof(malloc_huge_stats_t));
  if (VAR_2->hstats == ((void*)0))
   return (1);
 }

 return (0);
}
