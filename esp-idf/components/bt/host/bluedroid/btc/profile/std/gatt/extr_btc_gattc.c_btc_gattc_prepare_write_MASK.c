
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int auth_req; int value; int value_len; int offset; int handle; int conn_id; } ;
struct TYPE_5__ {TYPE_1__ prep_write; } ;
typedef TYPE_2__ btc_ble_gattc_args_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(btc_ble_gattc_args_t *VAR_0)
{
    FUNC_0(VAR_0->prep_write.conn_id,
                           VAR_0->prep_write.handle,
                           VAR_0->prep_write.offset,
                           VAR_0->prep_write.value_len,
                           VAR_0->prep_write.value,
                           VAR_0->prep_write.auth_req);
}
