
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int dummy; } ;
typedef int line ;
struct TYPE_3__ {char* base_path; int max_files; int format_if_mount_failed; int * partition_label; } ;
typedef TYPE_1__ esp_vfs_spiffs_conf_t ;
typedef scalar_t__ esp_err_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,size_t*,size_t*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int,int *) ;
 int * FUNC_8 (char*,char*) ;
 int FUNC_9 (int *,char*) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 scalar_t__ FUNC_11 (char*,struct stat*) ;
 char* FUNC_12 (char*,char) ;
 int FUNC_13 (char*) ;

void FUNC_14(void)
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
        return;
    }

    size_t VAR_6 = 0, VAR_7 = 0;
    VAR_5 = FUNC_3(((void*)0), &VAR_6, &VAR_7);
    if (VAR_5 != VAR_2) {
        FUNC_0(VAR_3, "Failed to get SPIFFS partition information (%s)", FUNC_2(VAR_5));
    } else {
        FUNC_1(VAR_3, "Partition size: total: %d, used: %d", VAR_6, VAR_7);
    }



    FUNC_1(VAR_3, "Opening file");
    FILE* VAR_8 = FUNC_8("/spiffs/hello.txt", "w");
    if (VAR_8 == ((void*)0)) {
        FUNC_0(VAR_3, "Failed to open file for writing");
        return;
    }
    FUNC_9(VAR_8, "Hello World!\n");
    FUNC_6(VAR_8);
    FUNC_1(VAR_3, "File written");


    struct stat VAR_9;
    if (FUNC_11("/spiffs/foo.txt", &VAR_9) == 0) {

        FUNC_13("/spiffs/foo.txt");
    }


    FUNC_1(VAR_3, "Renaming file");
    if (FUNC_10("/spiffs/hello.txt", "/spiffs/foo.txt") != 0) {
        FUNC_0(VAR_3, "Rename failed");
        return;
    }


    FUNC_1(VAR_3, "Reading file");
    VAR_8 = FUNC_8("/spiffs/foo.txt", "r");
    if (VAR_8 == ((void*)0)) {
        FUNC_0(VAR_3, "Failed to open file for reading");
        return;
    }
    char VAR_10[64];
    FUNC_7(VAR_10, sizeof(VAR_10), VAR_8);
    FUNC_6(VAR_8);

    char* VAR_11 = FUNC_12(VAR_10, '\n');
    if (VAR_11) {
        *VAR_11 = '\0';
    }
    FUNC_1(VAR_3, "Read from file: '%s'", VAR_10);


    FUNC_5(((void*)0));
    FUNC_1(VAR_3, "SPIFFS unmounted");
}
