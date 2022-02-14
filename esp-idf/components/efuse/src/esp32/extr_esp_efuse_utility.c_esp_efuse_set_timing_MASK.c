
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
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 () ;

__attribute__((used)) static esp_err_t FUNC_2(void)
{
    uint32_t VAR_6 = FUNC_1() / 1000000;
    uint32_t VAR_7, VAR_8, VAR_9;
    if (VAR_6 <= 26) {
        VAR_7 = 250;
        VAR_8 = 255;
        VAR_9 = 52;
    } else if (VAR_6 <= 40) {
        VAR_7 = 160;
        VAR_8 = 255;
        VAR_9 = 80;
    } else {
        VAR_7 = 80;
        VAR_8 = 128;
        VAR_9 = 100;
    }
    FUNC_0(VAR_4, VAR_3, VAR_9);
    FUNC_0(VAR_0, VAR_1, VAR_7);
    FUNC_0(VAR_0, VAR_2, VAR_8);
    return VAR_5;
}
