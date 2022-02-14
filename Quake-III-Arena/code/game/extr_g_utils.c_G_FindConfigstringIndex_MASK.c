
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s ;
typedef int qboolean ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (int,char*) ;

int FUNC_4( char *VAR_1, int VAR_2, int VAR_3, qboolean VAR_4 ) {
 int VAR_5;
 char VAR_6[VAR_0];

 if ( !VAR_1 || !VAR_1[0] ) {
  return 0;
 }

 for ( VAR_5=1 ; VAR_5<VAR_3 ; VAR_5++ ) {
  FUNC_2( VAR_2 + VAR_5, VAR_6, sizeof( VAR_6 ) );
  if ( !VAR_6[0] ) {
   break;
  }
  if ( !FUNC_1( VAR_6, VAR_1 ) ) {
   return VAR_5;
  }
 }

 if ( !VAR_4 ) {
  return 0;
 }

 if ( VAR_5 == VAR_3 ) {
  FUNC_0( "G_FindConfigstringIndex: overflow" );
 }

 FUNC_3( VAR_2 + VAR_5, VAR_1 );

 return VAR_5;
}
