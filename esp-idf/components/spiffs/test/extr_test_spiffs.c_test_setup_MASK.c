
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* base_path; int max_files; int format_if_mount_failed; int partition_label; } ;
typedef TYPE_1__ esp_vfs_spiffs_conf_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(void)
{
    esp_vfs_spiffs_conf_t VAR_1 = {
      .base_path = "/spiffs",
      .partition_label = VAR_0,
      .max_files = 5,
      .format_if_mount_failed = 1
    };

    FUNC_0(FUNC_1(&VAR_1));
}
