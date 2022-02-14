
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int esp_gatt_status_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,scalar_t__*,int **) ;

esp_gatt_status_t FUNC_2(uint16_t VAR_3, uint16_t *VAR_4, const uint8_t **VAR_5)
{
    FUNC_0(VAR_0);

    if (VAR_3 == VAR_1) {
        *VAR_4 = 0;
        return VAR_2;
    }

    return FUNC_1(VAR_3, VAR_4, (uint8_t **)VAR_5);
}
