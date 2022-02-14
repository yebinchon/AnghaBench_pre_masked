
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fileHandle_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char const*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (void const*,int,int ) ;
 int VAR_1 ;

void FUNC_5( const char *VAR_2, const void *VAR_3, int VAR_4 ) {
 fileHandle_t VAR_5;

 if ( !VAR_1 ) {
  FUNC_0( VAR_0, "Filesystem call made without initialization\n" );
 }

 if ( !VAR_2 || !VAR_3 ) {
  FUNC_0( VAR_0, "FS_WriteFile: NULL parameter" );
 }

 VAR_5 = FUNC_3( VAR_2 );
 if ( !VAR_5 ) {
  FUNC_1( "Failed to open %s\n", VAR_2 );
  return;
 }

 FUNC_4( VAR_3, VAR_4, VAR_5 );

 FUNC_2( VAR_5 );
}
