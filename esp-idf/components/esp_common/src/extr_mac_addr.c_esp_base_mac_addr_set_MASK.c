
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int const*,int) ;

esp_err_t FUNC_2(const uint8_t *VAR_4)
{
    if (VAR_4 == ((void*)0)) {
        FUNC_0(VAR_2, "Base MAC address is NULL");
        return VAR_0;
    }
    if (VAR_4[0] & 0x01) {
        FUNC_0(VAR_2, "Base MAC must be a unicast MAC");
        return VAR_0;
    }

    FUNC_1(VAR_3, VAR_4, 6);

    return VAR_1;
}
