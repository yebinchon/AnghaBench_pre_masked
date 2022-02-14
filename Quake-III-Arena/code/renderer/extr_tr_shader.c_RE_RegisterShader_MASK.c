
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int index; scalar_t__ defaultShader; } ;
typedef TYPE_1__ shader_t ;
typedef int qhandle_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_1 (char const*,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (char const*) ;

qhandle_t FUNC_3( const char *VAR_3 ) {
 shader_t *VAR_4;

 if ( FUNC_2( VAR_3 ) >= VAR_1 ) {
  FUNC_0( "Shader name exceeds MAX_QPATH\n" );
  return 0;
 }

 VAR_4 = FUNC_1( VAR_3, VAR_0, VAR_2 );






 if ( VAR_4->defaultShader ) {
  return 0;
 }

 return VAR_4->index;
}
