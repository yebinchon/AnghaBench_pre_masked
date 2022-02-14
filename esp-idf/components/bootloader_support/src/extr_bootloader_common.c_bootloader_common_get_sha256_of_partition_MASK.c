
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {int size; int offset; } ;
typedef TYPE_2__ esp_partition_pos_t ;
struct TYPE_6__ {scalar_t__ hash_appended; } ;
struct TYPE_8__ {int image_len; int image_digest; TYPE_1__ image; } ;
typedef TYPE_3__ esp_image_metadata_t ;
typedef scalar_t__ esp_err_t ;
typedef int * bootloader_sha256_handle_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (void const*) ;
 int FUNC_3 (int *,void const*,int ) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,TYPE_2__ const*,TYPE_3__*) ;
 int FUNC_7 (int *,int ,int ) ;

esp_err_t FUNC_8 (uint32_t VAR_9, uint32_t VAR_10, int VAR_11, uint8_t *VAR_12)
{
    if (VAR_12 == ((void*)0) || VAR_10 == 0) {
        return VAR_1;
    }

    if (VAR_11 == VAR_7) {
        const esp_partition_pos_t VAR_13 = {
            .offset = VAR_9,
            .size = VAR_10,
        };
        esp_image_metadata_t VAR_14;


        if (FUNC_6(VAR_4, &VAR_13, &VAR_14) != VAR_5) {
            return VAR_0;
        }
        if (VAR_14.image.hash_appended) {
            FUNC_7(VAR_12, VAR_14.image_digest, VAR_6);
            return VAR_5;
        }

        VAR_10 = VAR_14.image_len;
    }

    const void *VAR_15 = FUNC_1(VAR_9, VAR_10);
    if (VAR_15 == ((void*)0)) {
        FUNC_0(VAR_8, "bootloader_mmap(0x%x, 0x%x) failed", VAR_9, VAR_10);
        return VAR_3;
    }
    bootloader_sha256_handle_t VAR_16 = FUNC_5();
    if (VAR_16 == ((void*)0)) {
        FUNC_2(VAR_15);
        return VAR_2;
    }
    FUNC_3(VAR_16, VAR_15, VAR_10);
    FUNC_4(VAR_16, VAR_12);

    FUNC_2(VAR_15);

    return VAR_5;
}
