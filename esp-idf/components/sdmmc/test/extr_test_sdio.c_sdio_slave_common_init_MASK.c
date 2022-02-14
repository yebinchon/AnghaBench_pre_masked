
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int sdmmc_card_t ;
typedef int esp_err_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,int ,int ,int*) ;
 int FUNC_4 (int *,int ,int ,int,int *) ;

__attribute__((used)) static void FUNC_5(sdmmc_card_t* VAR_6)
{
    uint8_t VAR_7;
    esp_err_t VAR_8 = FUNC_3(VAR_6, 0, VAR_1, &VAR_7);
    FUNC_1(VAR_8);
    FUNC_2("CAP: 0x%02x\n", VAR_7);

    uint8_t VAR_9;
    VAR_8 = FUNC_3(VAR_6, 0, VAR_4, &VAR_9);
    FUNC_1(VAR_8);
    FUNC_2("HS: 0x%02x\n", VAR_9);




    uint8_t VAR_10;
    VAR_8 = FUNC_3(VAR_6, 0, VAR_2, &VAR_10);
    FUNC_1(VAR_8);
    FUNC_2("IOE: 0x%02x\n", VAR_10);

    uint8_t VAR_11 = 0;
    VAR_8 = FUNC_3(VAR_6, 0, VAR_3, &VAR_11);
    FUNC_1(VAR_8);
    FUNC_2("IOR: 0x%02x\n", VAR_11);


    VAR_10 |= (FUNC_0(1));
    VAR_8 = FUNC_4(VAR_6, 0, VAR_2, VAR_10, ((void*)0));
    FUNC_1(VAR_8);

    VAR_8 = FUNC_3(VAR_6, 0, VAR_2, &VAR_10);
    FUNC_1(VAR_8);
    FUNC_2("IOE: 0x%02x\n", VAR_10);


    while ( (VAR_11 & (FUNC_0(1))) == 0 ) {
        VAR_8 = FUNC_3(VAR_6, 0, VAR_3, &VAR_11);
        FUNC_1(VAR_8);
        FUNC_2("IOR: 0x%02x\n", VAR_11);
    }


    uint8_t VAR_12;
    VAR_8 = FUNC_3(VAR_6, 0, VAR_5, &VAR_12);
    FUNC_1(VAR_8);
    FUNC_2("IE: 0x%02x\n", VAR_12);


    VAR_12 |= FUNC_0(0) | (FUNC_0(1));
    VAR_8 = FUNC_4(VAR_6, 0, VAR_5, VAR_12, ((void*)0));
    FUNC_1(VAR_8);

    VAR_8 = FUNC_3(VAR_6, 0, VAR_5, &VAR_12);
    FUNC_1(VAR_8);
    FUNC_2("IE: 0x%02x\n", VAR_12);
}
