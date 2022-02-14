
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* side; int sidefound; int onnode; TYPE_3__** nodes; struct TYPE_7__** next; } ;
typedef TYPE_2__ portal_t ;
struct TYPE_8__ {scalar_t__ planenum; TYPE_2__* portals; int contents; struct TYPE_8__** children; } ;
typedef TYPE_3__ node_t ;
struct TYPE_6__ {int flags; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

void FUNC_1 (node_t *VAR_2)
{
 portal_t *VAR_3;
 int VAR_4;

 if (VAR_2->planenum != VAR_0)
 {
  FUNC_1 (VAR_2->children[0]);
  FUNC_1 (VAR_2->children[1]);
  return;
 }


 if (!VAR_2->contents) return;


 for (VAR_3=VAR_2->portals ; VAR_3 ; VAR_3 = VAR_3->next[!VAR_4])
 {
  VAR_4 = (VAR_3->nodes[0] == VAR_2);
  if (!VAR_3->onnode)
   continue;
  if (!VAR_3->sidefound)
   FUNC_0 (VAR_3);
  if (VAR_3->side)
   VAR_3->side->flags |= VAR_1;
 }
}
