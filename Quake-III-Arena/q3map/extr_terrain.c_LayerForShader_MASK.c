
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* shader; } ;
typedef TYPE_1__ shaderInfo_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;

int FUNC_2( shaderInfo_t *VAR_0 ) {
 int VAR_1;
 int VAR_2;

 VAR_2 = FUNC_1( VAR_0->shader );
 for( VAR_1 = VAR_2 - 1; VAR_1 >= 0; VAR_1-- ) {
  if ( VAR_0->shader[ VAR_1 ] == '_' ) {
   return FUNC_0( &VAR_0->shader[ VAR_1 + 1 ] );
   break;
  }
 }

 return 0;
}
