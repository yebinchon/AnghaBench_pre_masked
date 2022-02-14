
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int address; int subtype; int type; } ;
typedef TYPE_1__ esp_partition_t ;
typedef int esp_ota_handle_t ;
typedef int esp_image_segment_header_t ;
typedef int esp_image_header_t ;
typedef int * esp_http_client_handle_t ;
struct TYPE_15__ {char* cert_pem; int url; } ;
typedef TYPE_2__ esp_http_client_config_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_16__ {int version; } ;
typedef TYPE_3__ esp_app_desc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int *,int ) ;
 scalar_t__ FUNC_12 (TYPE_1__ const*,int ,int *) ;
 scalar_t__ FUNC_13 (int ) ;
 TYPE_1__* FUNC_14 () ;
 TYPE_1__* FUNC_15 () ;
 TYPE_1__* FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (TYPE_1__ const*,TYPE_3__*) ;
 TYPE_1__* FUNC_18 () ;
 scalar_t__ FUNC_19 (TYPE_1__ const*) ;
 scalar_t__ FUNC_20 (int ,void const*,int) ;
 int FUNC_21 () ;
 int FUNC_22 (int *) ;
 int FUNC_23 () ;
 scalar_t__ FUNC_24 (int ,int ,int) ;
 int FUNC_25 (TYPE_3__*,int *,int) ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_26 () ;

__attribute__((used)) static void FUNC_27(void *VAR_7)
{
    esp_err_t VAR_8;

    esp_ota_handle_t VAR_9 = 0 ;
    const esp_partition_t *VAR_10 = ((void*)0);

    FUNC_2(VAR_4, "Starting OTA example");

    const esp_partition_t *VAR_11 = FUNC_14();
    const esp_partition_t *VAR_12 = FUNC_18();

    if (VAR_11 != VAR_12) {
        FUNC_3(VAR_4, "Configured OTA boot partition at offset 0x%08x, but running from offset 0x%08x",
                 VAR_11->address, VAR_12->address);
        FUNC_3(VAR_4, "(This can happen if either the OTA boot data or preferred boot image become corrupted somehow.)");
    }
    FUNC_2(VAR_4, "Running partition type %d subtype %d (offset 0x%08x)",
             VAR_12->type, VAR_12->subtype, VAR_12->address);

    esp_http_client_config_t VAR_13 = {
        .url = VAR_1,
        .cert_pem = (char *)VAR_6,
    };
    esp_http_client_handle_t VAR_14 = FUNC_8(&VAR_13);
    if (VAR_14 == ((void*)0)) {
        FUNC_1(VAR_4, "Failed to initialise HTTP connection");
        FUNC_26();
    }
    VAR_8 = FUNC_10(VAR_14, 0);
    if (VAR_8 != VAR_2) {
        FUNC_1(VAR_4, "Failed to open HTTP connection: %s", FUNC_5(VAR_8));
        FUNC_6(VAR_14);
        FUNC_26();
    }
    FUNC_7(VAR_14);

    VAR_10 = FUNC_16(((void*)0));
    FUNC_2(VAR_4, "Writing to partition subtype %d at offset 0x%x",
             VAR_10->subtype, VAR_10->address);
    FUNC_4(VAR_10 != ((void*)0));

    int VAR_15 = 0;

    bool VAR_16 = 0;
    while (1) {
        int VAR_17 = FUNC_11(VAR_14, VAR_5, VAR_0);
        if (VAR_17 < 0) {
            FUNC_1(VAR_4, "Error: SSL data read error");
            FUNC_22(VAR_14);
            FUNC_26();
        } else if (VAR_17 > 0) {
            if (VAR_16 == 0) {
                esp_app_desc_t VAR_18;
                if (VAR_17 > sizeof(esp_image_header_t) + sizeof(esp_image_segment_header_t) + sizeof(esp_app_desc_t)) {

                    FUNC_25(&VAR_18, &VAR_5[sizeof(esp_image_header_t) + sizeof(esp_image_segment_header_t)], sizeof(esp_app_desc_t));
                    FUNC_2(VAR_4, "New firmware version: %s", VAR_18.version);

                    esp_app_desc_t VAR_19;
                    if (FUNC_17(VAR_12, &VAR_19) == VAR_2) {
                        FUNC_2(VAR_4, "Running firmware version: %s", VAR_19.version);
                    }

                    const esp_partition_t* VAR_20 = FUNC_15();
                    esp_app_desc_t VAR_21;
                    if (FUNC_17(VAR_20, &VAR_21) == VAR_2) {
                        FUNC_2(VAR_4, "Last invalid firmware version: %s", VAR_21.version);
                    }


                    if (VAR_20 != ((void*)0)) {
                        if (FUNC_24(VAR_21.version, VAR_18.version, sizeof(VAR_18.version)) == 0) {
                            FUNC_3(VAR_4, "New version is the same as invalid version.");
                            FUNC_3(VAR_4, "Previously, there was an attempt to launch the firmware with %s version, but it failed.", VAR_21.version);
                            FUNC_3(VAR_4, "The firmware has been rolled back to the previous version.");
                            FUNC_22(VAR_14);
                            FUNC_23();
                        }
                    }

                    if (FUNC_24(VAR_18.version, VAR_19.version, sizeof(VAR_18.version)) == 0) {
                        FUNC_3(VAR_4, "Current running version is the same as a new. We will not continue the update.");
                        FUNC_22(VAR_14);
                        FUNC_23();
                    }

                    VAR_16 = 1;

                    VAR_8 = FUNC_12(VAR_10, VAR_3, &VAR_9);
                    if (VAR_8 != VAR_2) {
                        FUNC_1(VAR_4, "esp_ota_begin failed (%s)", FUNC_5(VAR_8));
                        FUNC_22(VAR_14);
                        FUNC_26();
                    }
                    FUNC_2(VAR_4, "esp_ota_begin succeeded");
                } else {
                    FUNC_1(VAR_4, "received package is not fit len");
                    FUNC_22(VAR_14);
                    FUNC_26();
                }
            }
            VAR_8 = FUNC_20( VAR_9, (const void *)VAR_5, VAR_17);
            if (VAR_8 != VAR_2) {
                FUNC_22(VAR_14);
                FUNC_26();
            }
            VAR_15 += VAR_17;
            FUNC_0(VAR_4, "Written image length %d", VAR_15);
        } else if (VAR_17 == 0) {
            FUNC_2(VAR_4, "Connection closed");
            break;
        }
    }
    FUNC_2(VAR_4, "Total Write binary data length: %d", VAR_15);
    if (FUNC_9(VAR_14) != 1) {
        FUNC_1(VAR_4, "Error in receiving complete file");
        FUNC_22(VAR_14);
        FUNC_26();
    }

    VAR_8 = FUNC_13(VAR_9);
    if (VAR_8 != VAR_2) {
        FUNC_1(VAR_4, "esp_ota_end failed (%s)!", FUNC_5(VAR_8));
        FUNC_22(VAR_14);
        FUNC_26();
    }

    VAR_8 = FUNC_19(VAR_10);
    if (VAR_8 != VAR_2) {
        FUNC_1(VAR_4, "esp_ota_set_boot_partition failed (%s)!", FUNC_5(VAR_8));
        FUNC_22(VAR_14);
        FUNC_26();
    }
    FUNC_2(VAR_4, "Prepare to restart system!");
    FUNC_21();
    return ;
}
