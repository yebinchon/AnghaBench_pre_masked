
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLFWwindow ;
typedef int GLFWmonitor ;


 double VAR_0 ;
 int * FUNC_0 () ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,double) ;
 int FUNC_3 (char*,double) ;

__attribute__((used)) static void FUNC_4(GLFWwindow* VAR_1, float VAR_2)
{
    GLFWmonitor* VAR_3 = FUNC_1(VAR_1);
    if (!VAR_3)
        VAR_3 = FUNC_0();

    VAR_0 = VAR_2;
    FUNC_3("Gamma: %f\n", VAR_0);
    FUNC_2(VAR_3, VAR_0);
}
