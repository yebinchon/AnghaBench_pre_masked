
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int timeout; int latency; int max_int; int min_int; int bd_addr; } ;
struct TYPE_5__ {TYPE_1__ ble_update_conn_params; } ;
typedef TYPE_2__ tBTA_DM_MSG ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;

void FUNC_2 (tBTA_DM_MSG *VAR_0)
{
    if (!FUNC_1(VAR_0->ble_update_conn_params.bd_addr,
                                  VAR_0->ble_update_conn_params.min_int,
                                  VAR_0->ble_update_conn_params.max_int,
                                  VAR_0->ble_update_conn_params.latency,
                                  VAR_0->ble_update_conn_params.timeout)) {
        FUNC_0("Update connection parameters failed!");
    }
}
