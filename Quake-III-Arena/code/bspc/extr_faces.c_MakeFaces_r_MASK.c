
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_7__** face; TYPE_1__* onnode; TYPE_3__** nodes; struct TYPE_10__** next; } ;
typedef TYPE_2__ portal_t ;
struct TYPE_11__ {scalar_t__ planenum; int contents; TYPE_2__* portals; struct TYPE_11__** children; } ;
typedef TYPE_3__ node_t ;
struct TYPE_12__ {struct TYPE_12__* next; } ;
struct TYPE_9__ {TYPE_7__* faces; } ;


 int VAR_0 ;
 TYPE_7__* FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_3 (node_t *VAR_5)
{
 portal_t *VAR_6;
 int VAR_7;


 if (VAR_5->planenum != VAR_1)
 {
  FUNC_3 (VAR_5->children[0]);
  FUNC_3 (VAR_5->children[1]);


  if (!VAR_3)
   FUNC_1 (VAR_5);
  if (!VAR_4)
   FUNC_2 (VAR_5);

  return;
 }


 if (VAR_5->contents & VAR_0)
  return;


 for (VAR_6=VAR_5->portals ; VAR_6 ; VAR_6 = VAR_6->next[VAR_7])
 {
  VAR_7 = (VAR_6->nodes[1] == VAR_5);

  VAR_6->face[VAR_7] = FUNC_0 (VAR_6, VAR_7);
  if (VAR_6->face[VAR_7])
  {
   VAR_2++;
   VAR_6->face[VAR_7]->next = VAR_6->onnode->faces;
   VAR_6->onnode->faces = VAR_6->face[VAR_7];
  }
 }
}
