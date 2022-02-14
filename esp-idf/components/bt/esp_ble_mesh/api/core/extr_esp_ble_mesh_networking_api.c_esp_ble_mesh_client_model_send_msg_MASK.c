
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int int32_t ;
typedef int esp_err_t ;
typedef int esp_ble_mesh_msg_ctx_t ;
typedef int esp_ble_mesh_model_t ;
typedef int esp_ble_mesh_dev_role_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int ,int ,int *,int ,int,int ) ;

esp_err_t FUNC_1(esp_ble_mesh_model_t *VAR_2,
        esp_ble_mesh_msg_ctx_t *VAR_3, uint32_t VAR_4,
        uint16_t VAR_5, uint8_t *VAR_6, int32_t VAR_7,
        bool VAR_8, esp_ble_mesh_dev_role_t VAR_9)
{
    if (!VAR_2 || !VAR_3) {
        return VAR_1;
    }
    return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_0,
                                   VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
}
