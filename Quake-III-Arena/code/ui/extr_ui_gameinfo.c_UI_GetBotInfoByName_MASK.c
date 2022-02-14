
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char const*) ;
 char** VAR_0 ;
 int VAR_1 ;

char *FUNC_2( const char *VAR_2 ) {
 int VAR_3;
 char *VAR_4;

 for ( VAR_3 = 0; VAR_3 < VAR_1 ; VAR_3++ ) {
  VAR_4 = FUNC_0( VAR_0[VAR_3], "name" );
  if ( !FUNC_1( VAR_4, VAR_2 ) ) {
   return VAR_0[VAR_3];
  }
 }

 return ((void*)0);
}
