
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int passkey; int bd_addr; } ;
struct TYPE_5__ {scalar_t__ accept; } ;
struct TYPE_7__ {TYPE_2__ ble_passkey_reply; TYPE_1__ pin_reply; } ;
typedef TYPE_3__ tBTA_DM_MSG ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1 (tBTA_DM_MSG *VAR_2)
{
    if (VAR_2->pin_reply.accept) {
        FUNC_0(VAR_2->ble_passkey_reply.bd_addr, VAR_1, VAR_2->ble_passkey_reply.passkey);
    } else {
        FUNC_0(VAR_2->ble_passkey_reply.bd_addr, VAR_0, VAR_2->ble_passkey_reply.passkey);
    }

}
