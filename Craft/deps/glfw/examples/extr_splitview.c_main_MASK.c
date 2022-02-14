
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int,int,char*,int *,int *) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int (*) (int *,int ,int )) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int (*) (int *)) ;
 int FUNC_15 (int) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (int ,int) ;
 scalar_t__ FUNC_19 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_20 (int *) ;

int FUNC_21(void)
{
    GLFWwindow* VAR_13;


    if (!FUNC_8())
    {
        FUNC_1(VAR_11, "Failed to initialize GLFW\n");
        FUNC_0(VAR_0);
    }

    FUNC_18(VAR_4, 4);


    VAR_13 = FUNC_4(500, 500, "Split view demo", ((void*)0), ((void*)0));
    if (!VAR_13)
    {
        FUNC_1(VAR_11, "Failed to open GLFW window\n");

        FUNC_16();
        FUNC_0(VAR_0);
    }


    FUNC_11(VAR_13, FUNC_2);
    FUNC_14(VAR_13, FUNC_20);
    FUNC_10(VAR_13, VAR_6);
    FUNC_13(VAR_13, VAR_10);
    FUNC_12(VAR_13, VAR_9);


    FUNC_9(VAR_13);
    FUNC_15(1);

    if (FUNC_5("GL_ARB_multisample") ||
        FUNC_7(VAR_13, VAR_2) >= 2 ||
        FUNC_7(VAR_13, VAR_3) >= 3)
    {
        FUNC_3(VAR_5);
    }

    FUNC_6(VAR_13, &VAR_12, &VAR_8);
    FUNC_2(VAR_13, VAR_12, VAR_8);


    for (;;)
    {

        if (VAR_7)
            FUNC_20(VAR_13);


        FUNC_17();


        if (FUNC_19(VAR_13))
            break;
    }


    FUNC_16();

    FUNC_0(VAR_1);
}
