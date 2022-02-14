
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int member_0; } ;
typedef TYPE_1__ tBT_UUID ;
typedef int esp_gattc_incl_svc_elem_t ;
typedef int esp_gatt_status_t ;
typedef int esp_bt_uuid_t ;
typedef int btgatt_db_element_t ;


 int FUNC_0 (int,int,int,TYPE_1__*,int **,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int,int ,int ,void*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int *) ;

esp_gatt_status_t FUNC_5(uint16_t VAR_2,
                                                    uint16_t VAR_3,
                                                    uint16_t VAR_4,
                                                    esp_bt_uuid_t *VAR_5,
                                                    esp_gattc_incl_svc_elem_t *VAR_6,
                                                    uint16_t *VAR_7)
{
    esp_gatt_status_t VAR_8;
    btgatt_db_element_t *VAR_9 = ((void*)0);
    int VAR_10 = 0;
    tBT_UUID VAR_11 = {0};

    if (VAR_5 != ((void*)0)) {
        FUNC_3(&VAR_11, VAR_5);
        FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_11, &VAR_9, &VAR_10);
    } else {
        FUNC_0(VAR_2, VAR_3, VAR_4, ((void*)0), &VAR_9, &VAR_10);
    }

    if ((VAR_8 = FUNC_1(VAR_10, 0)) != VAR_1) {
        if (VAR_9) {
            FUNC_4(VAR_9);
        }
        *VAR_7 = 0;
        return VAR_8;
    }else {
        FUNC_2(*VAR_7, (uint16_t)VAR_10, VAR_0, 0, (void *)VAR_6, VAR_9);
    }

    *VAR_7 = VAR_10;

    if (VAR_9) {
        FUNC_4(VAR_9);
    }
    return VAR_1;
}
