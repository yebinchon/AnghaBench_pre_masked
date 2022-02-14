
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int tBT_UUID ;
typedef int esp_gattc_service_elem_t ;
typedef int esp_gatt_status_t ;
typedef int esp_bt_uuid_t ;
typedef int btgatt_db_element_t ;


 int FUNC_0 (int,int *,int **,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int ,int,void*,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int) ;

esp_gatt_status_t FUNC_6(uint16_t VAR_2, esp_bt_uuid_t *VAR_3,
                                                           esp_gattc_service_elem_t *VAR_4,
                                                           uint16_t *VAR_5, uint16_t VAR_6)
{
    esp_gatt_status_t VAR_7;
    btgatt_db_element_t *VAR_8 = ((void*)0);
    int VAR_9 = 0;
    tBT_UUID *VAR_10 = ((void*)0);
    if (VAR_3) {
        VAR_10 = FUNC_5(sizeof(tBT_UUID));
        FUNC_3(VAR_10, VAR_3);
    }

    FUNC_0(VAR_2, VAR_10, &VAR_8, &VAR_9);

    if ((VAR_7 = FUNC_1(VAR_9, VAR_6)) != VAR_1) {
        if (VAR_8) {
            FUNC_4(VAR_8);
        }
        if (VAR_10) {
            FUNC_4(VAR_10);
        }
        *VAR_5 = 0;
        return VAR_7;
    } else {
        FUNC_2(*VAR_5, (uint16_t)VAR_9, VAR_0, VAR_6, (void *)VAR_4, VAR_8);
    }

    *VAR_5 = VAR_9;

    if (VAR_8) {
        FUNC_4(VAR_8);
    }
    if (VAR_10) {
        FUNC_4(VAR_10);
    }
    return VAR_1;
}
