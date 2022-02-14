
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int image_len; } ;
typedef TYPE_1__ esp_image_metadata_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

esp_err_t FUNC_1(uint32_t *VAR_1)
{
    esp_image_metadata_t VAR_2;
    esp_err_t VAR_3 = FUNC_0(&VAR_2);
    if (VAR_1 != ((void*)0)) {
        *VAR_1 = (VAR_3 == VAR_0) ? VAR_2.image_len : 0;
    }
    return VAR_3;
}
