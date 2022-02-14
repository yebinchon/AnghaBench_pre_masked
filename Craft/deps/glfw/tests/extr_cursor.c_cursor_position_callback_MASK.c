
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLFWwindow ;


 double VAR_0 ;
 double VAR_1 ;
 double FUNC_0 () ;
 int FUNC_1 (char*,double,double,double,double,double) ;

__attribute__((used)) static void FUNC_2(GLFWwindow* VAR_2, double VAR_3, double VAR_4)
{
    FUNC_1("%0.3f: Cursor position: %f %f (%+f %+f)\n",
           FUNC_0(),
           VAR_3, VAR_4, VAR_3 - VAR_0, VAR_4 - VAR_1);

    VAR_0 = VAR_3;
    VAR_1 = VAR_4;
}
