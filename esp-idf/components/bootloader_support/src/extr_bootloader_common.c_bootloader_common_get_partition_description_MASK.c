
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {scalar_t__ offset; int size; } ;
typedef TYPE_1__ esp_partition_pos_t ;
typedef int esp_image_segment_header_t ;
typedef int esp_image_header_t ;
typedef int esp_err_t ;
struct TYPE_7__ {scalar_t__ magic_word; } ;
typedef TYPE_2__ esp_app_desc_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,scalar_t__,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (TYPE_2__*,int const*,int) ;

esp_err_t FUNC_4(const esp_partition_pos_t *VAR_6, esp_app_desc_t *VAR_7)
{
    if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0) || VAR_6->offset == 0) {
        return VAR_1;
    }

    const uint8_t *VAR_8 = FUNC_1(VAR_6->offset, VAR_6->size);
    if (VAR_8 == ((void*)0)) {
        FUNC_0(VAR_5, "bootloader_mmap(0x%x, 0x%x) failed", VAR_6->offset, VAR_6->size);
        return VAR_3;
    }

    FUNC_3(VAR_7, VAR_8 + sizeof(esp_image_header_t) + sizeof(esp_image_segment_header_t), sizeof(esp_app_desc_t));
    FUNC_2(VAR_8);

    if (VAR_7->magic_word != VAR_0) {
        return VAR_2;
    }

    return VAR_4;
}
