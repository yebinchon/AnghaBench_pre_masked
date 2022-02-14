
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ hci_status; scalar_t__ tx_power; int status; } ;
typedef TYPE_2__ tBTM_INQ_TXPWR_RESULTS ;
typedef int (* tBTM_CMPL_CB ) (TYPE_2__*) ;
typedef int UINT8 ;
struct TYPE_6__ {int (* p_txpwer_cmpl_cb ) (TYPE_2__*) ;int txpwer_timer; } ;
struct TYPE_8__ {TYPE_1__ devcb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__,int *) ;
 TYPE_5__ VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;

void FUNC_4(UINT8 *VAR_4)
{
    tBTM_CMPL_CB *VAR_5 = &VAR_3.devcb.p_txpwer_cmpl_cb;
    tBTM_INQ_TXPWR_RESULTS VAR_6;

    FUNC_2 (&VAR_3.devcb.txpwer_timer);

    VAR_3.devcb.p_txpwer_cmpl_cb = ((void*)0);

    if (VAR_5) {
        FUNC_1 (VAR_6.hci_status, VAR_4);

        if (VAR_6.hci_status == VAR_2) {
            VAR_6.status = VAR_1;

            FUNC_1 (VAR_6.tx_power, VAR_4);
            FUNC_0 ("BTM INQ TX POWER Complete: tx_power %d, hci status 0x%02x\n",
                             VAR_6.tx_power, VAR_6.hci_status);
        } else {
            VAR_6.status = VAR_0;
        }

        (*VAR_5)(&VAR_6);
    }

}
