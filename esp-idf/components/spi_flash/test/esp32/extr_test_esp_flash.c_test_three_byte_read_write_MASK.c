
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int esp_flash_t ;


 int FUNC_0 (int ,char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int*,int,int) ;
 int FUNC_5 (int *,int*,int,int) ;
 int FUNC_6 (char*,int) ;

void FUNC_7(esp_flash_t *VAR_2)
{
    FUNC_0(VAR_1, "Testing chip %p...", VAR_2);
    uint32_t VAR_3 = FUNC_3(VAR_2, 2);
    FUNC_6("offs:%X\n", VAR_3);

    for (uint32_t VAR_4 = 0; VAR_4 < 2000; VAR_4++) {
        FUNC_1(VAR_0, FUNC_5(VAR_2, &VAR_4, VAR_3 + 3 * VAR_4, 3) );
    }

    for (uint32_t VAR_5 = 0; VAR_5 < 2000; VAR_5++) {
        uint32_t VAR_6;
        FUNC_1(VAR_0, FUNC_4(VAR_2, &VAR_6, VAR_3 + 3 * VAR_5, 3) );
        FUNC_2(VAR_5 & 0xFFFFFF, VAR_6 & 0xFFFFFF);
    }
}
