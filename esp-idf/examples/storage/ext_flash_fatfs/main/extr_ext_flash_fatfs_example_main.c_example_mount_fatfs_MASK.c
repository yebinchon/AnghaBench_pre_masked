
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_files; int format_if_mount_failed; int allocation_unit_size; } ;
typedef TYPE_1__ esp_vfs_fat_mount_config_t ;
typedef scalar_t__ esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,char const*,TYPE_1__ const*,int *) ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_4(const char* VAR_5)
{
    FUNC_1(VAR_2, "Mounting FAT filesystem");
    const esp_vfs_fat_mount_config_t VAR_6 = {
            .max_files = 4,
            .format_if_mount_failed = 1,
            .allocation_unit_size = VAR_0
    };
    esp_err_t VAR_7 = FUNC_3(VAR_3, VAR_5, &VAR_6, &VAR_4);
    if (VAR_7 != VAR_1) {
        FUNC_0(VAR_2, "Failed to mount FATFS (%s)", FUNC_2(VAR_7));
        return 0;
    }
    return 1;
}
