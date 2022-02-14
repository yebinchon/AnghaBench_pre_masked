
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int esp_gatt_status_t ;
typedef scalar_t__ esp_gatt_db_attr_type_t ;


 int FUNC_0 (int ,int ,int ,int*) ;
 int FUNC_1 (int ,scalar_t__,int ,int ,int ,int*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

esp_gatt_status_t FUNC_2(uint16_t VAR_2,
                                               esp_gatt_db_attr_type_t VAR_3,
                                               uint16_t VAR_4,
                                               uint16_t VAR_5,
                                               uint16_t VAR_6,
                                               uint16_t *VAR_7)
{
    if (VAR_3 == VAR_0) {
        FUNC_0(VAR_2, VAR_4, VAR_5, (int *)VAR_7);
    } else {
        FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, (int *)VAR_7);
    }

    return VAR_1;
}
