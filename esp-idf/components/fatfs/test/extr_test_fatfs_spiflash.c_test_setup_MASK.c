
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int format_if_mount_failed; int max_files; } ;
typedef TYPE_1__ esp_vfs_fat_sdmmc_mount_config_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int *,TYPE_1__*,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(void)
{
    esp_vfs_fat_sdmmc_mount_config_t VAR_1 = {
        .format_if_mount_failed = 1,
        .max_files = 5
    };

    FUNC_0(FUNC_1("/spiflash", ((void*)0), &VAR_1, &VAR_0));
}
