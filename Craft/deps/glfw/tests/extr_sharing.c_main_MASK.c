
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLuint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (float,float,float) ;
 int FUNC_4 (int *,int*,int*) ;
 int FUNC_5 (int *,int*,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (char*,int *,int,int) ;
 int ** VAR_4 ;

int FUNC_14(int VAR_5, char** VAR_6)
{
    int VAR_7, VAR_8, VAR_9;
    GLuint VAR_10;

    FUNC_8(VAR_3);

    if (!FUNC_6())
        FUNC_2(VAR_0);

    VAR_4[0] = FUNC_13("First", ((void*)0), VAR_2, VAR_2);
    if (!VAR_4[0])
    {
        FUNC_10();
        FUNC_2(VAR_0);
    }




    VAR_10 = FUNC_0();

    FUNC_4(VAR_4[0], &VAR_7, &VAR_8);
    FUNC_5(VAR_4[0], &VAR_9, ((void*)0));


    VAR_4[1] = FUNC_13("Second", VAR_4[0], VAR_7 + VAR_9 + VAR_2, VAR_8);
    if (!VAR_4[1])
    {
        FUNC_10();
        FUNC_2(VAR_0);
    }


    FUNC_7(VAR_4[0]);
    FUNC_3(0.6f, 0.f, 0.6f);
    FUNC_7(VAR_4[1]);
    FUNC_3(0.6f, 0.6f, 0.f);

    FUNC_7(VAR_4[0]);

    while (!FUNC_12(VAR_4[0]) &&
           !FUNC_12(VAR_4[1]))
    {
        FUNC_7(VAR_4[0]);
        FUNC_1(VAR_10);

        FUNC_7(VAR_4[1]);
        FUNC_1(VAR_10);

        FUNC_9(VAR_4[0]);
        FUNC_9(VAR_4[1]);

        FUNC_11();
    }

    FUNC_10();
    FUNC_2(VAR_1);
}
