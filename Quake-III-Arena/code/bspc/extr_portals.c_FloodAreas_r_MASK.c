
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__** nodes; struct TYPE_10__** next; } ;
typedef TYPE_2__ portal_t ;
struct TYPE_11__ {scalar_t__ contents; scalar_t__ occupied; TYPE_2__* portals; scalar_t__ area; TYPE_5__* brushlist; } ;
typedef TYPE_3__ node_t ;
struct TYPE_12__ {scalar_t__* portalareas; } ;
typedef TYPE_4__ entity_t ;
struct TYPE_13__ {TYPE_1__* original; } ;
typedef TYPE_5__ bspbrush_t ;
struct TYPE_9__ {size_t entitynum; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (TYPE_2__*,int) ;
 scalar_t__ VAR_1 ;
 TYPE_4__* VAR_2 ;

void FUNC_2 (node_t *VAR_3)
{
 portal_t *VAR_4;
 int VAR_5;
 bspbrush_t *VAR_6;
 entity_t *VAR_7;

 if (VAR_3->contents == VAR_0)
 {

  VAR_6 = VAR_3->brushlist;
  VAR_7 = &VAR_2[VAR_6->original->entitynum];



  if (VAR_7->portalareas[0] == VAR_1 || VAR_7->portalareas[1] == VAR_1)
   return;


  if (VAR_7->portalareas[1])
  {
   FUNC_0("WARNING: areaportal entity %i touches > 2 areas\n", VAR_6->original->entitynum);
   return;
  }
  if (VAR_7->portalareas[0])
   VAR_7->portalareas[1] = VAR_1;
  else
   VAR_7->portalareas[0] = VAR_1;

  return;
 }

 if (VAR_3->area)
  return;
 VAR_3->area = VAR_1;

 for (VAR_4=VAR_3->portals ; VAR_4 ; VAR_4 = VAR_4->next[VAR_5])
 {
  VAR_5 = (VAR_4->nodes[1] == VAR_3);




  if (!FUNC_1 (VAR_4, VAR_5))
   continue;

  FUNC_2 (VAR_4->nodes[!VAR_5]);
 }
}
