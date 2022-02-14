
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_3__ {int offset; int size; } ;
typedef TYPE_1__ esp_partition_pos_t ;
typedef int esp_ota_select_entry_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_2 (int,int) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int *,int const*,int) ;

__attribute__((used)) static esp_err_t FUNC_5(const esp_partition_pos_t *VAR_5, esp_ota_select_entry_t *VAR_6)
{
    const esp_ota_select_entry_t *VAR_7;
    if (VAR_5->offset == 0) {
        return VAR_0;
    }


    if (VAR_5->size < 2 * VAR_3) {
        FUNC_1(VAR_4, "ota_info partition size %d is too small (minimum %d bytes)", VAR_5->size, sizeof(esp_ota_select_entry_t));
        return VAR_1;
    }

    FUNC_0(VAR_4, "OTA data offset 0x%x", VAR_5->offset);
    VAR_7 = FUNC_2(VAR_5->offset, VAR_5->size);
    if (!VAR_7) {
        FUNC_1(VAR_4, "bootloader_mmap(0x%x, 0x%x) failed", VAR_5->offset, VAR_5->size);
        return VAR_1;
    }

    FUNC_4(&VAR_6[0], VAR_7, sizeof(esp_ota_select_entry_t));
    FUNC_4(&VAR_6[1], (uint8_t *)VAR_7 + VAR_3, sizeof(esp_ota_select_entry_t));
    FUNC_3(VAR_7);

    return VAR_2;
}
