
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; } ;
typedef TYPE_1__ esp_partition_t ;
typedef int esp_image_segment_header_t ;
typedef int esp_image_header_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_8__ {scalar_t__ magic_word; } ;
typedef TYPE_2__ esp_app_desc_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*,int,TYPE_2__*,int) ;

esp_err_t FUNC_1(const esp_partition_t *VAR_6, esp_app_desc_t *VAR_7)
{
    if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) {
        return VAR_1;
    }

    if(VAR_6->type != VAR_5) {
        return VAR_3;
    }

    esp_err_t VAR_8 = FUNC_0(VAR_6, sizeof(esp_image_header_t) + sizeof(esp_image_segment_header_t), VAR_7, sizeof(esp_app_desc_t));
    if (VAR_8 != VAR_4) {
        return VAR_8;
    }

    if (VAR_7->magic_word != VAR_0) {
        return VAR_2;
    }

    return VAR_4;
}
