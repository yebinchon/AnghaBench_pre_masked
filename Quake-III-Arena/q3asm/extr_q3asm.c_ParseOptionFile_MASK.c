
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,void**) ;
 int VAR_0 ;
 int * VAR_1 ;
 char const* VAR_2 ;
 int FUNC_3 (char const*) ;
 size_t VAR_3 ;
 char* VAR_4 ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,char const*) ;

void FUNC_6( const char *VAR_5 ) {
 char VAR_6[VAR_0];
 char *VAR_7, *VAR_8;

 FUNC_5( VAR_6, VAR_5 );
 FUNC_1( VAR_6, ".q3asm" );
 FUNC_2( VAR_6, (void **)&VAR_7 );
 if ( !VAR_7 ) {
  return;
 }

 VAR_8 = VAR_7;

 while( ( VAR_8 = FUNC_0( VAR_8 ) ) != 0 ) {
  if ( !FUNC_4( VAR_2, "-o" ) ) {

   VAR_8 = FUNC_0( VAR_8 );
   if ( VAR_8 ) {
    FUNC_5( VAR_4, VAR_2 );
   }
   continue;
  }

  VAR_1[ VAR_3 ] = FUNC_3( VAR_2 );
  VAR_3++;
 }
}
