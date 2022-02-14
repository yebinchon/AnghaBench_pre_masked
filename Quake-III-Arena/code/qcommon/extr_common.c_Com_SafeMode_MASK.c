
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

qboolean FUNC_3( void ) {
 int VAR_4;

 for ( VAR_4 = 0 ; VAR_4 < VAR_1 ; VAR_4++ ) {
  FUNC_1( VAR_0[VAR_4] );
  if ( !FUNC_2( FUNC_0(0), "safe" )
   || !FUNC_2( FUNC_0(0), "cvar_restart" ) ) {
   VAR_0[VAR_4][0] = 0;
   return VAR_3;
  }
 }
 return VAR_2;
}
