
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int sdmmc_card_t ;
typedef int esp_err_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int const,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int,size_t const,int*) ;
 int FUNC_4 (int *,int,size_t const,int const,int*) ;

__attribute__((used)) static void FUNC_5(sdmmc_card_t* VAR_2)
{
    esp_err_t VAR_3;
    FUNC_2("Write bytes to slave's W0_REG using CMD52\n");
    const size_t VAR_4 = VAR_1 - VAR_0;

    const uint8_t VAR_5 = 0xa5;
    const uint8_t VAR_6 = 0xb6;

    uint8_t VAR_7;
    uint8_t VAR_8;
    uint8_t VAR_9 = 0;
    VAR_3 = FUNC_4(VAR_2, 1, VAR_4, VAR_5, &VAR_7);
    FUNC_1(VAR_3);
    FUNC_0(VAR_5, VAR_7);
    VAR_3 = FUNC_4(VAR_2, 1, VAR_4 + 1, VAR_6, &VAR_8);
    FUNC_1(VAR_3);
    FUNC_0(VAR_6, VAR_8);

    FUNC_2("Read back bytes using CMD52\n");
    FUNC_1(FUNC_3(VAR_2, 1, VAR_4, &VAR_9));
    FUNC_0(VAR_5, VAR_9);

    FUNC_1(FUNC_3(VAR_2, 1, VAR_4 + 1, &VAR_9));
    FUNC_0(VAR_6, VAR_9);
}
