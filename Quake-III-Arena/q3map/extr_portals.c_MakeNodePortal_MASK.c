
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int winding_t ;
typedef int vec3_t ;
struct TYPE_10__ {float dist; int normal; } ;
struct TYPE_8__ {int hint; int * winding; TYPE_2__* onnode; TYPE_3__ plane; TYPE_2__** nodes; struct TYPE_8__** next; } ;
typedef TYPE_1__ portal_t ;
struct TYPE_9__ {size_t planenum; int * children; int hint; TYPE_1__* portals; } ;
typedef TYPE_2__ node_t ;


 int FUNC_0 (TYPE_1__*,int ,int ) ;
 TYPE_1__* FUNC_1 () ;
 int * FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_3 (int **,int ,float,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;

void FUNC_9 (node_t *VAR_4)
{
 portal_t *VAR_5, *VAR_6;
 winding_t *VAR_7;
 vec3_t VAR_8;
 float VAR_9;
 int VAR_10;

 VAR_7 = FUNC_2 (VAR_4);


 for (VAR_6 = VAR_4->portals ; VAR_6 && VAR_7; VAR_6 = VAR_6->next[VAR_10])
 {
  if (VAR_6->nodes[0] == VAR_4)
  {
   VAR_10 = 0;
   FUNC_6 (VAR_6->plane.normal, VAR_8);
   VAR_9 = VAR_6->plane.dist;
  }
  else if (VAR_6->nodes[1] == VAR_4)
  {
   VAR_10 = 1;
   FUNC_7 (VAR_3, VAR_6->plane.normal, VAR_8);
   VAR_9 = -VAR_6->plane.dist;
  }
  else
   FUNC_4 ("CutNodePortals_r: mislinked portal");

  FUNC_3 (&VAR_7, VAR_8, VAR_9, VAR_0);
 }

 if (!VAR_7)
 {
  return;
 }

 if (FUNC_8 (VAR_7))
 {
  VAR_1++;
  FUNC_5 (VAR_7);
  return;
 }

 VAR_5 = FUNC_1 ();
 VAR_5->plane = VAR_2[VAR_4->planenum];
 VAR_5->onnode = VAR_4;
 VAR_5->winding = VAR_7;
 VAR_5->hint = VAR_4->hint;
 FUNC_0 (VAR_5, VAR_4->children[0], VAR_4->children[1]);
}
