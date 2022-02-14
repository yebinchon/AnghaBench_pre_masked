
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_3__ {int type; float dist; float* normal; int* children; } ;
typedef TYPE_1__ tnode_t ;
typedef int qboolean ;





 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

qboolean FUNC_0( vec3_t VAR_3, int VAR_4 ) {
 tnode_t *VAR_5;
 float VAR_6;

 while ( !(VAR_4 & (1<<31) ) ) {
  VAR_5 = &VAR_2[VAR_4];
  switch (VAR_5->type) {
  case 130:
   VAR_6 = VAR_3[0] - VAR_5->dist;
   break;
  case 129:
   VAR_6 = VAR_3[1] - VAR_5->dist;
   break;
  case 128:
   VAR_6 = VAR_3[2] - VAR_5->dist;
   break;
  default:
   VAR_6 = (VAR_3[0]*VAR_5->normal[0] + VAR_3[1]*VAR_5->normal[1] + VAR_3[2]*VAR_5->normal[2]) - VAR_5->dist;
   break;
  }

  if ( VAR_6 == 0 ) {

   return (qboolean) ( FUNC_0( VAR_3, VAR_5->children[0] )
    | FUNC_0( VAR_3, VAR_5->children[1] ) );
  }

  if ( VAR_6 > 0 ) {
   VAR_4 = VAR_5->children[0];
  } else {
   VAR_4 = VAR_5->children[1];
  }
 }

 if ( VAR_4 & ( 1 << 30 ) ) {
  return VAR_1;
 }
 return VAR_0;
}
