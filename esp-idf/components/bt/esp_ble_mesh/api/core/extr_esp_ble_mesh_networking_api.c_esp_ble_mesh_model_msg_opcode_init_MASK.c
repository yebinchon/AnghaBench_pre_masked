
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

esp_err_t FUNC_3(uint8_t *VAR_2, uint32_t VAR_3)
{
    uint16_t VAR_4;

    if (VAR_2 == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_3 < 0x100) {

        VAR_2[0] = VAR_3 & 0xff;
        return VAR_1;
    }

    if (VAR_3 < 0x10000) {

        VAR_4 = FUNC_1 (VAR_3);
        FUNC_0(VAR_2, &VAR_4, 2);
        return VAR_1;
    }


    VAR_2[0] = (VAR_3 >> 16) & 0xff;
    VAR_4 = FUNC_2(VAR_3 & 0xffff);
    FUNC_0(&VAR_2[1], &VAR_4, 2);

    return VAR_1;
}
