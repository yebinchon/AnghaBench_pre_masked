
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pending_enc_clcb; int sec_act; } ;
typedef TYPE_1__ tGATT_TCB ;
struct TYPE_7__ {int p_clcb; } ;
typedef TYPE_2__ tGATT_PENDING_ENC_CLCB ;
typedef int tBT_TRANSPORT ;
typedef scalar_t__ tBTM_STATUS ;
typedef int UINT8 ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int FUNC_0 (int ,int*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_5 ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 size_t FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_2__*) ;

void FUNC_11(BD_ADDR VAR_6, tBT_TRANSPORT VAR_7, void *VAR_8, tBTM_STATUS VAR_9)
{
    tGATT_TCB *VAR_10;
    UINT8 VAR_11;
    BOOLEAN VAR_12 = VAR_2;
    FUNC_3(VAR_8);

    FUNC_1("gatt_enc_cmpl_cback");
    if ((VAR_10 = FUNC_6(VAR_6, VAR_7)) != ((void*)0)) {
        if (FUNC_7(VAR_10) == VAR_4) {
            return;
        }
        tGATT_PENDING_ENC_CLCB *VAR_13 =
            (tGATT_PENDING_ENC_CLCB *)FUNC_4(VAR_10->pending_enc_clcb, 0);
        if (VAR_13 != ((void*)0)) {
            if (VAR_9 == VAR_1) {
                if (FUNC_7(VAR_10) == VAR_3 ) {
                    FUNC_0(VAR_6, &VAR_11, VAR_7);

                    if (VAR_11 & VAR_0) {
                        VAR_12 = VAR_5;
                    }
                } else {
                    VAR_12 = VAR_5;
                }
            }
            FUNC_8(VAR_12 , VAR_13->p_clcb, VAR_10->sec_act);
            FUNC_10(VAR_13);

            for (size_t VAR_14 = FUNC_5(VAR_10->pending_enc_clcb);
                 VAR_14 > 0; VAR_14--) {
                VAR_13 = (tGATT_PENDING_ENC_CLCB *)FUNC_4(VAR_10->pending_enc_clcb, 0);
                if (VAR_13 != ((void*)0)) {
                    FUNC_9(VAR_13->p_clcb);
                    FUNC_10(VAR_13);
                } else {
                    break;
                }
            }
        } else {
            FUNC_2("Unknown operation encryption completed");
        }
    } else {
        FUNC_2("enc callback for unknown bd_addr");
    }
}
