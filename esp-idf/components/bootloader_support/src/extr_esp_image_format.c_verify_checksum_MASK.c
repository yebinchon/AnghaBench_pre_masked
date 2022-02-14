
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ hash_appended; } ;
struct TYPE_5__ {int image_len; TYPE_1__ image; scalar_t__ start_addr; } ;
typedef TYPE_2__ esp_image_metadata_t ;
typedef scalar_t__ esp_err_t ;
typedef int * bootloader_sha256_handle_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__*,int,int) ;
 int FUNC_2 (int *,scalar_t__*,int) ;

__attribute__((used)) static esp_err_t FUNC_3(bootloader_sha256_handle_t VAR_4, uint32_t VAR_5, esp_image_metadata_t *VAR_6)
{
    uint32_t VAR_7 = VAR_6->image_len;
    uint32_t VAR_8 = VAR_7 + 1;
    VAR_8 = (VAR_8 + 15) & ~15;


    uint8_t VAR_9[16];
    esp_err_t VAR_10 = FUNC_1(VAR_6->start_addr + VAR_7, VAR_9, VAR_8 - VAR_7, 1);
    uint8_t VAR_11 = VAR_9[VAR_8 - VAR_7 - 1];
    uint8_t VAR_12 = (VAR_5 >> 24)
                       ^ (VAR_5 >> 16)
                       ^ (VAR_5 >> 8)
                       ^ (VAR_5 >> 0);
    if (VAR_10 != VAR_1 || VAR_12 != VAR_11) {
        FUNC_0(VAR_3, "Checksum failed. Calculated 0x%x read 0x%x", VAR_12, VAR_11);
        return VAR_0;
    }
    if (VAR_4 != ((void*)0)) {
        FUNC_2(VAR_4, VAR_9, VAR_8 - VAR_7);
    }

    if (VAR_6->image.hash_appended) {

        VAR_8 += VAR_2;
    }
    VAR_6->image_len = VAR_8;

    return VAR_1;
}
