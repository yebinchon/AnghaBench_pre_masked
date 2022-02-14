
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ texinfo; int flags; int winding; } ;
typedef TYPE_1__ side_t ;
typedef int node_t ;
struct TYPE_5__ {int numsides; TYPE_1__* sides; struct TYPE_5__* next; } ;
typedef TYPE_2__ bspbrush_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_3 (bspbrush_t *VAR_2, node_t *VAR_3)
{
 int VAR_4;
 side_t *VAR_5;

 FUNC_0 ();
 for ( ; VAR_2 ; VAR_2=VAR_2->next)
 {
  for (VAR_4=0 ; VAR_4<VAR_2->numsides ; VAR_4++)
  {
   VAR_5 = &VAR_2->sides[VAR_4];
   if (!VAR_5->winding)
    continue;
   if (VAR_5->texinfo == VAR_1)
    FUNC_2 (VAR_5->winding, 1);
   else if (!(VAR_5->flags & VAR_0))
    FUNC_2 (VAR_5->winding, 2);
   else
    FUNC_2 (VAR_5->winding, 0);
  }
 }
 FUNC_1 ();
}
