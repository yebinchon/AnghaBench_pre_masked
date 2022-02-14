
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLenum ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void FUNC_2( char *VAR_0, GLenum VAR_1 )
{
 switch ( VAR_1 )
 {
 case 132:
  FUNC_1( VAR_0, "GL_ONE" );
  break;
 case 128:
  FUNC_1( VAR_0, "GL_ZERO" );
  break;
 case 129:
  FUNC_1( VAR_0, "GL_SRC_ALPHA" );
  break;
 case 130:
  FUNC_1( VAR_0, "GL_ONE_MINUS_SRC_ALPHA" );
  break;
 case 133:
  FUNC_1( VAR_0, "GL_DST_COLOR" );
  break;
 case 131:
  FUNC_1( VAR_0, "GL_ONE_MINUS_DST_COLOR" );
  break;
 case 134:
  FUNC_1( VAR_0, "GL_DST_ALPHA" );
  break;
 default:
  FUNC_0( VAR_0, "0x%x", VAR_1 );
 }
}
