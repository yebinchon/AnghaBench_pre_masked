
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int shaderInfo_t ;


 int VAR_0 ;
 int * FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,char const*,int,...) ;

shaderInfo_t *FUNC_2( int VAR_1, int VAR_2, const char *VAR_3 ) {
 char VAR_4[ VAR_0 ];

 if ( VAR_1 == VAR_2 ) {
  FUNC_1( VAR_4, "textures/%s_%d", VAR_3, VAR_2 );
 } else {
  FUNC_1( VAR_4, "textures/%s_%dto%d", VAR_3, VAR_1, VAR_2 );
 }

 return FUNC_0( VAR_4 );
}
