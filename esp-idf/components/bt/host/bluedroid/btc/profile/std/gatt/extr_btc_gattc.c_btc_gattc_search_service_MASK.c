
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBT_UUID ;
struct TYPE_4__ {int conn_id; int filter_uuid; scalar_t__ filter_uuid_enable; } ;
struct TYPE_5__ {TYPE_1__ search_srvc; } ;
typedef TYPE_2__ btc_ble_gattc_args_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(btc_ble_gattc_args_t *VAR_0)
{
    tBT_UUID VAR_1;

    if (VAR_0->search_srvc.filter_uuid_enable) {
        FUNC_1(&VAR_1, &VAR_0->search_srvc.filter_uuid);
        FUNC_0(VAR_0->search_srvc.conn_id, &VAR_1);
    } else {
        FUNC_0(VAR_0->search_srvc.conn_id, ((void*)0));
    }
}
