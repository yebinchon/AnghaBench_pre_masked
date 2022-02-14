
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__** nodes; struct TYPE_7__** next; } ;
typedef TYPE_1__ portal_t ;
struct TYPE_8__ {int occupied; TYPE_1__* portals; } ;
typedef TYPE_2__ node_t ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int) ;

void FUNC_3(node_t *VAR_0)
{
 node_t *VAR_1;
 portal_t *VAR_2;
 int VAR_3;

 VAR_0->occupied = 1;
 FUNC_0(VAR_0);

 for (VAR_1 = FUNC_1(); VAR_1; VAR_1 = FUNC_1())
 {
  for (VAR_2 = VAR_1->portals; VAR_2; VAR_2 = VAR_2->next[VAR_3])
  {
   VAR_3 = (VAR_2->nodes[1] == VAR_1);

   if (VAR_2->nodes[!VAR_3]->occupied) continue;

   if (!FUNC_2(VAR_2, VAR_3)) continue;

   VAR_2->nodes[!VAR_3]->occupied = VAR_1->occupied + 1;

   FUNC_0(VAR_2->nodes[!VAR_3]);
  }
 }
}
