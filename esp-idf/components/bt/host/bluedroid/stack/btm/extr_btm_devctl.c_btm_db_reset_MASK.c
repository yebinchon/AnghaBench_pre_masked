
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTM_STATUS ;
typedef void tBTM_RSSI_RESULTS ;
typedef int (* tBTM_CMPL_CB ) (void*) ;
struct TYPE_3__ {int (* p_rssi_cmpl_cb ) (void*) ;int (* p_rln_cmpl_cb ) (void*) ;} ;
struct TYPE_4__ {TYPE_1__ devcb; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static void FUNC_3 (void)
{
    tBTM_CMPL_CB *VAR_2;
    tBTM_STATUS VAR_3 = VAR_0;

    FUNC_0();

    if (VAR_1.devcb.p_rln_cmpl_cb) {
        VAR_2 = &VAR_1.devcb.p_rln_cmpl_cb;
        VAR_1.devcb.p_rln_cmpl_cb = ((void*)0);

        if (VAR_2) {
            (*VAR_2)((void *) ((void*)0));
        }
    }

    if (VAR_1.devcb.p_rssi_cmpl_cb) {
        VAR_2 = &VAR_1.devcb.p_rssi_cmpl_cb;
        VAR_1.devcb.p_rssi_cmpl_cb = ((void*)0);

        if (VAR_2) {
            (*VAR_2)((tBTM_RSSI_RESULTS *) &VAR_3);
        }
    }
}
