
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int) ;
 int * VAR_12 ;

__attribute__((used)) static int
FUNC_4(void)
{
    FUNC_3(&VAR_12[VAR_2], (FUNC_1(&VAR_12[VAR_2]) | VAR_9 | VAR_10) & ~VAR_11);
    FUNC_3(&VAR_12[VAR_1], FUNC_1(&VAR_12[VAR_1]) | VAR_9 | VAR_10);
    FUNC_3(&VAR_12[VAR_0] ,(FUNC_1(&VAR_12[VAR_0]) & ~VAR_6) | VAR_7);
    (void)FUNC_1(&VAR_12[VAR_5]);




    FUNC_3(&VAR_12[VAR_3], VAR_8);



    FUNC_2(4);
    (void)FUNC_1(&VAR_12[VAR_5]);
    FUNC_3(&VAR_12[VAR_4], VAR_8);


    FUNC_3(&VAR_12[VAR_1], FUNC_1(&VAR_12[VAR_1]) & ~VAR_9);


    FUNC_0((FUNC_1(&VAR_12[VAR_1]) & VAR_11) == 0, "CUDA response to sync");


    FUNC_0(FUNC_1(&VAR_12[VAR_4]) & VAR_8, "CUDA response to sync (2)");
    (void)FUNC_1(&VAR_12[VAR_5]);
    FUNC_3(&VAR_12[VAR_4], VAR_8);


    FUNC_3(&VAR_12[VAR_1], FUNC_1(&VAR_12[VAR_1]) | VAR_9);


    FUNC_0(FUNC_1(&VAR_12[VAR_1]) & VAR_11, "CUDA response to sync (3)");
    FUNC_0(FUNC_1(&VAR_12[VAR_4]) & VAR_8, "CUDA response to sync (4)");
    (void)FUNC_1(&VAR_12[VAR_5]);
    FUNC_3(&VAR_12[VAR_4], VAR_8);
    FUNC_3(&VAR_12[VAR_1], FUNC_1(&VAR_12[VAR_1]) | VAR_10);

    return 0;
}
