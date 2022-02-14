
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int chip_id; } ;
typedef TYPE_1__ esp_flash_t ;
typedef int esp_err_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int const) ;
 int VAR_2 ;
 int VAR_3 ;

esp_err_t FUNC_2(esp_flash_t *VAR_4)
{
    if (FUNC_0(VAR_4->chip_id)) {
        const uint32_t VAR_5 = 1<<9;
        return FUNC_1(VAR_4,
                                            VAR_2,
                                            VAR_0,
                                            VAR_5);
    } else {
        const uint32_t VAR_6 = 1<<1;
        return FUNC_1(VAR_4,
                                            VAR_3,
                                            VAR_1,
                                            VAR_6);
    }
}
