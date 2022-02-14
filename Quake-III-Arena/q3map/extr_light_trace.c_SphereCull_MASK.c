
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vec3_t ;
typedef int qboolean ;


 float FUNC_0 (int ,int ) ;
 float FUNC_1 (int ) ;
 int FUNC_2 (int ,float,int ,int ) ;
 float FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_5( vec3_t VAR_2, vec3_t VAR_3, vec3_t VAR_4, float VAR_5 ) {
 vec3_t VAR_6;
 float VAR_7;
 vec3_t VAR_8;
 float VAR_9;
 vec3_t VAR_10;

 FUNC_4( VAR_3, VAR_2, VAR_8 );
 VAR_9 = FUNC_3( VAR_8, VAR_8 );

 FUNC_4( VAR_4, VAR_2, VAR_6 );
 VAR_7 = FUNC_0( VAR_6, VAR_8 );
 if ( VAR_7 > VAR_9 + VAR_5 ) {
  return VAR_1;
 }
 if ( VAR_7 < -VAR_5 ) {
  return VAR_1;
 }
 FUNC_2( VAR_2, VAR_7, VAR_8, VAR_10 );

 FUNC_4( VAR_10, VAR_4, VAR_6 );

 VAR_9 = FUNC_1( VAR_6 );

 if ( VAR_9 > VAR_5 ) {
  return VAR_1;
 }

 return VAR_0;
}
