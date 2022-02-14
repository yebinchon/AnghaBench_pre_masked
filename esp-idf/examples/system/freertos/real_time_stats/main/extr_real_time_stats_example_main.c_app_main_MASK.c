
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char** VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int,int *,int ,int *,int ) ;

void FUNC_7(void)
{

    FUNC_2(FUNC_0(100));


    VAR_6 = FUNC_4(VAR_0, 0);
    VAR_7 = FUNC_3();


    for (int VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
        FUNC_1(VAR_8[VAR_10], VAR_3, "spin%d", VAR_10);
        FUNC_6(VAR_4, VAR_8[VAR_10], 1024, ((void*)0), VAR_1, ((void*)0), VAR_9);
    }


    FUNC_6(VAR_5, "stats", 4096, ((void*)0), VAR_2, ((void*)0), VAR_9);
    FUNC_5(VAR_7);
}
