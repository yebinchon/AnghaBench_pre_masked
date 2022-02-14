
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ hci_status; scalar_t__ tx_power; int status; int rem_bda; } ;
typedef TYPE_2__ tBTM_TX_POWER_RESULTS ;
typedef int (* tBTM_CMPL_CB ) (TYPE_2__*) ;
struct TYPE_9__ {scalar_t__ hci_handle; int remote_addr; scalar_t__ in_use; } ;
typedef TYPE_4__ tACL_CONN ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_7__ {int read_tx_pwr_addr; int (* p_tx_power_cmpl_cb ) (TYPE_2__*) ;int tx_power_timer; } ;
struct TYPE_10__ {TYPE_1__ devcb; TYPE_4__* acl_db; } ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (scalar_t__,int *) ;
 TYPE_6__ VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;

void FUNC_6 (UINT8 *VAR_6, BOOLEAN VAR_7)
{
    tBTM_CMPL_CB *VAR_8 = &VAR_5.devcb.p_tx_power_cmpl_cb;
    tBTM_TX_POWER_RESULTS VAR_9;
    UINT16 VAR_10;
    tACL_CONN *VAR_11 = &VAR_5.acl_db[0];
    UINT16 VAR_12;
    FUNC_0 ("btm_read_tx_power_complete\n");
    FUNC_3 (&VAR_5.devcb.tx_power_timer);


    VAR_5.devcb.p_tx_power_cmpl_cb = ((void*)0);

    if (VAR_8) {
        FUNC_2 (VAR_9.hci_status, VAR_6);

        if (VAR_9.hci_status == VAR_3) {
            VAR_9.status = VAR_2;

            if (!VAR_7) {
                FUNC_1 (VAR_10, VAR_6);
                FUNC_2 (VAR_9.tx_power, VAR_6);


                for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++, VAR_11++) {
                    if ((VAR_11->in_use) && (VAR_10 == VAR_11->hci_handle)) {
                        FUNC_4 (VAR_9.rem_bda, VAR_11->remote_addr, VAR_0);
                        break;
                    }
                }
            }

            else {
                FUNC_2 (VAR_9.tx_power, VAR_6);
                FUNC_4(VAR_9.rem_bda, VAR_5.devcb.read_tx_pwr_addr, VAR_0);
            }

            FUNC_0 ("BTM TX power Complete: tx_power %d, hci status 0x%02x\n",
                             VAR_9.tx_power, VAR_9.hci_status);
        } else {
            VAR_9.status = VAR_1;
        }

        (*VAR_8)(&VAR_9);
    }
}
