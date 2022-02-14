
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int line ;
struct TYPE_3__ {int max_files; int format_if_mount_failed; int allocation_unit_size; } ;
typedef TYPE_1__ esp_vfs_fat_mount_config_t ;
typedef scalar_t__ esp_err_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__) ;
 char* FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,char*,TYPE_1__ const*,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int,int *) ;
 int * FUNC_9 (char*,char*) ;
 int FUNC_10 (int *,char*,char*) ;
 int VAR_4 ;
 char* FUNC_11 (char*,char) ;

void FUNC_12(void)
{
    FUNC_2(VAR_2, "Mounting FAT filesystem");


    const esp_vfs_fat_mount_config_t VAR_5 = {
            .max_files = 4,
            .format_if_mount_failed = 1,
            .allocation_unit_size = VAR_0
    };
    esp_err_t VAR_6 = FUNC_5(VAR_3, "storage", &VAR_5, &VAR_4);
    if (VAR_6 != VAR_1) {
        FUNC_1(VAR_2, "Failed to mount FATFS (%s)", FUNC_3(VAR_6));
        return;
    }
    FUNC_2(VAR_2, "Opening file");
    FILE *VAR_7 = FUNC_9("/spiflash/hello.txt", "wb");
    if (VAR_7 == ((void*)0)) {
        FUNC_1(VAR_2, "Failed to open file for writing");
        return;
    }
    FUNC_10(VAR_7, "written using ESP-IDF %s\n", FUNC_4());
    FUNC_7(VAR_7);
    FUNC_2(VAR_2, "File written");


    FUNC_2(VAR_2, "Reading file");
    VAR_7 = FUNC_9("/spiflash/hello.txt", "rb");
    if (VAR_7 == ((void*)0)) {
        FUNC_1(VAR_2, "Failed to open file for reading");
        return;
    }
    char VAR_8[128];
    FUNC_8(VAR_8, sizeof(VAR_8), VAR_7);
    FUNC_7(VAR_7);

    char *VAR_9 = FUNC_11(VAR_8, '\n');
    if (VAR_9) {
        *VAR_9 = '\0';
    }
    FUNC_2(VAR_2, "Read from file: '%s'", VAR_8);


    FUNC_2(VAR_2, "Unmounting FAT filesystem");
    FUNC_0( FUNC_6(VAR_3, VAR_4));

    FUNC_2(VAR_2, "Done");
}
