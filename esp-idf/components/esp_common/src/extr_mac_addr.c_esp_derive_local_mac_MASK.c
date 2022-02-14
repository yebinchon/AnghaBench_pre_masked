
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
 scalar_t__ FUNC_1 (int*,int const*,int) ;
 int FUNC_2 (int*,int const*,int) ;

esp_err_t FUNC_3(uint8_t* VAR_3, const uint8_t* VAR_4)
{
    uint8_t VAR_5;

    if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0)) {
        FUNC_0(VAR_2, "mac address param is NULL");
        return VAR_0;
    }

    FUNC_2(VAR_3, VAR_4, 6);
    for (VAR_5 = 0; VAR_5 < 64; VAR_5++) {
        VAR_3[0] = VAR_4[0] | 0x02;
        VAR_3[0] ^= VAR_5 << 2;

        if (FUNC_1(VAR_3, VAR_4, 6)) {
            break;
        }
    }

    return VAR_1;
}
