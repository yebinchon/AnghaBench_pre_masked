
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__** nodes; struct TYPE_5__** next; } ;
typedef TYPE_1__ portal_t ;
struct TYPE_6__ {int occupied; TYPE_1__* portals; } ;
typedef TYPE_2__ node_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int VAR_0 ;

void FUNC_3 (node_t *VAR_1, int VAR_2)
{
 portal_t *VAR_3;
 int VAR_4;


 FUNC_1("\r%6d", ++VAR_0);

 if (VAR_1->occupied) FUNC_0("FloodPortals_r: node already occupied\n");
 if (!VAR_1)
 {
  FUNC_0("FloodPortals_r: NULL node\n");
 }
 VAR_1->occupied = VAR_2;

 for (VAR_3 = VAR_1->portals; VAR_3; VAR_3 = VAR_3->next[VAR_4])
 {
  VAR_4 = (VAR_3->nodes[1] == VAR_1);

  if (VAR_3->nodes[!VAR_4]->occupied) continue;

  if (!FUNC_2(VAR_3, VAR_4)) continue;

  FUNC_3(VAR_3->nodes[!VAR_4], VAR_2+1);
 }
 FUNC_1("\r%6d", --VAR_0);
}
