
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int member_0; } ;
typedef TYPE_1__ tBT_UUID ;
typedef int esp_gattc_descr_elem_t ;
typedef int esp_gatt_status_t ;
typedef int esp_bt_uuid_t ;
typedef int btgatt_db_element_t ;


 int FUNC_0 (int,int,int,TYPE_1__,TYPE_1__,int **,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int,int ,int ,void*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int *) ;

esp_gatt_status_t FUNC_5(uint16_t VAR_2,
                                                  uint16_t VAR_3,
                                                  uint16_t VAR_4,
                                                  esp_bt_uuid_t VAR_5,
                                                  esp_bt_uuid_t VAR_6,
                                                  esp_gattc_descr_elem_t *VAR_7,
                                                  uint16_t *VAR_8)
{
    esp_gatt_status_t VAR_9;
    btgatt_db_element_t *VAR_10 = ((void*)0);
    int VAR_11 = 0;
    tBT_UUID VAR_12 = {0};
    tBT_UUID VAR_13 = {0};
    FUNC_3(&VAR_12, &VAR_5);
    FUNC_3(&VAR_13, &VAR_6);

    FUNC_0(VAR_2, VAR_3, VAR_4,
                             VAR_12, VAR_13, &VAR_10, &VAR_11);

    if ((VAR_9 = FUNC_1(VAR_11, 0)) != VAR_1) {
        if (VAR_10) {
            FUNC_4(VAR_10);
        }
        *VAR_8 = 0;
        return VAR_9;
    } else {
        FUNC_2(*VAR_8, (uint16_t)VAR_11, VAR_0, 0, (void *)VAR_7, VAR_10);
    }

    *VAR_8 = VAR_11;

    if (VAR_10) {
        FUNC_4(VAR_10);
    }
    return VAR_1;
}
