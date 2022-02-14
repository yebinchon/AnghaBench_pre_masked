
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ planenum; struct TYPE_6__** children; TYPE_3__* brushlist; } ;
typedef TYPE_2__ node_t ;
struct TYPE_7__ {TYPE_1__* original; struct TYPE_7__* next; } ;
typedef TYPE_3__ bspbrush_t ;
struct TYPE_5__ {int brushnum; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;

void FUNC_1 (node_t *VAR_1, int VAR_2)
{
 bspbrush_t *VAR_3;

 if (VAR_1->planenum == VAR_0)
 {
  for (VAR_3=VAR_1->brushlist ; VAR_3 ; VAR_3=VAR_3->next)
   if (VAR_3->original->brushnum == VAR_2)
    FUNC_0 ("here\n");
  return;
 }
 FUNC_1(VAR_1->children[0], VAR_2);
 FUNC_1(VAR_1->children[1], VAR_2);
}
