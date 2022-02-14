
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vec_t ;
typedef int vec3_t ;
typedef int qboolean ;
struct TYPE_6__ {scalar_t__ dist; int normal; } ;
typedef TYPE_1__ plane_t ;
struct TYPE_7__ {size_t planenum; int * occupant; scalar_t__ opaque; struct TYPE_7__** children; } ;
typedef TYPE_2__ node_t ;
typedef int entity_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,int) ;
 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

qboolean FUNC_2 (node_t *VAR_4, vec3_t VAR_5, entity_t *VAR_6)
{
 node_t *VAR_7;
 vec_t VAR_8;
 plane_t *VAR_9;


 VAR_7 = VAR_4;
 while (VAR_7->planenum != VAR_0)
 {
  VAR_9 = &VAR_1[VAR_7->planenum];
  VAR_8 = FUNC_0 (VAR_5, VAR_9->normal) - VAR_9->dist;
  if (VAR_8 >= 0)
   VAR_7 = VAR_7->children[0];
  else
   VAR_7 = VAR_7->children[1];
 }

 if ( VAR_7->opaque )
  return VAR_2;
 VAR_7->occupant = VAR_6;

 FUNC_1 (VAR_7, 1);

 return VAR_3;
}
