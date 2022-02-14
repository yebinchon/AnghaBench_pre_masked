
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sdmmc_slot_config_t ;
struct TYPE_6__ {int max_freq_khz; } ;
typedef TYPE_1__ sdmmc_host_t ;
struct TYPE_7__ {int format_if_mount_failed; int max_files; int allocation_unit_size; } ;
typedef TYPE_2__ esp_vfs_fat_sdmmc_mount_config_t ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,TYPE_1__*,int *,TYPE_2__*,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,void*,size_t,size_t,int) ;

__attribute__((used)) static void FUNC_6(void* VAR_1, size_t VAR_2, size_t VAR_3, bool VAR_4)
{
    sdmmc_host_t VAR_5 = FUNC_0();
    VAR_5.max_freq_khz = VAR_0;
    sdmmc_slot_config_t VAR_6 = FUNC_1();
    esp_vfs_fat_sdmmc_mount_config_t VAR_7 = {
        .format_if_mount_failed = VAR_4,
        .max_files = 5,
        .allocation_unit_size = 64 * 1024
    };
    FUNC_2(FUNC_3("/sdcard", &VAR_5, &VAR_6, &VAR_7, ((void*)0)));

    FUNC_5("/sdcard/4mb.bin", VAR_1, VAR_2, VAR_3, VAR_4);

    FUNC_2(FUNC_4());
}
