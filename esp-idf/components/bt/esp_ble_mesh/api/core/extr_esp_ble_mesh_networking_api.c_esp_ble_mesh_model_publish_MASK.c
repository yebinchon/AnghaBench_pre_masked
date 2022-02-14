
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int esp_err_t ;
struct TYPE_6__ {TYPE_1__* pub; } ;
typedef TYPE_2__ esp_ble_mesh_model_t ;
typedef int esp_ble_mesh_dev_role_t ;
struct TYPE_5__ {int msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int *,int ,int ,int ,int *,int ,int,int ) ;

esp_err_t FUNC_1(esp_ble_mesh_model_t *VAR_2, uint32_t VAR_3,
                                     uint16_t VAR_4, uint8_t *VAR_5,
                                     esp_ble_mesh_dev_role_t VAR_6)
{
    if (!VAR_2 || !VAR_2->pub || !VAR_2->pub->msg) {
        return VAR_1;
    }
    return FUNC_0(VAR_2, ((void*)0), VAR_3, VAR_0,
                                   VAR_4, VAR_5, 0, 0, VAR_6);
}
