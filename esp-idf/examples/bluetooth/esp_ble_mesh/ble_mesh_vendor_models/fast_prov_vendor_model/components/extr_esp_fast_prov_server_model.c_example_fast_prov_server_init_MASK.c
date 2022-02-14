
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int gatt_proxy_enable_timer; int disable_fast_prov_timer; TYPE_2__* model; } ;
typedef TYPE_1__ example_fast_prov_server_t ;
typedef int esp_err_t ;
struct TYPE_5__ {scalar_t__ user_data; } ;
typedef TYPE_2__ esp_ble_mesh_model_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;

esp_err_t FUNC_1(esp_ble_mesh_model_t *VAR_4)
{
    example_fast_prov_server_t *VAR_5 = ((void*)0);

    if (!VAR_4 || !VAR_4->user_data) {
        return VAR_0;
    }

    VAR_5 = (example_fast_prov_server_t *)VAR_4->user_data;
    VAR_5->model = VAR_4;

    FUNC_0(&VAR_5->disable_fast_prov_timer, VAR_2);
    FUNC_0(&VAR_5->gatt_proxy_enable_timer, VAR_3);

    return VAR_1;
}
