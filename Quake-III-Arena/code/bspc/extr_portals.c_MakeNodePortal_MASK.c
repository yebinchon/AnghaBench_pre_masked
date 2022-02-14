
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
struct TYPE_8__ {size_t planenum; int * winding; TYPE_2__* onnode; TYPE_3__ plane; TYPE_2__** nodes; struct TYPE_8__** next; } ;
typedef TYPE_1__ portal_t ;
struct TYPE_9__ {size_t planenum; int * children; TYPE_1__* portals; } ;
typedef TYPE_2__ node_t ;


 int FUNC_0 (TYPE_1__*,int ,int ) ;
 TYPE_1__* FUNC_1 () ;
 int * FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int **,int ,float,double) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;

void FUNC_9 (node_t *VAR_3)
{
 portal_t *VAR_4, *VAR_5;
 winding_t *VAR_6;
 vec3_t VAR_7;
 float VAR_8;
 int VAR_9;

 VAR_6 = FUNC_2 (VAR_3);


 for (VAR_5 = VAR_3->portals; VAR_5 && VAR_6; VAR_5 = VAR_5->next[VAR_9])
 {
  if (VAR_5->nodes[0] == VAR_3)
  {
   VAR_9 = 0;
   FUNC_6 (VAR_5->plane.normal, VAR_7);
   VAR_8 = VAR_5->plane.dist;
  }
  else if (VAR_5->nodes[1] == VAR_3)
  {
   VAR_9 = 1;
   FUNC_7 (VAR_2, VAR_5->plane.normal, VAR_7);
   VAR_8 = -VAR_5->plane.dist;
  }
  else
  {
   FUNC_4 ("MakeNodePortal: mislinked portal");
  }
  FUNC_3 (&VAR_6, VAR_7, VAR_8, 0.1);
 }

 if (!VAR_6)
 {
  return;
 }

 if (FUNC_8 (VAR_6))
 {
  VAR_0++;
  FUNC_5(VAR_6);
  return;
 }
 VAR_4 = FUNC_1();
 VAR_4->plane = VAR_1[VAR_3->planenum];





 VAR_4->onnode = VAR_3;
 VAR_4->winding = VAR_6;
 FUNC_0 (VAR_4, VAR_3->children[0], VAR_3->children[1]);
}
