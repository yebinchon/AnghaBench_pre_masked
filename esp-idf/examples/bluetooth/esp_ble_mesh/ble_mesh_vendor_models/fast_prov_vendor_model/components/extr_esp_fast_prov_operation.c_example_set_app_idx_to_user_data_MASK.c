
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int app_idx; } ;
typedef TYPE_1__ example_fast_prov_server_t ;
typedef int esp_err_t ;
struct TYPE_5__ {scalar_t__ user_data; } ;
typedef TYPE_2__ esp_ble_mesh_model_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static esp_err_t FUNC_2(uint16_t VAR_4)
{
    example_fast_prov_server_t *VAR_5 = ((void*)0);
    esp_ble_mesh_model_t *VAR_6 = ((void*)0);

    VAR_6 = FUNC_1(FUNC_0(),
                                   VAR_1, VAR_0);
    if (!VAR_6) {
        return VAR_2;
    }

    VAR_5 = (example_fast_prov_server_t *)(VAR_6->user_data);
    if (!VAR_5) {
        return VAR_2;
    }

    VAR_5->app_idx = VAR_4;
    return VAR_3;
}
