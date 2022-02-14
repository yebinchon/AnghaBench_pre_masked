
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int esp_gatt_status_t ;
typedef int esp_gatt_if_t ;
typedef int esp_gatt_db_attr_type_t ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__*) ;

esp_gatt_status_t FUNC_3(esp_gatt_if_t VAR_4,
                                               uint16_t VAR_5,
                                               esp_gatt_db_attr_type_t VAR_6,
                                               uint16_t VAR_7,
                                               uint16_t VAR_8,
                                               uint16_t VAR_9,
                                               uint16_t *VAR_10)
{
    FUNC_1(VAR_0);

    if ((VAR_7 == 0 && VAR_8 == 0) && (VAR_6 != VAR_1)) {
        *VAR_10 = 0;
        return VAR_2;
    }

    if (VAR_10 == ((void*)0)) {
        return VAR_3;
    }

    uint16_t VAR_11 = FUNC_0(VAR_4, VAR_5);
    return FUNC_2(VAR_11, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
}
