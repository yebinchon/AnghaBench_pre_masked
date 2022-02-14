
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int pending_ind_q; int pending_enc_clcb; } ;
typedef TYPE_1__ tGATT_TCB ;
struct TYPE_12__ {int gatt_if; } ;
typedef TYPE_2__ tGATT_REG ;
typedef int tBT_TRANSPORT ;
typedef int tBLE_ADDR_TYPE ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int *) ;
 TYPE_1__* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;

BOOLEAN FUNC_9 (tGATT_REG *VAR_5, BD_ADDR VAR_6, tBLE_ADDR_TYPE VAR_7, tBT_TRANSPORT VAR_8)
{
    BOOLEAN VAR_9 = VAR_1;
    tGATT_TCB *VAR_10;
    UINT8 VAR_11;

    if ((VAR_10 = FUNC_4(VAR_6, VAR_8)) != ((void*)0)) {
        VAR_9 = VAR_4;
        VAR_11 = FUNC_5(VAR_10);


        if (VAR_11 == VAR_3 && FUNC_6(VAR_10) == 0 &&
                VAR_8 == VAR_0 ) {
            if (!FUNC_3(VAR_6, VAR_7, VAR_10, VAR_8)) {
                VAR_9 = VAR_1;
            }
        } else if (VAR_11 == VAR_2) {

            VAR_9 = VAR_1;
        }
    } else {
        if ((VAR_10 = FUNC_2(VAR_6, VAR_8)) != ((void*)0)) {
            if (!FUNC_3(VAR_6, VAR_7, VAR_10, VAR_8)) {
                FUNC_0("gatt_connect failed");
                FUNC_1(VAR_10->pending_enc_clcb, ((void*)0));
                FUNC_1(VAR_10->pending_ind_q, ((void*)0));
                FUNC_8(VAR_10, 0, sizeof(tGATT_TCB));
            } else {
                VAR_9 = VAR_4;
            }
        } else {
            VAR_9 = 0;
            FUNC_0("Max TCB for gatt_if [%d] reached.", VAR_5->gatt_if);
        }
    }

    if (VAR_9) {
        FUNC_7(VAR_5->gatt_if, VAR_10, VAR_4, VAR_1);
    }

    return VAR_9;
}
