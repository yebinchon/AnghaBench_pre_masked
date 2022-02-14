
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__** nodes; struct TYPE_5__** next; } ;
typedef TYPE_1__ portal_t ;
struct TYPE_6__ {TYPE_1__* portals; } ;
typedef TYPE_2__ node_t ;


 int FUNC_0 (char*) ;

void FUNC_1 (portal_t *VAR_0, node_t *VAR_1)
{
 portal_t **VAR_2, *VAR_3;


 VAR_2 = &VAR_1->portals;
 while (1)
 {
  VAR_3 = *VAR_2;
  if (!VAR_3)
   FUNC_0 ("RemovePortalFromNode: portal not in leaf");

  if ( VAR_3 == VAR_0 )
   break;

  if (VAR_3->nodes[0] == VAR_1)
   VAR_2 = &VAR_3->next[0];
  else if (VAR_3->nodes[1] == VAR_1)
   VAR_2 = &VAR_3->next[1];
  else
   FUNC_0 ("RemovePortalFromNode: portal not bounding leaf");
 }

 if (VAR_0->nodes[0] == VAR_1)
 {
  *VAR_2 = VAR_0->next[0];
  VAR_0->nodes[0] = ((void*)0);
 }
 else if (VAR_0->nodes[1] == VAR_1)
 {
  *VAR_2 = VAR_0->next[1];
  VAR_0->nodes[1] = ((void*)0);
 }
}
