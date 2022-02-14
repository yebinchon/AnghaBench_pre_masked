
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_files; } ;
typedef TYPE_1__ esp_vfs_fat_mount_config_t ;
typedef int esp_partition_t ;
typedef scalar_t__ esp_err_t ;
typedef scalar_t__ FRESULT ;
typedef int FATFS ;
typedef scalar_t__ BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,scalar_t__,...) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int * FUNC_3 (int ,int ,char const*) ;
 scalar_t__ FUNC_4 (char const*,char*,int ,int **) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (int *,char*,int) ;
 scalar_t__ FUNC_7 (scalar_t__*) ;
 scalar_t__ FUNC_8 (scalar_t__,int const*) ;
 int FUNC_9 (scalar_t__) ;

esp_err_t FUNC_10(const char* VAR_9,
    const char* VAR_10,
    const esp_vfs_fat_mount_config_t* VAR_11)
{
    esp_err_t VAR_12 = VAR_4;

    const esp_partition_t *VAR_13 = FUNC_3(VAR_6,
            VAR_5, VAR_10);
    if (VAR_13 == ((void*)0)) {
        FUNC_1(VAR_8, "Failed to find FATFS partition (type='data', subtype='fat', partition_label='%s'). Check the partition table.", VAR_10);
        return VAR_1;
    }


    BYTE VAR_14 = 0xFF;
    if (FUNC_7(&VAR_14) != VAR_4) {
        FUNC_0(VAR_8, "the maximum count of volumes is already mounted");
        return VAR_2;
    }
    FUNC_0(VAR_8, "using pdrv=%i", VAR_14);
    char VAR_15[3] = {(char)('0' + VAR_14), ':', 0};

    VAR_12 = FUNC_8(VAR_14, VAR_13);
    if (VAR_12 != VAR_4) {
        FUNC_1(VAR_8, "ff_diskio_register_raw_partition failed pdrv=%i, error - 0x(%x)", VAR_14, VAR_12);
        goto fail;
    }

    FATFS *VAR_16;
    VAR_12 = FUNC_4(VAR_9, VAR_15, VAR_11->max_files, &VAR_16);
    if (VAR_12 == VAR_0) {

    } else if (VAR_12 != VAR_4) {
        FUNC_0(VAR_8, "esp_vfs_fat_register failed 0x(%x)", VAR_12);
        goto fail;
    }


    FRESULT VAR_17 = FUNC_6(VAR_16, VAR_15, 1);
    if (VAR_17 != VAR_7) {
        FUNC_2(VAR_8, "f_mount failed (%d)", VAR_17);
        VAR_12 = VAR_3;
        goto fail;
    }
    return VAR_4;

fail:
    FUNC_5(VAR_9);
    FUNC_9(VAR_14);
    return VAR_12;
}
