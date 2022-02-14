
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ esp_err_t ;
typedef int esp_efuse_block_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,unsigned int,int ) ;
 int VAR_1 ;

esp_err_t FUNC_6(esp_efuse_block_t VAR_2, unsigned int VAR_3, uint32_t VAR_4)
{
    FUNC_0();
    if (VAR_1 == 0) {
        FUNC_4();
    }
    esp_err_t VAR_5 = FUNC_5(VAR_2, VAR_3, VAR_4);
    if (VAR_1 == 0) {
        if (VAR_5 == VAR_0) {
            VAR_5 = FUNC_2();
            if (VAR_5 == VAR_0) {
                FUNC_3();
            }
        }
        FUNC_4();
    }
    FUNC_1();
    return VAR_5;
}
