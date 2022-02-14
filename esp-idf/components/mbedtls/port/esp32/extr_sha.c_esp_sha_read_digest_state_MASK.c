
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ esp_sha_type ;
typedef int SemaphoreHandle_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int*,int,int) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int * FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (int *) ;

void FUNC_16(esp_sha_type VAR_3, void *VAR_4)
{
    uint32_t *VAR_5 = ((void*)0);
    uint32_t *VAR_6 = ((void*)0);
    uint32_t VAR_7 = FUNC_14(VAR_3)/4;

    {
        SemaphoreHandle_t *VAR_8 = FUNC_13(VAR_3);
        FUNC_8(FUNC_15(VAR_8) == 0 &&
               "SHA engine should be locked" );
    }



    FUNC_12();

    FUNC_10();

    FUNC_12();

    FUNC_3(FUNC_6(VAR_3), 1);
    while(FUNC_2(FUNC_5(VAR_3)) == 1) { }
    VAR_5 = (uint32_t *)VAR_4;
    VAR_6 = (uint32_t *)(VAR_2);
    if(VAR_3 == VAR_0 || VAR_3 == VAR_1) {

        FUNC_0();
        for(int VAR_9 = 0; VAR_9 < VAR_7; VAR_9 += 2) {
            VAR_5[VAR_9+1] = FUNC_4((uint32_t)&VAR_6[VAR_9]);
            VAR_5[VAR_9] = FUNC_4((uint32_t)&VAR_6[VAR_9+1]);
        }
        FUNC_1();
    } else {
        FUNC_9(VAR_5, (uint32_t)&VAR_6[0], VAR_7);
    }
    FUNC_11();




    for (int VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
        if (VAR_5[VAR_10] != 0) {
            return;
        }
    }
    FUNC_7();
}
