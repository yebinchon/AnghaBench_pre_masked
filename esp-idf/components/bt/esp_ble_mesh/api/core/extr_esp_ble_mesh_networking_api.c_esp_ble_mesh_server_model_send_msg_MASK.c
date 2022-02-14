
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int esp_err_t ;
typedef int esp_ble_mesh_msg_ctx_t ;
typedef int esp_ble_mesh_model_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ,int ,int ,int *,int ,int,int ) ;

esp_err_t FUNC_1(esp_ble_mesh_model_t *VAR_3,
        esp_ble_mesh_msg_ctx_t *VAR_4, uint32_t VAR_5,
        uint16_t VAR_6, uint8_t *VAR_7)
{
    if (!VAR_3 || !VAR_4) {
        return VAR_1;
    }
    return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_0,
                                   VAR_6, VAR_7, 0, 0, VAR_2);
}
