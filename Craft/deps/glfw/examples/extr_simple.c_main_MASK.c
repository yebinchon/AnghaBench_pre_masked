
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (float,float,float) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (float,float,float,float,float,float) ;
 int FUNC_8 (float,float,float,float) ;
 int FUNC_9 (float,float,float) ;
 int FUNC_10 (int ,int ,int,int) ;
 int * FUNC_11 (int,int,char*,int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int*,int*) ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (int *) ;
 int FUNC_17 () ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int) ;
 int FUNC_22 () ;
 int FUNC_23 (int *) ;
 int VAR_7 ;

int FUNC_24(void)
{
    GLFWwindow* VAR_8;

    FUNC_18(VAR_6);

    if (!FUNC_15())
        FUNC_0(VAR_0);

    VAR_8 = FUNC_11(640, 480, "Simple example", ((void*)0), ((void*)0));
    if (!VAR_8)
    {
        FUNC_22();
        FUNC_0(VAR_0);
    }

    FUNC_16(VAR_8);
    FUNC_21(1);

    FUNC_19(VAR_8, VAR_7);

    while (!FUNC_23(VAR_8))
    {
        float VAR_9;
        int VAR_10, VAR_11;

        FUNC_13(VAR_8, &VAR_10, &VAR_11);
        VAR_9 = VAR_10 / (float) VAR_11;

        FUNC_10(0, 0, VAR_10, VAR_11);
        FUNC_2(VAR_2);

        FUNC_6(VAR_4);
        FUNC_5();
        FUNC_7(-VAR_9, VAR_9, -1.f, 1.f, 1.f, -1.f);
        FUNC_6(VAR_3);

        FUNC_5();
        FUNC_8((float) FUNC_14() * 50.f, 0.f, 0.f, 1.f);

        FUNC_1(VAR_5);
        FUNC_3(1.f, 0.f, 0.f);
        FUNC_9(-0.6f, -0.4f, 0.f);
        FUNC_3(0.f, 1.f, 0.f);
        FUNC_9(0.6f, -0.4f, 0.f);
        FUNC_3(0.f, 0.f, 1.f);
        FUNC_9(0.f, 0.6f, 0.f);
        FUNC_4();

        FUNC_20(VAR_8);
        FUNC_17();
    }

    FUNC_12(VAR_8);

    FUNC_22();
    FUNC_0(VAR_1);
}
