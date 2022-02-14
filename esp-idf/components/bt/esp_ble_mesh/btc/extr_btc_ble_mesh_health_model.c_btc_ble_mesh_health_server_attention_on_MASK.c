
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8_t ;
struct bt_mesh_model {int dummy; } ;
typedef int esp_ble_mesh_model_t ;
struct TYPE_4__ {int time; int * model; } ;
struct TYPE_5__ {TYPE_1__ attention_on; int member_0; } ;
typedef TYPE_2__ esp_ble_mesh_health_server_cb_param_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;

void FUNC_1(struct bt_mesh_model *VAR_1, u8_t VAR_2)
{
    esp_ble_mesh_health_server_cb_param_t VAR_3 = {0};

    VAR_3.attention_on.model = (esp_ble_mesh_model_t *)VAR_1;
    VAR_3.attention_on.time = VAR_2;

    FUNC_0(&VAR_3, VAR_0);
}
