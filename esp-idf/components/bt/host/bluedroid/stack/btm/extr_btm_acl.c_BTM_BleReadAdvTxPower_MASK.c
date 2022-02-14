
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {void* status; } ;
typedef TYPE_2__ tBTM_TX_POWER_RESULTS ;
typedef void* tBTM_STATUS ;
typedef int (* tBTM_CMPL_CB ) (TYPE_2__*) ;
struct TYPE_8__ {int tx_power_timer; int (* p_tx_power_cmpl_cb ) (TYPE_2__*) ;} ;
struct TYPE_10__ {TYPE_1__ devcb; } ;
typedef int BOOLEAN ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 TYPE_6__ VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

tBTM_STATUS FUNC_5(tBTM_CMPL_CB *VAR_6)
{
    BOOLEAN VAR_7;
    tBTM_TX_POWER_RESULTS VAR_8;

    if (VAR_5.devcb.p_tx_power_cmpl_cb) {
        VAR_8.status = VAR_0;
        (*VAR_6)(&VAR_8);
        return (VAR_0);
    }

    VAR_5.devcb.p_tx_power_cmpl_cb = *VAR_6;
    FUNC_1 (&VAR_5.devcb.tx_power_timer, VAR_4,
                         VAR_2);
    VAR_7 = FUNC_0();

    if(!VAR_7) {
        VAR_5.devcb.p_tx_power_cmpl_cb = ((void*)0);
        FUNC_2 (&VAR_5.devcb.tx_power_timer);
        VAR_8.status = VAR_3;
        (*VAR_6)(&VAR_8);
        return (VAR_3);
    } else {
        return VAR_1;
    }
}
