
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* base_path; int max_files; int format_if_mount_failed; int * partition_label; } ;
typedef TYPE_1__ esp_vfs_spiffs_conf_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,size_t*,size_t*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static esp_err_t FUNC_5(void)
{
    FUNC_1(VAR_3, "Initializing SPIFFS");

    esp_vfs_spiffs_conf_t VAR_4 = {
      .base_path = "/spiffs",
      .partition_label = ((void*)0),
      .max_files = 5,
      .format_if_mount_failed = 1
    };

    esp_err_t VAR_5 = FUNC_4(&VAR_4);
    if (VAR_5 != VAR_2) {
        if (VAR_5 == VAR_1) {
            FUNC_0(VAR_3, "Failed to mount or format filesystem");
        } else if (VAR_5 == VAR_0) {
            FUNC_0(VAR_3, "Failed to find SPIFFS partition");
        } else {
            FUNC_0(VAR_3, "Failed to initialize SPIFFS (%s)", FUNC_2(VAR_5));
        }
        return VAR_1;
    }

    size_t VAR_6 = 0, VAR_7 = 0;
    VAR_5 = FUNC_3(((void*)0), &VAR_6, &VAR_7);
    if (VAR_5 != VAR_2) {
        FUNC_0(VAR_3, "Failed to get SPIFFS partition information (%s)", FUNC_2(VAR_5));
        return VAR_1;
    }

    FUNC_1(VAR_3, "Partition size: total: %d, used: %d", VAR_6, VAR_7);
    return VAR_2;
}
