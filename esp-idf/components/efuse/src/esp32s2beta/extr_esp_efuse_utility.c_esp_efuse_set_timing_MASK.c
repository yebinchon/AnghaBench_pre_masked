
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_14 ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_15 ;
 int FUNC_2 () ;

__attribute__((used)) static esp_err_t FUNC_3(void)
{
    uint32_t VAR_16 = FUNC_2();

    uint32_t VAR_17, VAR_18;

    uint32_t VAR_19 = 1, VAR_20 = 1, VAR_21, VAR_22;
    uint32_t VAR_23 = 1, VAR_24 = 1, VAR_25;
    if (VAR_16 == 20000000 || VAR_16 == 5000000 || VAR_16 == 10000000) {
        VAR_17 = 0x28;
        VAR_18 = 0x2880;

        VAR_21 = 0xc8;
        VAR_22 = 1;
        VAR_25 = 1;
    } else if (VAR_16 == 40000000) {
        VAR_17 = 0x50;
        VAR_18 = 0x5100;

        VAR_21 = 0x190;
        VAR_22 = 2;
        VAR_25 = 2;
    } else if (VAR_16 == 80000000) {
        VAR_17 = 0xa0;
        VAR_18 = 0xa200;

        VAR_21 = 0x320;
        VAR_22 = 3;
        VAR_25 = 3;
    } else {
        FUNC_0(VAR_15, "Efuse does not support this %d Hz APB clock", VAR_16);
        return VAR_13;
    }
    FUNC_1(VAR_1, VAR_0, VAR_17);
    FUNC_1(VAR_11, VAR_6, VAR_21);
    FUNC_1(VAR_11, VAR_7, VAR_22);
    FUNC_1(VAR_11, VAR_4, VAR_20);
    FUNC_1(VAR_12, VAR_2, VAR_18);
    FUNC_1(VAR_12, VAR_9, VAR_19);

    FUNC_1(VAR_3, VAR_10, VAR_23);
    FUNC_1(VAR_3, VAR_8, VAR_25);
    FUNC_1(VAR_3, VAR_5, VAR_24);
    return VAR_14;
}
