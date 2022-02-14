
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ble_gatt_svc_def {scalar_t__ characteristics; int * uuid; } ;
struct TYPE_7__ {int nu_lookup_count; TYPE_3__* service_uuid; } ;
typedef TYPE_2__ protocomm_ble_config_t ;
typedef int ble_uuid_t ;
struct TYPE_6__ {int type; } ;
struct TYPE_8__ {void* value; TYPE_1__ u; int member_0; } ;
typedef TYPE_3__ ble_uuid128_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;
 int FUNC_1 (void*,int,int ) ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (struct ble_gatt_svc_def*,int) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (void*,TYPE_3__*,int) ;

__attribute__((used)) static int
FUNC_6(struct ble_gatt_svc_def **VAR_5, const protocomm_ble_config_t *VAR_6)
{


    *VAR_5 = (struct ble_gatt_svc_def *) FUNC_4(2, sizeof(struct ble_gatt_svc_def));
    if (*VAR_5 == ((void*)0)) {
        FUNC_0(VAR_4, "Error allocating memory for GATT services");
        return VAR_3;
    }


    (*VAR_5)->uuid = (ble_uuid_t *) FUNC_4(1, sizeof(ble_uuid128_t));
    if ((*VAR_5)->uuid == ((void*)0)) {
        FUNC_0(VAR_4, "Error allocating memory for GATT service UUID");
        return VAR_3;
    }


    ble_uuid128_t VAR_7 = {0};
    VAR_7 = VAR_2;
    FUNC_5(VAR_7, VAR_6->service_uuid, VAR_1);
    FUNC_5((void *) (*VAR_5)->uuid, &VAR_7, sizeof(ble_uuid128_t));


    int VAR_8 = FUNC_3(*VAR_5, VAR_6->nu_lookup_count);
    if (VAR_8 != 0) {
        FUNC_0(VAR_4, "Error adding primary service !!!");
        return VAR_8;
    }

    for (int VAR_9 = 0 ; VAR_9 < VAR_6->nu_lookup_count; VAR_9++) {


        VAR_8 = FUNC_2((void *) (*VAR_5)->characteristics, VAR_9);
        if (VAR_8 != 0) {
            FUNC_0(VAR_4, "Error adding GATT characteristic !!!");
            return VAR_8;
        }

        VAR_8 = FUNC_1((void *) (*VAR_5)->characteristics,
                                   VAR_9, VAR_0);
        if (VAR_8 != 0) {
            FUNC_0(VAR_4, "Error adding GATT Discriptor !!");
            return VAR_8;
        }
    }
    return 0;
}
