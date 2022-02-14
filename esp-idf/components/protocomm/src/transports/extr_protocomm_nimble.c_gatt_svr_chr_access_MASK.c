
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct ble_gatt_access_ctxt {int op; int om; TYPE_1__* chr; } ;
typedef int ssize_t ;
typedef int esp_err_t ;
struct TYPE_4__ {int pc_ble; } ;
struct TYPE_3__ {int uuid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ,int,...) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int ,int *,int,int*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,char*) ;
 int * FUNC_6 (int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *,int ) ;
 TYPE_2__* VAR_7 ;
 int FUNC_9 (int ,int ,int,int *,int,int **,int *) ;
 int FUNC_10 (int,int *,int **) ;
 int FUNC_11 (int,int ,int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(uint16_t VAR_8, uint16_t VAR_9,
                    struct ble_gatt_access_ctxt *VAR_10,
                    void *VAR_11)
{
    int VAR_12;
    esp_err_t VAR_13;
    char VAR_14[VAR_4];
    ssize_t VAR_15 = 0;
    uint8_t *VAR_16 = ((void*)0);
    uint8_t *VAR_17 = ((void*)0);
    uint8_t *VAR_18 = ((void*)0);
    uint16_t VAR_19 = 0;
    uint16_t VAR_20 = 0;

    switch (VAR_10->op) {
    case 129:
        FUNC_0(VAR_6, "Read attempeted for Characterstic UUID = %s, attr_handle = %d",
                 FUNC_5(VAR_10->chr->uuid, VAR_14), VAR_9);

        VAR_12 = FUNC_10(VAR_9, &VAR_15,
                                             &VAR_16);
        if (VAR_12 != 0) {
            FUNC_1(VAR_6, "Failed to read characteristic with attr_handle = %d", VAR_9);
            return VAR_12;
        }

        VAR_12 = FUNC_8(VAR_10->om, VAR_16, VAR_15);
        return VAR_12 == 0 ? 0 : VAR_0;

    case 128:
        VAR_17 = (uint8_t *) FUNC_6(VAR_3, sizeof(uint8_t));
        if (!VAR_17) {
            FUNC_1(VAR_6, "Error allocating memory for 128 bit UUID");
            return VAR_0;
        }

        VAR_12 = FUNC_4(VAR_10->chr->uuid, VAR_17);
        if (VAR_12 != 0) {
            FUNC_7(VAR_17);
            FUNC_1(VAR_6, "Error fetching Characteristic UUID128");
            return VAR_12;
        }


        VAR_19 = FUNC_2(VAR_10->om);
        FUNC_0(VAR_6, "Write attempt for uuid = %s, attr_handle = %d, data_len = %d",
                 FUNC_5(VAR_10->chr->uuid, VAR_14), VAR_9, VAR_19);

        VAR_18 = FUNC_6(1, VAR_19);
        if (VAR_18 == ((void*)0)) {
            FUNC_1(VAR_6, "Error allocating memory for characteristic value");
            return VAR_0;
        }

        VAR_12 = FUNC_3(VAR_10->om, VAR_18, VAR_19, &VAR_20);
        if (VAR_12 != 0) {
            FUNC_1(VAR_6, "Error getting data from memory buffers");
            return VAR_2;
        }

        VAR_13 = FUNC_9(VAR_7->pc_ble,
                                   FUNC_12(VAR_17),
                                   VAR_8,
                                   VAR_18,
                                   VAR_20,
                                   &VAR_16, &VAR_15);

        FUNC_7(VAR_17);
        FUNC_7(VAR_18);
        if (VAR_13 == VAR_5) {


            VAR_12 = FUNC_11(VAR_9, VAR_15,
                                                 VAR_16);
            if (VAR_12 != 0) {
                FUNC_1(VAR_6, "Failed to set outbuf for characteristic with attr_handle = %d",
                         VAR_9);
                FUNC_7(VAR_16);
            }

            return VAR_12;
        } else {
            FUNC_1(VAR_6, "Invalid content received, killing connection");
            return VAR_1;
        }

    default:
        return VAR_2;
    }
}
