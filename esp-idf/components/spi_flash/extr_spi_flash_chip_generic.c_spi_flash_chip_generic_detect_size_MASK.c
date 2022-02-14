
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int chip_id; } ;
typedef TYPE_1__ esp_flash_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;

esp_err_t FUNC_0(esp_flash_t *VAR_2, uint32_t *VAR_3)
{
    uint32_t VAR_4 = VAR_2->chip_id;
    *VAR_3 = 0;



    if ((VAR_4 & 0x0F00) != 0) {
        return VAR_0;
    }

    *VAR_3 = 1 << (VAR_4 & 0xFF);
    return VAR_1;
}
