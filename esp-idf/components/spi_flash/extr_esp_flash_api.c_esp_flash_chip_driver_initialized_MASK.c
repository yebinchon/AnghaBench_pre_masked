
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int chip_drv; } ;
typedef TYPE_1__ esp_flash_t ;



bool FUNC_0(const esp_flash_t *VAR_0)
{
    if (!VAR_0->chip_drv) return 0;
    return 1;
}
