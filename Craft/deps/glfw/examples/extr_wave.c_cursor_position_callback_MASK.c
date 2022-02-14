
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float GLfloat ;
typedef int GLFWwindow ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 float VAR_2 ;
 float VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;
 scalar_t__ FUNC_0 (int *,int ) ;

void FUNC_1(GLFWwindow* VAR_6, double VAR_7, double VAR_8)
{
    if (FUNC_0(VAR_6, VAR_0) == VAR_1)
    {
        VAR_2 += (GLfloat) (VAR_7 - VAR_4) / 10.f;
        VAR_3 += (GLfloat) (VAR_8 - VAR_5) / 10.f;

        VAR_4 = VAR_7;
        VAR_5 = VAR_8;
    }
}
