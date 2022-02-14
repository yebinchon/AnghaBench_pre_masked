
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int protocomm_t ;
struct TYPE_3__ {int ble; } ;
typedef TYPE_1__ esp_local_ctrl_transport_config_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static esp_err_t FUNC_2(protocomm_t *VAR_2, const esp_local_ctrl_transport_config_t *VAR_3)
{
    if (!VAR_3 || !VAR_3->ble) {
        FUNC_0(VAR_1, "NULL configuration provided");
        return VAR_0;
    }
    return FUNC_1(VAR_2, VAR_3->ble);
}
