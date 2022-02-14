
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vec3_t ;
typedef int qboolean ;
struct TYPE_3__ {int normal; int dist; } ;
typedef TYPE_1__ plane_t ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int const,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int const,int const,int ) ;
 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_4( plane_t *VAR_2, const vec3_t VAR_3, const vec3_t VAR_4, const vec3_t VAR_5 ) {
 vec3_t VAR_6, VAR_7;

 FUNC_3( VAR_4, VAR_3, VAR_6 );
 FUNC_3( VAR_5, VAR_3, VAR_7 );
 FUNC_0( VAR_7, VAR_6, VAR_2->normal );
 if ( FUNC_2( VAR_2->normal, VAR_2->normal ) == 0 ) {
  return VAR_0;
 }

 VAR_2->dist = FUNC_1( VAR_3, VAR_2->normal );
 return VAR_1;
}
