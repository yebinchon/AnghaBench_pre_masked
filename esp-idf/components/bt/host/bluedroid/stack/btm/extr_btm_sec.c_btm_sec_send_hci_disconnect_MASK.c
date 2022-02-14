
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_3__ {int sec_state; scalar_t__ hci_handle; scalar_t__ ble_hci_handle; scalar_t__ rs_disc_pending; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;



 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static tBTM_STATUS FUNC_3 (tBTM_SEC_DEV_REC *VAR_5, UINT8 VAR_6, UINT16 VAR_7)
{
    UINT8 VAR_8 = VAR_5->sec_state;
    tBTM_STATUS VAR_9 = VAR_0;

    FUNC_1 ("btm_sec_send_hci_disconnect:  handle:0x%x, reason=0x%x\n",
                     VAR_7, VAR_6);


    switch (VAR_8) {
    case 130:
        if (VAR_7 == VAR_5->hci_handle) {
            return VAR_9;
        }

        VAR_5->sec_state = 128;
        break;


    case 129:
        if (VAR_7 == VAR_5->ble_hci_handle) {
            return VAR_9;
        }

        VAR_5->sec_state = 128;
        break;

    case 128:
        return VAR_9;


    default:
        VAR_5->sec_state = (VAR_7 == VAR_5->hci_handle) ?
                               130 : 129;

        break;
    }


    if (VAR_5->rs_disc_pending == VAR_3 && VAR_5->hci_handle == VAR_7) {
        FUNC_0("RS in progress - Set DISC Pending flag in btm_sec_send_hci_disconnect to delay disconnect\n");
        VAR_5->rs_disc_pending = VAR_2;
        VAR_9 = VAR_4;
    }

    else if (!FUNC_2 (VAR_7, VAR_6)) {

        VAR_5->sec_state = VAR_8;
        VAR_9 = VAR_1;
    }

    return VAR_9;
}
