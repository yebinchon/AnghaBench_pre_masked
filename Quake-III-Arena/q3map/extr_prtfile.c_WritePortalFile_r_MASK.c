
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int numpoints; int ** p; } ;
typedef TYPE_2__ winding_t ;
typedef int vec_t ;
typedef int vec3_t ;
struct TYPE_8__ {int normal; } ;
struct TYPE_10__ {scalar_t__ hint; TYPE_4__** nodes; TYPE_1__ plane; TYPE_2__* winding; struct TYPE_10__** next; } ;
typedef TYPE_3__ portal_t ;
struct TYPE_11__ {scalar_t__ planenum; int cluster; TYPE_3__* portals; scalar_t__ opaque; struct TYPE_11__** children; } ;
typedef TYPE_4__ node_t ;


 double FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_1 ;

void FUNC_5 (node_t *VAR_2)
{
 int VAR_3, VAR_4;
 portal_t *VAR_5;
 winding_t *VAR_6;
 vec3_t VAR_7;
 vec_t VAR_8;


 if (VAR_2->planenum != VAR_0) {
  FUNC_5 (VAR_2->children[0]);
  FUNC_5 (VAR_2->children[1]);
  return;
 }

 if (VAR_2->opaque) {
  return;
 }

 for (VAR_5 = VAR_2->portals ; VAR_5 ; VAR_5=VAR_5->next[VAR_4])
 {
  VAR_6 = VAR_5->winding;
  VAR_4 = (VAR_5->nodes[1] == VAR_2);
  if (VAR_6 && VAR_5->nodes[0] == VAR_2)
  {
   if (!FUNC_1(VAR_5))
    continue;






   FUNC_2 (VAR_6, VAR_7, &VAR_8);
   if ( FUNC_0 (VAR_5->plane.normal, VAR_7) < 0.99 )
   {
    FUNC_4 (VAR_1,"%i %i %i ",VAR_6->numpoints, VAR_5->nodes[1]->cluster, VAR_5->nodes[0]->cluster);
   }
   else
    FUNC_4 (VAR_1,"%i %i %i ",VAR_6->numpoints, VAR_5->nodes[0]->cluster, VAR_5->nodes[1]->cluster);
   if (VAR_5->hint)
    FUNC_4 (VAR_1, "1 ");
   else
    FUNC_4 (VAR_1, "0 ");
   for (VAR_3=0 ; VAR_3<VAR_6->numpoints ; VAR_3++)
   {
    FUNC_4 (VAR_1,"(");
    FUNC_3 (VAR_1, VAR_6->p[VAR_3][0]);
    FUNC_3 (VAR_1, VAR_6->p[VAR_3][1]);
    FUNC_3 (VAR_1, VAR_6->p[VAR_3][2]);
    FUNC_4 (VAR_1,") ");
   }
   FUNC_4 (VAR_1,"\n");
  }
 }

}
