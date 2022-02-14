
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ mltr_allocs; int mltr_depth; int * mltr_addr; int mltr_hitcount; int mltr_collisions; } ;
typedef TYPE_1__ mleak_trace_stat_t ;
struct TYPE_7__ {int ml_isaddr64; int ml_cnt; TYPE_1__* ml_trace; } ;
struct TYPE_6__ {scalar_t__ allocs; int depth; int * addr; int hitcount; int collisions; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 () ;
 TYPE_3__* VAR_2 ;
 TYPE_2__** VAR_3 ;

__attribute__((used)) static void
FUNC_3()
{
 mleak_trace_stat_t *VAR_4;
 int VAR_5;

 FUNC_0(VAR_2 != ((void*)0));

 FUNC_0(VAR_2->ml_isaddr64);



 FUNC_0(VAR_2->ml_cnt == VAR_0);

 FUNC_2();

 VAR_4 = &VAR_2->ml_trace[0];
 FUNC_1(VAR_4, sizeof (*VAR_4) * VAR_0);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  int VAR_6;

  if (VAR_3[VAR_5] == ((void*)0) ||
      VAR_3[VAR_5]->allocs == 0)
   continue;

  VAR_4->mltr_collisions = VAR_3[VAR_5]->collisions;
  VAR_4->mltr_hitcount = VAR_3[VAR_5]->hitcount;
  VAR_4->mltr_allocs = VAR_3[VAR_5]->allocs;
  VAR_4->mltr_depth = VAR_3[VAR_5]->depth;

  FUNC_0(VAR_4->mltr_depth <= VAR_1);
  for (VAR_6 = 0; VAR_6 < VAR_4->mltr_depth; VAR_6++)
   VAR_4->mltr_addr[VAR_6] = VAR_3[VAR_5]->addr[VAR_6];

  VAR_4++;
 }
}
