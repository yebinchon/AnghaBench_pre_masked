
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vec4_t ;
typedef int vec3_t ;
typedef int qboolean ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static qboolean FUNC_4( vec4_t VAR_2, vec3_t VAR_3, vec3_t VAR_4, vec3_t VAR_5 ) {
 vec3_t VAR_6, VAR_7;

 FUNC_3( VAR_4, VAR_3, VAR_6 );
 FUNC_3( VAR_5, VAR_3, VAR_7 );
 FUNC_0( VAR_7, VAR_6, VAR_2 );
 if ( FUNC_2( VAR_2 ) == 0 ) {
  return VAR_0;
 }

 VAR_2[3] = FUNC_1( VAR_3, VAR_2 );
 return VAR_1;
}
