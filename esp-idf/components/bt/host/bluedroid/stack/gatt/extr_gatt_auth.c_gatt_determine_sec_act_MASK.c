
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ transport; int peer_bda; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef scalar_t__ tGATT_SEC_ACTION ;
struct TYPE_5__ {int auth_req; scalar_t__ operation; scalar_t__ op_subtype; TYPE_1__* p_tcb; } ;
typedef TYPE_2__ tGATT_CLCB ;
typedef int tGATT_AUTH_REQ ;
typedef scalar_t__ tBTM_BLE_SEC_REQ_ACT ;
typedef int UINT8 ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

 int VAR_9 ;



 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (int ,int,scalar_t__*) ;

tGATT_SEC_ACTION FUNC_3(tGATT_CLCB *VAR_18 )
{
    tGATT_SEC_ACTION VAR_19 = VAR_14;
    UINT8 VAR_20;
    tGATT_TCB *VAR_21 = VAR_18->p_tcb;
    tGATT_AUTH_REQ VAR_22 = VAR_18->auth_req;
    BOOLEAN VAR_23 = VAR_7;
    BOOLEAN VAR_24 = VAR_7;
    BOOLEAN VAR_25 = VAR_7;

    UINT8 VAR_26;
    tBTM_BLE_SEC_REQ_ACT VAR_27 = VAR_2;

    if (VAR_22 == VAR_9 ) {
        return VAR_19;
    }

    FUNC_0(VAR_21->peer_bda, &VAR_20, VAR_18->p_tcb->transport);

    FUNC_2(VAR_21->peer_bda, VAR_22, &VAR_27);


    if (

    VAR_27 == VAR_0 &&

            VAR_22 != VAR_9) {
        return VAR_13;
    }

    if (VAR_20 & (VAR_3 | VAR_5)) {
        if (VAR_20 & VAR_3) {
            VAR_23 = VAR_17;
        }

        VAR_24 = VAR_17;

        if (VAR_20 & VAR_4) {
            VAR_25 = VAR_17;
        }
    }


    switch (VAR_22) {
    case 131:
    case 129:
        if (!VAR_25) {
            VAR_19 = VAR_11;
        }
        break;

    case 130:
    case 128:
        if (!VAR_24) {
            VAR_19 = VAR_12;
        }
        break;
    default:
        break;
    }


    if (VAR_19 == VAR_14) {
        if (VAR_21->transport == VAR_6 &&
                (VAR_18->operation == VAR_8) &&
                (VAR_18->op_subtype == VAR_16)) {


            if (!VAR_23) {

                FUNC_1(VAR_21->peer_bda, &VAR_26);

                if (

                    (VAR_26 & VAR_1) &&

                        ((VAR_22 == 128) ||
                         (VAR_22 == 129))) {
                    VAR_19 = VAR_15;
                } else {
                    VAR_19 = VAR_10;
                }
            }
        } else {
            if (!VAR_23) {
                VAR_19 = VAR_10;
            }
        }

    }

    return VAR_19 ;

}
