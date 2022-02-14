
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thrd_t ;
typedef int GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (float,float,float,float) ;
 int FUNC_4 (int ,int ,int,int) ;
 int * FUNC_5 (int,int,char*,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int*,int*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 (int *) ;
 int VAR_5 ;
 float FUNC_17 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_18 (float) ;
 int FUNC_19 (unsigned int) ;
 int VAR_7 ;
 scalar_t__ FUNC_20 (int *,int ,int *) ;
 int FUNC_21 (int ,int*) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_22 (int *) ;

int FUNC_23(void)
{
    int VAR_10;
    thrd_t VAR_11;
    GLFWwindow* VAR_12;

    FUNC_19((unsigned int) FUNC_22(((void*)0)));

    FUNC_11(VAR_4);

    if (!FUNC_9())
        FUNC_0(VAR_0);

    VAR_12 = FUNC_5(640, 480, "Empty Event Test", ((void*)0), ((void*)0));
    if (!VAR_12)
    {
        FUNC_14();
        FUNC_0(VAR_0);
    }

    FUNC_10(VAR_12);
    FUNC_12(VAR_12, VAR_5);

    if (FUNC_20(&VAR_11, VAR_9, ((void*)0)) != VAR_8)
    {
        FUNC_1(VAR_7, "Failed to create secondary thread\n");

        FUNC_14();
        FUNC_0(VAR_0);
    }

    while (VAR_6)
    {
        int VAR_13, VAR_14;
        float VAR_15 = FUNC_17(), VAR_16 = FUNC_17(), VAR_17 = FUNC_17();
        float VAR_18 = (float) FUNC_18(VAR_15 * VAR_15 + VAR_16 * VAR_16 + VAR_17 * VAR_17);

        FUNC_7(VAR_12, &VAR_13, &VAR_14);

        FUNC_4(0, 0, VAR_13, VAR_14);
        FUNC_3(VAR_15 / VAR_18, VAR_16 / VAR_18, VAR_17 / VAR_18, 1.f);
        FUNC_2(VAR_2);
        FUNC_13(VAR_12);

        FUNC_15();

        if (FUNC_16(VAR_12))
            VAR_6 = VAR_3;
    }

    FUNC_8(VAR_12);
    FUNC_21(VAR_11, &VAR_10);
    FUNC_6(VAR_12);

    FUNC_14();
    FUNC_0(VAR_1);
}
