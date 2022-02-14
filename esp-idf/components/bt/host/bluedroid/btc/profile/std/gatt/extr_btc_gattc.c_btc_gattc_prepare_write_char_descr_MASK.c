
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int p_value; int len; } ;
typedef TYPE_2__ tBTA_GATT_UNFMT ;
struct TYPE_6__ {int auth_req; int offset; int handle; int conn_id; int value; int value_len; } ;
struct TYPE_8__ {TYPE_1__ prep_write_descr; } ;
typedef TYPE_3__ btc_ble_gattc_args_t ;


 int FUNC_0 (int ,int ,int ,TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_1(btc_ble_gattc_args_t *VAR_0)
{
    tBTA_GATT_UNFMT VAR_1;

    VAR_1.len = VAR_0->prep_write_descr.value_len;
    VAR_1.p_value = VAR_0->prep_write_descr.value;
    FUNC_0(VAR_0->prep_write_descr.conn_id,
                                    VAR_0->prep_write_descr.handle,
                                    VAR_0->prep_write_descr.offset,
                                    &VAR_1,
                                    VAR_0->prep_write_descr.auth_req);
}
