
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ hci_status; scalar_t__ rssi; int status; int rem_bda; } ;
typedef TYPE_2__ tBTM_RSSI_RESULTS ;
typedef int (* tBTM_CMPL_CB ) (TYPE_2__*) ;
struct TYPE_9__ {scalar_t__ hci_handle; int remote_addr; scalar_t__ in_use; } ;
typedef TYPE_4__ tACL_CONN ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_7__ {int (* p_rssi_cmpl_cb ) (TYPE_2__*) ;int rssi_timer; } ;
struct TYPE_10__ {TYPE_1__ devcb; TYPE_4__* acl_db; } ;


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

void FUNC_6 (UINT8 *VAR_6)
{
    tBTM_CMPL_CB *VAR_7 = &VAR_5.devcb.p_rssi_cmpl_cb;
    tBTM_RSSI_RESULTS VAR_8;
    UINT16 VAR_9;
    tACL_CONN *VAR_10 = &VAR_5.acl_db[0];
    UINT16 VAR_11;
    FUNC_0 ("btm_read_rssi_complete\n");
    FUNC_3 (&VAR_5.devcb.rssi_timer);


    VAR_5.devcb.p_rssi_cmpl_cb = ((void*)0);

    if (VAR_7) {
        FUNC_2 (VAR_8.hci_status, VAR_6);

        if (VAR_8.hci_status == VAR_3) {
            VAR_8.status = VAR_2;

            FUNC_1 (VAR_9, VAR_6);

            FUNC_2 (VAR_8.rssi, VAR_6);
            FUNC_0 ("BTM RSSI Complete: rssi %d, hci status 0x%02x\n",
                             VAR_8.rssi, VAR_8.hci_status);


            for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++, VAR_10++) {
                if ((VAR_10->in_use) && (VAR_9 == VAR_10->hci_handle)) {
                    FUNC_4 (VAR_8.rem_bda, VAR_10->remote_addr, VAR_0);
                    break;
                }
            }
        } else {
            VAR_8.status = VAR_1;
        }

        (*VAR_7)(&VAR_8);
    }
}
