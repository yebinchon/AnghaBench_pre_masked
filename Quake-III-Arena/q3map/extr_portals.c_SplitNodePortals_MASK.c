
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int * p; } ;
typedef TYPE_1__ winding_t ;
struct TYPE_19__ {TYPE_1__* winding; TYPE_4__** nodes; struct TYPE_19__** next; } ;
typedef TYPE_2__ portal_t ;
struct TYPE_20__ {int dist; int normal; } ;
typedef TYPE_3__ plane_t ;
struct TYPE_21__ {size_t planenum; TYPE_2__* portals; int tinyportals; int referencepoint; struct TYPE_21__** children; } ;
typedef TYPE_4__ node_t ;


 int FUNC_0 (TYPE_2__*,TYPE_4__*,TYPE_4__*) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ,TYPE_1__**,TYPE_1__**) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;

void FUNC_8 (node_t *VAR_3)
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
  if (VAR_4->nodes[0] == VAR_3)
   VAR_10 = 0;
  else if (VAR_4->nodes[1] == VAR_3)
   VAR_10 = 1;
  else
   FUNC_3 ("SplitNodePortals: mislinked portal");
  VAR_5 = VAR_4->next[VAR_10];

  VAR_9 = VAR_4->nodes[!VAR_10];
  FUNC_5 (VAR_4, VAR_4->nodes[0]);
  FUNC_5 (VAR_4, VAR_4->nodes[1]);




  FUNC_2 (VAR_4->winding, VAR_11->normal, VAR_11->dist,
   VAR_0, &VAR_12, &VAR_13);

  if (VAR_12 && FUNC_7(VAR_12))
  {
   if (!VAR_7->tinyportals)
    FUNC_6(VAR_12->p[0], VAR_7->referencepoint);
   VAR_7->tinyportals++;
   if (!VAR_9->tinyportals)
    FUNC_6(VAR_12->p[0], VAR_9->referencepoint);
   VAR_9->tinyportals++;

   FUNC_4 (VAR_12);
   VAR_12 = ((void*)0);
   VAR_1++;
  }

  if (VAR_13 && FUNC_7(VAR_13))
  {
   if (!VAR_8->tinyportals)
    FUNC_6(VAR_13->p[0], VAR_8->referencepoint);
   VAR_8->tinyportals++;
   if (!VAR_9->tinyportals)
    FUNC_6(VAR_13->p[0], VAR_9->referencepoint);
   VAR_9->tinyportals++;

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
   if (VAR_10 == 0)
    FUNC_0 (VAR_4, VAR_8, VAR_9);
   else
    FUNC_0 (VAR_4, VAR_9, VAR_8);
   continue;
  }
  if (!VAR_13)
  {
   FUNC_4 (VAR_12);
   if (VAR_10 == 0)
    FUNC_0 (VAR_4, VAR_7, VAR_9);
   else
    FUNC_0 (VAR_4, VAR_9, VAR_7);
   continue;
  }


  VAR_6 = FUNC_1 ();
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
