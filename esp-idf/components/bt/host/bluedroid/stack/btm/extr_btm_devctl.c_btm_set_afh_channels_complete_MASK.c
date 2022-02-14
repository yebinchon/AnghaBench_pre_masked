
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int hci_status; int status; } ;
typedef TYPE_2__ tBTM_SET_AFH_CHANNELS_RESULTS ;
typedef int (* tBTM_CMPL_CB ) (TYPE_2__*) ;
typedef int UINT8 ;
struct TYPE_6__ {int (* p_afh_channels_cmpl_cb ) (TYPE_2__*) ;int afh_channels_timer; } ;
struct TYPE_8__ {TYPE_1__ devcb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int,int *) ;
 TYPE_5__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3 (UINT8 *VAR_4)
{
    tBTM_CMPL_CB *VAR_5 = &VAR_3.devcb.p_afh_channels_cmpl_cb;
    tBTM_SET_AFH_CHANNELS_RESULTS VAR_6;

    FUNC_1 (&VAR_3.devcb.afh_channels_timer);


    VAR_3.devcb.p_afh_channels_cmpl_cb = ((void*)0);

    if (VAR_5) {
        FUNC_0 (VAR_6.hci_status, VAR_4);

        switch (VAR_6.hci_status){
            case 128:
                VAR_6.status = VAR_2;
                break;
            case 129:
            case 130:
                VAR_6.status = VAR_1;
                break;
            default:
                VAR_6.status = VAR_0;
                break;
        }
        (*VAR_5)(&VAR_6);
    }
}
