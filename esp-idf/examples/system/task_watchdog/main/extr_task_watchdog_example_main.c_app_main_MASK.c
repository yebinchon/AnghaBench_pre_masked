
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int VAR_4 ;
 int FUNC_7 (char*) ;
 int VAR_5 ;
 int ** VAR_6 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*,int,int *,int,int **,int) ;
 int * FUNC_11 (int) ;

void FUNC_12(void)
{
    FUNC_7("Initialize TWDT\n");

    FUNC_0(FUNC_4(VAR_3, 0), VAR_2);



    FUNC_1(FUNC_11(0));


    FUNC_1(FUNC_11(1));



    for(int VAR_7 = 0; VAR_7 < VAR_4; VAR_7++){
        FUNC_10(VAR_5, "reset task", 1024, ((void*)0), 10, &VAR_6[VAR_7], VAR_7);
    }

    FUNC_7("Delay for 10 seconds\n");
    FUNC_8(FUNC_6(10000));

    FUNC_7("Unsubscribing and deleting tasks\n");

    for(int VAR_8 = 0; VAR_8 < VAR_4; VAR_8++){
        FUNC_9(VAR_6[VAR_8]);
        FUNC_0(FUNC_3(VAR_6[VAR_8]), VAR_2);
        FUNC_0(FUNC_5(VAR_6[VAR_8]), VAR_1);


        FUNC_0(FUNC_3(FUNC_11(VAR_8)), VAR_2);
        FUNC_0(FUNC_5(FUNC_11(VAR_8)), VAR_1);
    }



    FUNC_0(FUNC_2(), VAR_2);
    FUNC_0(FUNC_5(((void*)0)), VAR_0);

    FUNC_7("Complete\n");
}
