
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 char** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

qboolean FUNC_2( void ) {
 int VAR_4;
 qboolean VAR_5;

 VAR_5 = VAR_2;

 for (VAR_4=0 ; VAR_4 < VAR_1 ; VAR_4++) {
  if ( !VAR_0[VAR_4] || !VAR_0[VAR_4][0] ) {
   continue;
  }


  if ( FUNC_1( VAR_0[VAR_4], "set", 3 ) ) {
   VAR_5 = VAR_3;
  }
  FUNC_0( VAR_0[VAR_4] );
  FUNC_0( "\n" );
 }

 return VAR_5;
}
