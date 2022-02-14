
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; int address; } ;
typedef TYPE_1__ esp_partition_t ;
struct TYPE_6__ {int size; int offset; } ;
typedef TYPE_2__ esp_partition_pos_t ;
typedef int esp_image_metadata_t ;
typedef int esp_image_load_mode_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,TYPE_2__ const*,int *) ;

__attribute__((used)) static esp_err_t FUNC_1(const esp_partition_t *VAR_2, esp_image_load_mode_t VAR_3)
{
    esp_image_metadata_t VAR_4;
    const esp_partition_pos_t VAR_5 = {
        .offset = VAR_2->address,
        .size = VAR_2->size,
    };

    if (FUNC_0(VAR_3, &VAR_5, &VAR_4) != VAR_1) {
        return VAR_0;
    }

    return VAR_1;
}
