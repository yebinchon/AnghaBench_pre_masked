
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int winding_t ;
struct TYPE_12__ {int * winding; TYPE_3__** nodes; struct TYPE_12__** next; } ;
typedef TYPE_1__ portal_t ;
struct TYPE_13__ {int dist; int normal; } ;
typedef TYPE_2__ plane_t ;
struct TYPE_14__ {size_t planenum; TYPE_1__* portals; struct TYPE_14__** children; } ;
typedef TYPE_3__ node_t ;


 int FUNC_0 (TYPE_1__*,TYPE_3__*,TYPE_3__*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (int *,int ,int ,int ,int **,int **) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

void FUNC_7 (node_t *VAR_3)
{
 portal_t *VAR_4, *VAR_5, *VAR_6;
 node_t *VAR_7, *VAR_8, *VAR_9;
 int VAR_10;
 plane_t *VAR_11;
 winding_t *VAR_12, *VAR_13;

 VAR_11 = &VAR_2[VAR_3->planenum];
 VAR_7 = VAR_3->children[0];
 VAR_8 = VAR_3->children[1];

 for (VAR_4 = VAR_3->portals ; VAR_4 ; VAR_4 = VAR_5)
 {
  if (VAR_4->nodes[0] == VAR_3) VAR_10 = 0;
  else if (VAR_4->nodes[1] == VAR_3) VAR_10 = 1;
  else FUNC_3 ("SplitNodePortals: mislinked portal");
  VAR_5 = VAR_4->next[VAR_10];

  VAR_9 = VAR_4->nodes[!VAR_10];
  FUNC_5 (VAR_4, VAR_4->nodes[0]);
  FUNC_5 (VAR_4, VAR_4->nodes[1]);




  FUNC_2 (VAR_4->winding, VAR_11->normal, VAR_11->dist,
    VAR_0, &VAR_12, &VAR_13);

  if (VAR_12 && FUNC_6(VAR_12))
  {
   FUNC_4 (VAR_12);
   VAR_12 = ((void*)0);
   VAR_1++;
  }

  if (VAR_13 && FUNC_6(VAR_13))
  {
   FUNC_4 (VAR_13);
   VAR_13 = ((void*)0);
   VAR_1++;
  }
  if (!VAR_12 && !VAR_13)
  {
   continue;
  }

  if (!VAR_12)
  {
   FUNC_4 (VAR_13);
   if (VAR_10 == 0) FUNC_0 (VAR_4, VAR_8, VAR_9);
   else FUNC_0 (VAR_4, VAR_9, VAR_8);
   continue;
  }
  if (!VAR_13)
  {
   FUNC_4 (VAR_12);
   if (VAR_10 == 0) FUNC_0 (VAR_4, VAR_7, VAR_9);
   else FUNC_0 (VAR_4, VAR_9, VAR_7);
   continue;
  }


  VAR_6 = FUNC_1();
  *VAR_6 = *VAR_4;
  VAR_6->winding = VAR_13;
  FUNC_4 (VAR_4->winding);
  VAR_4->winding = VAR_12;

  if (VAR_10 == 0)
  {
   FUNC_0 (VAR_4, VAR_7, VAR_9);
   FUNC_0 (VAR_6, VAR_8, VAR_9);
  }
  else
  {
   FUNC_0 (VAR_4, VAR_9, VAR_7);
   FUNC_0 (VAR_6, VAR_9, VAR_8);
  }
 }

 VAR_3->portals = ((void*)0);
}
