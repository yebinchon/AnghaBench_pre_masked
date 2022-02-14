
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (void*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

void FUNC_3( void *VAR_3 ) {
 if ( !VAR_2 ) {
  FUNC_0( VAR_0, "Filesystem call made without initialization\n" );
 }
 if ( !VAR_3 ) {
  FUNC_0( VAR_0, "FS_FreeFile( NULL )" );
 }
 VAR_1--;

 FUNC_2( VAR_3 );


 if ( VAR_1 == 0 ) {
  FUNC_1();
 }
}
