
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLenum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static const char * FUNC_2( GLenum VAR_10 )
{
 static char VAR_11[1024];

 if ( VAR_10 == VAR_7 )
  FUNC_1( VAR_11, "GL_TRIANGLES" );
 else if ( VAR_10 == VAR_9 )
  FUNC_1( VAR_11, "GL_TRIANGLE_STRIP" );
 else if ( VAR_10 == VAR_8 )
  FUNC_1( VAR_11, "GL_TRIANGLE_FAN" );
 else if ( VAR_10 == VAR_5 )
  FUNC_1( VAR_11, "GL_QUADS" );
 else if ( VAR_10 == VAR_6 )
  FUNC_1( VAR_11, "GL_QUAD_STRIP" );
 else if ( VAR_10 == VAR_4 )
  FUNC_1( VAR_11, "GL_POLYGON" );
 else if ( VAR_10 == VAR_3 )
  FUNC_1( VAR_11, "GL_POINTS" );
 else if ( VAR_10 == VAR_0 )
  FUNC_1( VAR_11, "GL_LINES" );
 else if ( VAR_10 == VAR_2 )
  FUNC_1( VAR_11, "GL_LINE_STRIP" );
 else if ( VAR_10 == VAR_1 )
  FUNC_1( VAR_11, "GL_LINE_LOOP" );
 else
  FUNC_0( VAR_11, "0x%x", VAR_10 );

 return VAR_11;
}
