
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct stat {int dummy; } ;
struct TYPE_11__ {int gpio_cs; int gpio_sck; int gpio_mosi; int gpio_miso; } ;
typedef TYPE_2__ sdspi_slot_config_t ;
typedef int sdmmc_slot_config_t ;
typedef int sdmmc_host_t ;
struct TYPE_10__ {char* name; } ;
struct TYPE_12__ {TYPE_1__ cid; } ;
typedef TYPE_3__ sdmmc_card_t ;
typedef int line ;
struct TYPE_13__ {int format_if_mount_failed; int max_files; int allocation_unit_size; } ;
typedef TYPE_4__ esp_vfs_fat_sdmmc_mount_config_t ;
typedef scalar_t__ esp_err_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_2__ FUNC_5 () ;
 int VAR_7 ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (char*,int *,TYPE_2__*,TYPE_4__*,TYPE_3__**) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,int,int *) ;
 int * FUNC_11 (char*,char*) ;
 int FUNC_12 (int *,char*,char*) ;
 int FUNC_13 (int,int ) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 int FUNC_15 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_16 (char*,struct stat*) ;
 int VAR_8 ;
 char* FUNC_17 (char*,char) ;
 int FUNC_18 (char*) ;

void FUNC_19(void)
{
    FUNC_1(VAR_7, "Initializing SD card");


    FUNC_1(VAR_7, "Using SDMMC peripheral");
    sdmmc_host_t VAR_9 = FUNC_2();



    sdmmc_slot_config_t VAR_10 = FUNC_3();







    FUNC_13(15, VAR_2);
    FUNC_13(2, VAR_2);
    FUNC_13(4, VAR_2);
    FUNC_13(12, VAR_2);
    FUNC_13(13, VAR_2);
    esp_vfs_fat_sdmmc_mount_config_t VAR_11 = {
        .format_if_mount_failed = 0,
        .max_files = 5,
        .allocation_unit_size = 16 * 1024
    };





    sdmmc_card_t* VAR_12;
    esp_err_t VAR_13 = FUNC_7("/sdcard", &VAR_9, &VAR_10, &VAR_11, &VAR_12);

    if (VAR_13 != VAR_1) {
        if (VAR_13 == VAR_0) {
            FUNC_0(VAR_7, "Failed to mount filesystem. "
                "If you want the card to be formatted, set format_if_mount_failed = true.");
        } else {
            FUNC_0(VAR_7, "Failed to initialize the card (%s). "
                "Make sure SD card lines have pull-up resistors in place.", FUNC_6(VAR_13));
        }
        return;
    }


    FUNC_15(VAR_8, VAR_12);



    FUNC_1(VAR_7, "Opening file");
    FILE* VAR_14 = FUNC_11("/sdcard/hello.txt", "w");
    if (VAR_14 == ((void*)0)) {
        FUNC_0(VAR_7, "Failed to open file for writing");
        return;
    }
    FUNC_12(VAR_14, "Hello %s!\n", VAR_12->cid.name);
    FUNC_9(VAR_14);
    FUNC_1(VAR_7, "File written");


    struct stat VAR_15;
    if (FUNC_16("/sdcard/foo.txt", &VAR_15) == 0) {

        FUNC_18("/sdcard/foo.txt");
    }


    FUNC_1(VAR_7, "Renaming file");
    if (FUNC_14("/sdcard/hello.txt", "/sdcard/foo.txt") != 0) {
        FUNC_0(VAR_7, "Rename failed");
        return;
    }


    FUNC_1(VAR_7, "Reading file");
    VAR_14 = FUNC_11("/sdcard/foo.txt", "r");
    if (VAR_14 == ((void*)0)) {
        FUNC_0(VAR_7, "Failed to open file for reading");
        return;
    }
    char VAR_16[64];
    FUNC_10(VAR_16, sizeof(VAR_16), VAR_14);
    FUNC_9(VAR_14);

    char* VAR_17 = FUNC_17(VAR_16, '\n');
    if (VAR_17) {
        *VAR_17 = '\0';
    }
    FUNC_1(VAR_7, "Read from file: '%s'", VAR_16);


    FUNC_8();
    FUNC_1(VAR_7, "Card unmounted");
}
