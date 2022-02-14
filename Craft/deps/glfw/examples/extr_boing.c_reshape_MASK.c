
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float member_0; float member_1; float member_2; } ;
typedef TYPE_1__ vec3 ;
typedef scalar_t__ mat4x4 ;
typedef int GLsizei ;
typedef int GLfloat ;
typedef int GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 float VAR_3 ;
 scalar_t__ FUNC_0 (int ,float) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (scalar_t__,TYPE_1__,TYPE_1__,TYPE_1__) ;
 int FUNC_5 (scalar_t__,float,float,float,float) ;

void FUNC_6( GLFWwindow* VAR_4, int VAR_5, int VAR_6 )
{
   mat4x4 VAR_7, VAR_8;

   FUNC_3( 0, 0, (GLsizei)VAR_5, (GLsizei)VAR_6 );

   FUNC_2( VAR_1 );
   FUNC_5( VAR_7,
                       2.f * (float) FUNC_0( VAR_2, 200.f ),
                       (float)VAR_5 / (float)VAR_6,
                       1.f, VAR_3 );
   FUNC_1((const GLfloat*) VAR_7);

   FUNC_2( VAR_0 );
   {
      vec3 VAR_9 = { 0.f, 0.f, VAR_3 };
      vec3 VAR_10 = { 0.f, 0.f, 0.f };
      vec3 VAR_11 = { 0.f, -1.f, 0.f };
      FUNC_4( VAR_8, VAR_9, VAR_10, VAR_11 );
   }
   FUNC_1((const GLfloat*) VAR_8);
}
