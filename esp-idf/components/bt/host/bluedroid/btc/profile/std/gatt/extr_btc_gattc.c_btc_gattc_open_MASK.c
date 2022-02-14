
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTA_GATT_TRANSPORT ;
struct TYPE_4__ {int is_direct; int remote_addr_type; int remote_bda; int gattc_if; } ;
struct TYPE_5__ {TYPE_1__ open; } ;
typedef TYPE_2__ btc_ble_gattc_args_t ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(btc_ble_gattc_args_t *VAR_1)
{
    tBTA_GATT_TRANSPORT VAR_2 = VAR_0;
    FUNC_0(VAR_1->open.gattc_if, VAR_1->open.remote_bda, VAR_1->open.remote_addr_type, VAR_1->open.is_direct, VAR_2);
}
