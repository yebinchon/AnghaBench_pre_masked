
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;
typedef struct TYPE_16__ TYPE_13__ ;


struct uuid128_name_buf {TYPE_6__* uuid128_name_table; } ;
struct TYPE_17__ {int * uuids128; } ;
struct TYPE_20__ {int gatt_db; int * device_name; int adv_params; TYPE_15__ adv_data; int set_mtu_fn; int disconnect_fn; int connect_fn; } ;
typedef TYPE_3__ simple_ble_cfg_t ;
struct TYPE_21__ {int remove_endpoint; int add_endpoint; } ;
typedef TYPE_4__ protocomm_t ;
typedef int protocomm_ble_name_uuid_t ;
struct TYPE_22__ {int nu_lookup_count; TYPE_2__* nu_lookup; int device_name; int service_uuid; } ;
typedef TYPE_5__ protocomm_ble_config_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_18__ {int type; } ;
struct TYPE_23__ {int value; TYPE_1__ u; } ;
typedef TYPE_6__ ble_uuid128_t ;
struct TYPE_24__ {int g_nu_lookup_count; int gatt_mtu; TYPE_4__* pc_ble; TYPE_13__* g_nu_lookup; } ;
typedef TYPE_7__ _protocomm_ble_internal_t ;
struct TYPE_19__ {int name; int uuid; } ;
struct TYPE_16__ {int * name; int uuid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int *,struct uuid128_name_buf*,int ) ;
 int VAR_7 ;
 TYPE_15__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_11 ;
 TYPE_13__* FUNC_7 (int) ;
 int FUNC_8 (int ,int ,int ) ;
 scalar_t__ FUNC_9 (int *,TYPE_5__ const*) ;
 TYPE_7__* VAR_12 ;
 int VAR_13 ;
 int FUNC_10 () ;
 int * VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_11 (TYPE_3__*) ;
 void* FUNC_12 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

esp_err_t FUNC_13(protocomm_t *VAR_20, const protocomm_ble_config_t *VAR_21)
{


    FUNC_8(VAR_10, VAR_21->service_uuid, VAR_1);

    if (!VAR_20 || !VAR_21 || !VAR_21->device_name || !VAR_21->nu_lookup) {
        return VAR_3;
    }

    if (VAR_12) {
        FUNC_1(VAR_7, "Protocomm BLE already started");
        return VAR_5;
    }


    ble_uuid128_t *VAR_22 = (ble_uuid128_t *)
                                 FUNC_4(1, sizeof(ble_uuid128_t));
    if (VAR_22 == ((void*)0)) {
        FUNC_1(VAR_7, "Error while allocating memory for 128 bit UUID");
        return VAR_4;
    }
    VAR_22->u.type = VAR_2;
    FUNC_8(VAR_22->value, VAR_21->service_uuid, VAR_1);
    VAR_8.uuids128 = (void *)VAR_22;


    struct uuid128_name_buf *VAR_23 = (struct uuid128_name_buf *)
            FUNC_4(1, sizeof(struct uuid128_name_buf));

    if (VAR_23 == ((void*)0)) {
        FUNC_1(VAR_7, "Error allocating memory for UUID128 address database");
        return VAR_4;
    }
    FUNC_3(&VAR_19, VAR_23, VAR_11);
    VAR_23->uuid128_name_table = VAR_22;

    if (VAR_8.uuids128 == ((void*)0)) {
        FUNC_1(VAR_7, "Error allocating memory for storing service UUID");
        FUNC_10();
        return VAR_4;
    }


    VAR_14 = FUNC_12(VAR_21->device_name);

    if (VAR_14 == ((void*)0)) {
        FUNC_1(VAR_7, "Error allocating memory for storing BLE device name");
        FUNC_10();
        return VAR_4;
    }

    VAR_12 = (_protocomm_ble_internal_t *) FUNC_4(1, sizeof(_protocomm_ble_internal_t));
    if (VAR_12 == ((void*)0)) {
        FUNC_1(VAR_7, "Error allocating internal protocomm structure");
        FUNC_10();
        return VAR_4;
    }

    VAR_12->g_nu_lookup_count = VAR_21->nu_lookup_count;
    VAR_12->g_nu_lookup = FUNC_7(VAR_21->nu_lookup_count * sizeof(protocomm_ble_name_uuid_t));
    if (VAR_12->g_nu_lookup == ((void*)0)) {
        FUNC_1(VAR_7, "Error allocating internal name UUID table");
        FUNC_10();
        return VAR_4;
    }

    for (unsigned VAR_24 = 0; VAR_24 < VAR_12->g_nu_lookup_count; VAR_24++) {
        VAR_12->g_nu_lookup[VAR_24].uuid = VAR_21->nu_lookup[VAR_24].uuid;
        VAR_12->g_nu_lookup[VAR_24].name = FUNC_12(VAR_21->nu_lookup[VAR_24].name);
        if (VAR_12->g_nu_lookup[VAR_24].name == ((void*)0)) {
            FUNC_1(VAR_7, "Error allocating internal name UUID entry");
            FUNC_10();
            return VAR_4;
        }
    }

    VAR_20->add_endpoint = VAR_13;
    VAR_20->remove_endpoint = VAR_15;
    VAR_12->pc_ble = VAR_20;
    VAR_12->gatt_mtu = VAR_0;

    simple_ble_cfg_t *VAR_25 = (simple_ble_cfg_t *) FUNC_4(1, sizeof(simple_ble_cfg_t));
    if (VAR_25 == ((void*)0)) {
        FUNC_1(VAR_7, "Ran out of memory for BLE config");
        FUNC_10();
        return VAR_4;
    }


    VAR_25->connect_fn = VAR_16;
    VAR_25->disconnect_fn = VAR_17;
    VAR_25->set_mtu_fn = VAR_18;


    VAR_25->adv_data = VAR_8;
    VAR_25->adv_params = VAR_9;

    VAR_25->device_name = VAR_14;

    if (FUNC_9(&VAR_25->gatt_db, VAR_21) != 0) {
        FUNC_1(VAR_7, "Error populating GATT Database");
        FUNC_6(VAR_25);
        return VAR_4;
    }

    esp_err_t VAR_26 = FUNC_11(VAR_25);
    FUNC_0(VAR_7, "Free Heap size after simple_ble_start= %d", FUNC_5());

    if (VAR_26 != VAR_6) {
        FUNC_1(VAR_7, "simple_ble_start failed w/ error code 0x%x", VAR_26);
        FUNC_6(VAR_25);
        FUNC_10();
        return VAR_26;
    }

    FUNC_2(VAR_7, "Waiting for client to connect ......");
    return VAR_6;
}
