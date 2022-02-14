
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int esp_flash_t ;


 int FUNC_0 (int ,char*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned int,int ) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *,scalar_t__,int) ;
 int FUNC_5 (int *,unsigned int*,scalar_t__,int) ;

void FUNC_6(esp_flash_t* VAR_2)
{
    FUNC_0(VAR_1, "Testing chip %p...", VAR_2);
    uint32_t VAR_3 = FUNC_3(VAR_2, 2);

    for (unsigned VAR_4 = 0; VAR_4 < 512; VAR_4++) {
        FUNC_1(VAR_0, FUNC_5(VAR_2, &VAR_4, VAR_3 + VAR_4, 1) );
    }

    for (unsigned VAR_5 = 0; VAR_5 < 512; VAR_5++) {
        uint8_t VAR_6;
        FUNC_1(VAR_0, FUNC_4(VAR_2, &VAR_6, VAR_3 + VAR_5, 1) );
        FUNC_2(VAR_5, VAR_6);
    }
}
