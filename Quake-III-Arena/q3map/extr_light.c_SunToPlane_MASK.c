
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vec3_t ;
typedef int traceWork_t ;


 float FUNC_0 (int const,int ) ;
 int FUNC_1 (int const,int *,int ) ;
 int FUNC_2 (int ,float,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_3( const vec3_t VAR_2, const vec3_t VAR_3, vec3_t VAR_4, traceWork_t *VAR_5 ) {
 float VAR_6;
 vec3_t VAR_7;

 if ( !VAR_0 ) {
  return;
 }

 VAR_6 = FUNC_0( VAR_3, VAR_1 );
 if ( VAR_6 <= 0 ) {
  return;
 }

 FUNC_1( VAR_2, VAR_5, VAR_7 );
 FUNC_2( VAR_4, VAR_6, VAR_7, VAR_4 );
}
