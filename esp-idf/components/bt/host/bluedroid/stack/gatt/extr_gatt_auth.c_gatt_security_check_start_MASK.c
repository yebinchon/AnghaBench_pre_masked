
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int transport; int peer_bda; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef int tGATT_SEC_ACTION ;
struct TYPE_13__ {TYPE_1__* p_tcb; } ;
typedef TYPE_2__ tGATT_CLCB ;
typedef int tBTM_STATUS ;
typedef int tBTM_BLE_SEC_ACT ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;

 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (scalar_t__,TYPE_2__*,int) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_2__*) ;

BOOLEAN FUNC_11(tGATT_CLCB *VAR_7)
{
    tGATT_TCB *VAR_8 = VAR_7->p_tcb;
    tGATT_SEC_ACTION VAR_9;
    tBTM_BLE_SEC_ACT VAR_10;
    BOOLEAN VAR_11 = VAR_5;

    tBTM_STATUS VAR_12;

    tGATT_SEC_ACTION VAR_13 = FUNC_6(VAR_8);

    VAR_9 = FUNC_5(VAR_7);

    if (VAR_13 == VAR_4) {
        FUNC_9(VAR_8, VAR_9);
    }

    switch (VAR_9 ) {
    case 128:

        FUNC_1("gatt_security_check_start: Do data signing");
        FUNC_10(VAR_7);

        break;
    case 132:
    case 130:
    case 131:
        if (VAR_13 < 132) {
            FUNC_1("gatt_security_check_start: Encrypt now or key upgreade first");
            FUNC_4(VAR_9, &VAR_10);

            VAR_12 = FUNC_0(VAR_8->peer_bda, VAR_8->transport , VAR_6, &VAR_10);
            if ( (VAR_12 != VAR_1) && (VAR_12 != VAR_0)) {
                FUNC_2("gatt_security_check_start BTM_SetEncryption failed btm_status=%d", VAR_12);
                VAR_11 = VAR_2;
            }

        }
        if (VAR_11) {
            FUNC_3 (VAR_8, VAR_7);
        }
        break;
    case 129:
        FUNC_3 (VAR_8, VAR_7);

        break;
    default:
        FUNC_7(VAR_5, VAR_7, VAR_9);
        break;
    }

    if (VAR_11 == VAR_2) {
        FUNC_9(VAR_8, VAR_4);
        FUNC_8(VAR_8, VAR_3);
    }

    return VAR_11;
}
