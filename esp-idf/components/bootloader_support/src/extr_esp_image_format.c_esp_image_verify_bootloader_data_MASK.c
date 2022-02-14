
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ size; scalar_t__ offset; } ;
typedef TYPE_1__ esp_partition_pos_t ;
typedef int esp_image_metadata_t ;
typedef int esp_err_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,TYPE_1__ const*,int *) ;

esp_err_t FUNC_1(esp_image_metadata_t *VAR_4)
{
    if (VAR_4 == ((void*)0)) {
        return VAR_1;
    }
    const esp_partition_pos_t VAR_5 = {
        .offset = VAR_0,
        .size = VAR_3 - VAR_0,
    };
    return FUNC_0(VAR_2,
                            &VAR_5,
                            VAR_4);
}
