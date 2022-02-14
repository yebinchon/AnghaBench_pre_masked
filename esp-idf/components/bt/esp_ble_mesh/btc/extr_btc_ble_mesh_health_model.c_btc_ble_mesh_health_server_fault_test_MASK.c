
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8_t ;
typedef int u16_t ;
struct bt_mesh_model {int dummy; } ;
typedef int esp_ble_mesh_model_t ;
struct TYPE_4__ {int company_id; int test_id; int * model; } ;
struct TYPE_5__ {TYPE_1__ fault_test; int member_0; } ;
typedef TYPE_2__ esp_ble_mesh_health_server_cb_param_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;

void FUNC_1(struct bt_mesh_model *VAR_1, u8_t VAR_2, u16_t VAR_3)
{
    esp_ble_mesh_health_server_cb_param_t VAR_4 = {0};

    VAR_4.fault_test.model = (esp_ble_mesh_model_t *)VAR_1;
    VAR_4.fault_test.test_id = VAR_2;
    VAR_4.fault_test.company_id = VAR_3;

    FUNC_0(&VAR_4, VAR_0);
}
