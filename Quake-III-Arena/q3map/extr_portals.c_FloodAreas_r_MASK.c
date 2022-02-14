
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__** nodes; struct TYPE_8__** next; } ;
typedef TYPE_2__ portal_t ;
struct TYPE_9__ {int area; int cluster; TYPE_2__* portals; TYPE_1__* brushlist; scalar_t__ areaportal; } ;
typedef TYPE_3__ node_t ;
struct TYPE_10__ {void** portalareas; int brushnum; } ;
typedef TYPE_4__ bspbrush_t ;
struct TYPE_7__ {TYPE_4__* original; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,int ) ;
 void* VAR_0 ;

void FUNC_2 (node_t *VAR_1)
{
 portal_t *VAR_2;
 int VAR_3;
 bspbrush_t *VAR_4;

 if ( VAR_1->areaportal ) {

  if ( VAR_1->area == -1 ) {
   VAR_1->area = VAR_0;
  }

  VAR_4 = VAR_1->brushlist->original;



  if (VAR_4->portalareas[0] == VAR_0 || VAR_4->portalareas[1] == VAR_0)
   return;


  if (VAR_4->portalareas[1] != -1)
  {
   FUNC_1 ("WARNING: areaportal brush %i touches > 2 areas\n", VAR_4->brushnum );
   return;
  }
  if (VAR_4->portalareas[0] != -1) {
   VAR_4->portalareas[1] = VAR_0;
  } else {
   VAR_4->portalareas[0] = VAR_0;
  }

  return;
 }

 if (VAR_1->area != -1) {
  return;
 }
 if ( VAR_1->cluster == -1 ) {
  return;
 }

 VAR_1->area = VAR_0;

 for (VAR_2=VAR_1->portals ; VAR_2 ; VAR_2 = VAR_2->next[VAR_3])
 {
  VAR_3 = (VAR_2->nodes[1] == VAR_1);

  if ( !FUNC_0(VAR_2) )
   continue;

  FUNC_2 (VAR_2->nodes[!VAR_3]);
 }
}
