
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int esp_slave_context_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int*) ;

esp_err_t FUNC_3(esp_slave_context_t *VAR_2, uint8_t VAR_3, uint8_t *VAR_4)
{
    FUNC_0(VAR_1, "read_reg");

    if (VAR_3 >= 64) return VAR_0;
    esp_err_t VAR_5 = FUNC_2(VAR_2, FUNC_1(VAR_3), VAR_4);
    FUNC_0(VAR_1, "reg: %08X", *VAR_4);
    return VAR_5;
}
