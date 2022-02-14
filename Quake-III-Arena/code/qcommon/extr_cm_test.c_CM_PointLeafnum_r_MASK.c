
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_4__ {int type; float dist; int normal; } ;
typedef TYPE_1__ cplane_t ;
struct TYPE_5__ {int* children; TYPE_1__* plane; } ;
typedef TYPE_2__ cNode_t ;
struct TYPE_6__ {TYPE_2__* nodes; } ;


 float FUNC_0 (int ,float* const) ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;

int FUNC_1( const vec3_t VAR_2, int VAR_3 ) {
 float VAR_4;
 cNode_t *VAR_5;
 cplane_t *VAR_6;

 while (VAR_3 >= 0)
 {
  VAR_5 = VAR_1.nodes + VAR_3;
  VAR_6 = VAR_5->plane;

  if (VAR_6->type < 3)
   VAR_4 = VAR_2[VAR_6->type] - VAR_6->dist;
  else
   VAR_4 = FUNC_0 (VAR_6->normal, VAR_2) - VAR_6->dist;
  if (VAR_4 < 0)
   VAR_3 = VAR_5->children[1];
  else
   VAR_3 = VAR_5->children[0];
 }

 VAR_0++;

 return -1 - VAR_3;
}
