
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLfloat ;
typedef int GLFWwindow ;


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
 int FUNC_0 (int ) ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int VAR_11 ;
 int FUNC_2 (int,char**,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (float,float,float,float,float,float) ;
 int FUNC_10 (float,float,float,float) ;
 int FUNC_11 (int ,float,float,float) ;
 int FUNC_12 (float,float,float) ;
 int * FUNC_13 (int,int,char*,int *,int *) ;
 int FUNC_14 (char*) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (int *) ;
 int FUNC_18 () ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int *,int ) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int) ;
 int FUNC_25 () ;
 int FUNC_26 (int ,int) ;
 int FUNC_27 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_28 (char*,...) ;
 int FUNC_29 () ;

int FUNC_30(int VAR_14, char** VAR_15)
{
    int VAR_16, VAR_17 = 4;
    GLFWwindow* VAR_18;

    while ((VAR_16 = FUNC_2(VAR_14, VAR_15, "hs:")) != -1)
    {
        switch (VAR_16)
        {
            case 'h':
                FUNC_29();
                FUNC_1(VAR_1);
            case 's':
                VAR_17 = FUNC_0(VAR_13);
                break;
            default:
                FUNC_29();
                FUNC_1(VAR_0);
        }
    }

    FUNC_19(VAR_10);

    if (!FUNC_16())
        FUNC_1(VAR_0);

    if (VAR_17)
        FUNC_28("Requesting MSAA with %i samples\n", VAR_17);
    else
        FUNC_28("Requesting that MSAA not be available\n");

    FUNC_26(VAR_2, VAR_17);
    FUNC_26(VAR_3, VAR_5);

    VAR_18 = FUNC_13(800, 400, "Aliasing Detector", ((void*)0), ((void*)0));
    if (!VAR_18)
    {
        FUNC_25();
        FUNC_1(VAR_0);
    }

    FUNC_21(VAR_18, VAR_12);
    FUNC_20(VAR_18, VAR_11);

    FUNC_17(VAR_18);
    FUNC_24(1);

    if (!FUNC_14("GL_ARB_multisample"))
    {
        FUNC_28("GL_ARB_multisample extension not supported\n");

        FUNC_25();
        FUNC_1(VAR_0);
    }

    FUNC_22(VAR_18);

    FUNC_6(VAR_9, &VAR_17);
    if (VAR_17)
        FUNC_28("Context reports MSAA is available with %i samples\n", VAR_17);
    else
        FUNC_28("Context reports MSAA is unavailable\n");

    FUNC_8(VAR_8);
    FUNC_9(0.f, 1.f, 0.f, 0.5f, 0.f, 1.f);
    FUNC_8(VAR_6);

    while (!FUNC_27(VAR_18))
    {
        GLfloat VAR_19 = (GLfloat) FUNC_15();

        FUNC_3(VAR_4);

        FUNC_7();
        FUNC_12(0.25f, 0.25f, 0.f);
        FUNC_11(VAR_19, 0.f, 0.f, 1.f);

        FUNC_4(VAR_7);
        FUNC_10(-0.15f, -0.15f, 0.15f, 0.15f);

        FUNC_7();
        FUNC_12(0.75f, 0.25f, 0.f);
        FUNC_11(VAR_19, 0.f, 0.f, 1.f);

        FUNC_5(VAR_7);
        FUNC_10(-0.15f, -0.15f, 0.15f, 0.15f);

        FUNC_23(VAR_18);
        FUNC_18();
    }

    FUNC_25();
    FUNC_1(VAR_1);
}
