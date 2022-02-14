
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int tBTM_LE_KEY_VALUE ;
struct TYPE_9__ {TYPE_2__* p_key_value; } ;
struct TYPE_10__ {TYPE_1__ ble_key; } ;
typedef TYPE_2__ tBTA_DM_SEC ;
struct TYPE_11__ {scalar_t__ act; } ;
typedef TYPE_3__ btc_msg_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int) ;
 TYPE_2__* FUNC_2 (int) ;

void FUNC_3(btc_msg_t *VAR_1, void *VAR_2, void *VAR_3)
{
    tBTA_DM_SEC *VAR_4 = (tBTA_DM_SEC *)VAR_2;
    tBTA_DM_SEC *VAR_5 = (tBTA_DM_SEC *)VAR_3;

    if (!VAR_5) {
        return;
    }

    FUNC_0(VAR_4);
    FUNC_1(VAR_4, VAR_5, sizeof(tBTA_DM_SEC));

    if (VAR_1->act == VAR_0) {
        VAR_4->ble_key.p_key_value = FUNC_2(sizeof(tBTM_LE_KEY_VALUE));
        FUNC_0(VAR_5->ble_key.p_key_value);
        FUNC_0(VAR_4->ble_key.p_key_value);
        FUNC_1(VAR_4->ble_key.p_key_value, VAR_5->ble_key.p_key_value, sizeof(tBTM_LE_KEY_VALUE));
    }
}
