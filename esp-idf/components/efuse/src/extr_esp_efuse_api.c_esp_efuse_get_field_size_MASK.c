
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bit_count; } ;
typedef TYPE_1__ esp_efuse_desc_t ;



int FUNC_0(const esp_efuse_desc_t* VAR_0[])
{
    int VAR_1 = 0;
    if (VAR_0 != ((void*)0)) {
        int VAR_2 = 0;
        while (VAR_0[VAR_2] != ((void*)0)) {
            VAR_1 += VAR_0[VAR_2]->bit_count;
            ++VAR_2;
        }
    }
    return VAR_1;
}
