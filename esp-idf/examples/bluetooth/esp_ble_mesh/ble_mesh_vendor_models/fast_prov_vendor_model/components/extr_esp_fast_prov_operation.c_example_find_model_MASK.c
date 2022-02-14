
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int esp_ble_mesh_model_t ;
typedef int esp_ble_mesh_elem_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int ,int ) ;

esp_ble_mesh_model_t *FUNC_4(uint16_t VAR_1, uint16_t VAR_2,
        uint16_t VAR_3)
{
    esp_ble_mesh_elem_t *VAR_4 = ((void*)0);

    if (!FUNC_0(VAR_1)) {
        return ((void*)0);
    }

    VAR_4 = FUNC_1(VAR_1);
    if (!VAR_4) {
        return ((void*)0);
    }

    if (VAR_3 == VAR_0) {
        return FUNC_2(VAR_4, VAR_2);
    } else {
        return FUNC_3(VAR_4, VAR_3, VAR_2);
    }
}
