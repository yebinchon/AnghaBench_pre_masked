
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int esp_ble_mesh_model_t ;
struct TYPE_4__ {int err_code; int * model; } ;
struct TYPE_5__ {TYPE_1__ model_publish_comp; int member_0; } ;
typedef TYPE_2__ esp_ble_mesh_model_cb_param_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_1(esp_ble_mesh_model_t *VAR_1, int VAR_2)
{
    esp_ble_mesh_model_cb_param_t VAR_3 = {0};

    VAR_3.model_publish_comp.err_code = VAR_2;
    VAR_3.model_publish_comp.model = VAR_1;

    FUNC_0(&VAR_3, VAR_0);
    return;
}
