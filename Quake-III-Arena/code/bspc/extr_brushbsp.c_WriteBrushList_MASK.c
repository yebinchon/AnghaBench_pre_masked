
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int winding; } ;
typedef TYPE_1__ side_t ;
typedef scalar_t__ qboolean ;
struct TYPE_5__ {int numsides; TYPE_1__* sides; struct TYPE_5__* next; } ;
typedef TYPE_2__ bspbrush_t ;
typedef int FILE ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*) ;

void FUNC_4 (char *VAR_1, bspbrush_t *VAR_2, qboolean VAR_3)
{
 int VAR_4;
 side_t *VAR_5;
 FILE *VAR_6;

 FUNC_3 ("writing %s\n", VAR_1);
 VAR_6 = FUNC_1 (VAR_1);

 for ( ; VAR_2 ; VAR_2=VAR_2->next)
 {
  for (VAR_4=0 ; VAR_4<VAR_2->numsides ; VAR_4++)
  {
   VAR_5 = &VAR_2->sides[VAR_4];
   if (!VAR_5->winding)
    continue;
   if (VAR_3 && !(VAR_5->flags & VAR_0))
    continue;
   FUNC_0 (VAR_2->sides[VAR_4].winding, VAR_6);
  }
 }

 FUNC_2 (VAR_6);
}
