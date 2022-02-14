
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int winding; } ;
typedef TYPE_1__ side_t ;
struct TYPE_5__ {int numsides; TYPE_1__* sides; struct TYPE_5__* next; } ;
typedef TYPE_2__ bspbrush_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;

void FUNC_3 (bspbrush_t *VAR_0)
{
 int VAR_1;
 side_t *VAR_2;

 FUNC_0 ();
 for ( ; VAR_0 ; VAR_0=VAR_0->next)
 {
  for (VAR_1=0 ; VAR_1<VAR_0->numsides ; VAR_1++)
  {
   VAR_2 = &VAR_0->sides[VAR_1];
   if (!VAR_2->winding)
    continue;
   FUNC_2 (VAR_2->winding, 0);
  }
 }
 FUNC_1 ();
}
