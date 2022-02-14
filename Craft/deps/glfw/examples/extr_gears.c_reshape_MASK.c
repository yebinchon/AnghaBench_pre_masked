
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLint ;
typedef float GLfloat ;
typedef int GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (float,float,float,float,float,float) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (double,double,double) ;
 int FUNC_4 (int ,int ,int ,int ) ;

void FUNC_5( GLFWwindow* VAR_2, int VAR_3, int VAR_4 )
{
  GLfloat VAR_5 = (GLfloat) VAR_4 / (GLfloat) VAR_3;
  GLfloat VAR_6, VAR_7, VAR_8;

  VAR_7 = 5.0f;
  VAR_8 = 30.0f;
  VAR_6 = VAR_7 * 0.5f;

  FUNC_4( 0, 0, (GLint) VAR_3, (GLint) VAR_4 );
  FUNC_2( VAR_1 );
  FUNC_1();
  FUNC_0( -VAR_6, VAR_6, -VAR_6*VAR_5, VAR_6*VAR_5, VAR_7, VAR_8 );
  FUNC_2( VAR_0 );
  FUNC_1();
  FUNC_3( 0.0, 0.0, -20.0 );
}
