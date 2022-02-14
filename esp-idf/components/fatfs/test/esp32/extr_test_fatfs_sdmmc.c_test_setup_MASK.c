
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sdmmc_slot_config_t ;
typedef int sdmmc_host_t ;
struct TYPE_3__ {int format_if_mount_failed; int max_files; int allocation_unit_size; } ;
typedef TYPE_1__ esp_vfs_fat_sdmmc_mount_config_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int *,int *,TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_4(void)
{
    sdmmc_host_t VAR_0 = FUNC_0();
    sdmmc_slot_config_t VAR_1 = FUNC_1();
    esp_vfs_fat_sdmmc_mount_config_t VAR_2 = {
        .format_if_mount_failed = 1,
        .max_files = 5,
        .allocation_unit_size = 16 * 1024
    };
    FUNC_2(FUNC_3("/sdcard", &VAR_0, &VAR_1, &VAR_2, ((void*)0)));
}
