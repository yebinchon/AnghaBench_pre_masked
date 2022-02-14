
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int QueueHandle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 () ;
 int FUNC_2 (int ,int*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_4)
{
    QueueHandle_t VAR_5 = (QueueHandle_t)VAR_4;


    FUNC_4(VAR_3, VAR_1);
    VAR_2[FUNC_1()] = 1;
    while (!VAR_2[!FUNC_1()]) {
        ;
    }


    for (int VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        uint32_t VAR_7 = VAR_6;
        FUNC_2(VAR_5, &VAR_7, VAR_1);
    }

    FUNC_3(VAR_3);
    FUNC_0(((void*)0));
}
