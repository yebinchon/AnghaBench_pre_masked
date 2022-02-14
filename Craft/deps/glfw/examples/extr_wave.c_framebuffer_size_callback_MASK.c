
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mat4x4 ;
typedef int GLfloat ;
typedef int GLFWwindow ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (scalar_t__,float,float,float,float) ;

void FUNC_4(GLFWwindow* VAR_2, int VAR_3, int VAR_4)
{
    float VAR_5 = 1.f;
    mat4x4 VAR_6;

    if (VAR_4 > 0)
        VAR_5 = (float) VAR_3 / (float) VAR_4;


    FUNC_2(0, 0, VAR_3, VAR_4);


    FUNC_1(VAR_0);
    FUNC_3(VAR_6,
                       60.f * (float) VAR_1 / 180.f,
                       VAR_5,
                       1.f, 1024.f);
    FUNC_0((const GLfloat*) VAR_6);
}
