
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int esp_err_t ;
struct TYPE_3__ {scalar_t__ member_0; size_t member_1; size_t member_2; } ;
typedef TYPE_1__ esp_efuse_desc_t ;
typedef scalar_t__ esp_efuse_block_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__ const**,void*,size_t) ;

esp_err_t FUNC_1(esp_efuse_block_t VAR_4, void* VAR_5, size_t VAR_6, size_t VAR_7)
{
    esp_err_t VAR_8 = VAR_3;
    if (VAR_4 == VAR_0 || VAR_4 >= VAR_1 || VAR_5 == ((void*)0) || VAR_7 == 0) {
        VAR_8 = VAR_2;
    } else {
        const esp_efuse_desc_t VAR_9[] = {
            {VAR_4, VAR_6, VAR_7},
        };

        const esp_efuse_desc_t* VAR_10[] = {
            &VAR_9[0],
            ((void*)0)
        };
        VAR_8 = FUNC_0(VAR_10, VAR_5, VAR_7);
    }
    return VAR_8;
}
