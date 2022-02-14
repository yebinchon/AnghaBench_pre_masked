
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (int ,char const*) ;
 char const** VAR_0 ;
 int VAR_1 ;

const char *FUNC_2( const char *VAR_2 ) {
 int VAR_3;

 for( VAR_3 = 0; VAR_3 < VAR_1; VAR_3++ ) {
  if( FUNC_1( FUNC_0( VAR_0[VAR_3], "map" ), VAR_2 ) == 0 ) {
   return VAR_0[VAR_3];
  }
 }

 return ((void*)0);
}
