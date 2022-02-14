
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int winding; int visible; } ;
typedef TYPE_1__ side_t ;
typedef scalar_t__ qboolean ;
struct TYPE_5__ {int numsides; TYPE_1__* sides; struct TYPE_5__* next; } ;
typedef TYPE_2__ bspbrush_t ;
typedef int FILE ;


 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*) ;

void FUNC_4 (char *VAR_0, bspbrush_t *VAR_1, qboolean VAR_2)
{
 int VAR_3;
 side_t *VAR_4;
 FILE *VAR_5;

 FUNC_3 ("writing %s\n", VAR_0);
 VAR_5 = FUNC_1 (VAR_0);

 for ( ; VAR_1 ; VAR_1=VAR_1->next)
 {
  for (VAR_3=0 ; VAR_3<VAR_1->numsides ; VAR_3++)
  {
   VAR_4 = &VAR_1->sides[VAR_3];
   if (!VAR_4->winding)
    continue;
   if (VAR_2 && !VAR_4->visible)
    continue;
   FUNC_0 (VAR_1->sides[VAR_3].winding, VAR_5);
  }
 }

 FUNC_2 (VAR_5);
}
