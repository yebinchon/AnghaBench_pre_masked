
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 double VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int,int) ;
 int * FUNC_5 (int,int,char*,int *,int *) ;
 int FUNC_6 (int *,int*,int*) ;
 double FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,int (*) (int *,int,int)) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int) ;
 int FUNC_18 () ;
 int FUNC_19 (int *) ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_23(int VAR_9, char* VAR_10[])
{
    GLFWwindow* VAR_11;
    double VAR_12, VAR_13, VAR_14;
    int VAR_15, VAR_16;

    FUNC_12(VAR_5);

    if (!FUNC_8())
        FUNC_3(VAR_0);

    VAR_11 = FUNC_5(640, 480, "Wave Simulation", ((void*)0), ((void*)0));
    if (!VAR_11)
    {
        FUNC_18();
        FUNC_3(VAR_0);
    }

    FUNC_14(VAR_11, VAR_6);
    FUNC_13(VAR_11, FUNC_4);
    FUNC_15(VAR_11, VAR_7);
    FUNC_11(VAR_11, VAR_3);
    FUNC_16(VAR_11, VAR_8);

    FUNC_9(VAR_11);
    FUNC_17(1);

    FUNC_6(VAR_11, &VAR_15, &VAR_16);
    FUNC_4(VAR_11, VAR_15, VAR_16);


    FUNC_21();


    FUNC_22();
    FUNC_20();
    FUNC_0();


    VAR_14 = FUNC_7() - 0.01;

    while (!FUNC_19(VAR_11))
    {
        VAR_12 = FUNC_7();
        VAR_13 = VAR_12 - VAR_14;
        VAR_14 = VAR_12;


        while (VAR_13 > 0.f)
        {

            VAR_4 = VAR_13 > VAR_2 ? VAR_2 : VAR_13;
            VAR_13 -= VAR_4;


            FUNC_1();
        }


        FUNC_0();


        FUNC_2(VAR_11);

        FUNC_10();
    }

    FUNC_3(VAR_1);
}
