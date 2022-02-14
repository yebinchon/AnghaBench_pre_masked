
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLFWwindow ;
typedef int GLFWmonitor ;


 int VAR_0 ;
 int * FUNC_0 (int,int,char*,int *,int *) ;
 char* FUNC_1 (int *) ;
 double FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int) ;
 int VAR_1 ;
 int FUNC_8 (char*,...) ;
 int VAR_2 ;

__attribute__((used)) static GLFWwindow* FUNC_9(int VAR_3, int VAR_4, GLFWmonitor* VAR_5)
{
    double VAR_6;
    GLFWwindow* VAR_7;

    VAR_6 = FUNC_2();

    VAR_7 = FUNC_0(VAR_3, VAR_4, "Window Re-opener", VAR_5, ((void*)0));
    if (!VAR_7)
        return ((void*)0);

    FUNC_3(VAR_7);
    FUNC_7(1);

    FUNC_4(VAR_7, VAR_0);
    FUNC_6(VAR_7, VAR_2);
    FUNC_5(VAR_7, VAR_1);

    if (VAR_5)
    {
        FUNC_8("Opening full screen window on monitor %s took %0.3f seconds\n",
               FUNC_1(VAR_5),
               FUNC_2() - VAR_6);
    }
    else
    {
        FUNC_8("Opening regular window took %0.3f seconds\n",
               FUNC_2() - VAR_6);
    }

    return VAR_7;
}
