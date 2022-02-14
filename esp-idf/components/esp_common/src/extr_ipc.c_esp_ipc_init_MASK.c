
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int task_name ;
typedef scalar_t__ portBASE_TYPE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void** VAR_5 ;
 int * VAR_6 ;
 void** VAR_7 ;
 int * VAR_8 ;
 int FUNC_1 (char*,int,char*,int) ;
 void* FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,char*,int ,void*,scalar_t__,int *,int) ;

__attribute__((used)) static void FUNC_5(void)
{
    char VAR_9[15];
    for (int VAR_10 = 0; VAR_10 < VAR_4; ++VAR_10) {
        FUNC_1(VAR_9, sizeof(VAR_9), "ipc%d", VAR_10);
        VAR_6[VAR_10] = FUNC_3();
        VAR_5[VAR_10] = FUNC_2();
        VAR_7[VAR_10] = FUNC_2();
        portBASE_TYPE VAR_11 = FUNC_4(VAR_2, VAR_9, VAR_0, (void*) VAR_10,
                                                    VAR_1 - 1, &VAR_8[VAR_10], VAR_10);
        FUNC_0(VAR_11 == VAR_3);
    }
}
