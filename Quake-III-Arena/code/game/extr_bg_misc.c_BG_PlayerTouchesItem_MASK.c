
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int* vec3_t ;
typedef int qboolean ;
struct TYPE_5__ {int* origin; } ;
typedef TYPE_1__ playerState_t ;
struct TYPE_6__ {int pos; } ;
typedef TYPE_2__ entityState_t ;


 int FUNC_0 (int *,int,int*) ;
 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_1( playerState_t *VAR_2, entityState_t *VAR_3, int VAR_4 ) {
 vec3_t VAR_5;

 FUNC_0( &VAR_3->pos, VAR_4, VAR_5 );


 if ( VAR_2->origin[0] - VAR_5[0] > 44
  || VAR_2->origin[0] - VAR_5[0] < -50
  || VAR_2->origin[1] - VAR_5[1] > 36
  || VAR_2->origin[1] - VAR_5[1] < -36
  || VAR_2->origin[2] - VAR_5[2] > 36
  || VAR_2->origin[2] - VAR_5[2] < -36 ) {
  return VAR_0;
 }

 return VAR_1;
}
