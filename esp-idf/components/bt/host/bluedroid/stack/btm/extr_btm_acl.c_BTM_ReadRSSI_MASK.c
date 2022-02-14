
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tBT_TRANSPORT ;
typedef void* tBTM_STATUS ;
struct TYPE_11__ {void* status; } ;
typedef TYPE_2__ tBTM_RSSI_RESULTS ;
typedef int (* tBTM_CMPL_CB ) (TYPE_2__*) ;
struct TYPE_12__ {int hci_handle; } ;
typedef TYPE_4__ tACL_CONN ;
struct TYPE_10__ {int rssi_timer; int (* p_rssi_cmpl_cb ) (TYPE_2__*) ;} ;
struct TYPE_13__ {TYPE_1__ devcb; } ;
typedef int * BD_ADDR ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ) ;
 void* VAR_4 ;
 int VAR_5 ;
 TYPE_4__* FUNC_1 (int *,int ) ;
 TYPE_7__ VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

tBTM_STATUS FUNC_7 (BD_ADDR VAR_7, tBT_TRANSPORT VAR_8, tBTM_CMPL_CB *VAR_9)
{
    tACL_CONN *VAR_10;

    FUNC_0 ("BTM_ReadRSSI: RemBdAddr: %02x%02x%02x%02x%02x%02x\n",
                   VAR_7[0], VAR_7[1], VAR_7[2],
                   VAR_7[3], VAR_7[4], VAR_7[5]);
    tBTM_RSSI_RESULTS VAR_11;

    if (VAR_6.devcb.p_rssi_cmpl_cb) {
        VAR_11.status = VAR_0;
        (*VAR_9)(&VAR_11);
        return (VAR_0);
    }

    VAR_10 = FUNC_1(VAR_7, VAR_8);
    if (VAR_10 != (tACL_CONN *)((void*)0)) {
        FUNC_3 (&VAR_6.devcb.rssi_timer, VAR_5,
                         VAR_2);

        VAR_6.devcb.p_rssi_cmpl_cb = *VAR_9;

        if (!FUNC_2 (VAR_10->hci_handle)) {
            VAR_6.devcb.p_rssi_cmpl_cb = ((void*)0);
            FUNC_4 (&VAR_6.devcb.rssi_timer);
            VAR_11.status = VAR_3;
            (*VAR_9)(&VAR_11);
            return (VAR_3);
        } else {
            return (VAR_1);
        }
    }


    return (VAR_4);
}
