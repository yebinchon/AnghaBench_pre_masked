
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_6 ;
 int FUNC_2 (int,char**,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (float,float,float,int ) ;
 int FUNC_5 (float,float,float) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (float,float,float,float,float,float) ;
 int FUNC_8 (float,float,float,float) ;
 int * FUNC_9 (int,int,char*,int *,int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_20 () ;

int FUNC_21(int VAR_9, char** VAR_10)
{
    int VAR_11;
    GLFWwindow* VAR_12;

    while ((VAR_11 = FUNC_2(VAR_9, VAR_10, "h")) != -1)
    {
        switch (VAR_11)
        {
            case 'h':
                FUNC_20();
                FUNC_0(VAR_1);

            default:
                FUNC_20();
                FUNC_0(VAR_0);
        }
    }

    FUNC_12(VAR_5);

    if (!FUNC_10())
    {
        FUNC_1(VAR_8, "Failed to initialize GLFW\n");
        FUNC_0(VAR_0);
    }

    VAR_12 = FUNC_9(200, 200, "Clipboard Test", ((void*)0), ((void*)0));
    if (!VAR_12)
    {
        FUNC_17();

        FUNC_1(VAR_8, "Failed to open GLFW window\n");
        FUNC_0(VAR_0);
    }

    FUNC_11(VAR_12);
    FUNC_16(1);

    FUNC_14(VAR_12, VAR_7);
    FUNC_13(VAR_12, VAR_6);

    FUNC_6(VAR_4);
    FUNC_7(-1.f, 1.f, -1.f, 1.f, -1.f, 1.f);
    FUNC_6(VAR_3);

    FUNC_4(0.5f, 0.5f, 0.5f, 0);

    while (!FUNC_19(VAR_12))
    {
        FUNC_3(VAR_2);

        FUNC_5(0.8f, 0.2f, 0.4f);
        FUNC_8(-0.5f, -0.5f, 0.5f, 0.5f);

        FUNC_15(VAR_12);
        FUNC_18();
    }

    FUNC_17();
    FUNC_0(VAR_1);
}
