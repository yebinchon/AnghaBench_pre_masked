
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTM_STATUS ;
typedef int tBTM_INQ_RESULTS_CB ;
struct TYPE_3__ {int inq_active; int inq_counter; scalar_t__ inqfilt_active; int pending_filt_complete_event; int * p_inq_results_cb; } ;
typedef TYPE_1__ tBTM_INQUIRY_VAR_ST ;
struct TYPE_4__ {TYPE_1__ btm_inq_vars; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_2 () ;

tBTM_STATUS FUNC_3(void)
{
    tBTM_INQUIRY_VAR_ST *VAR_7 = &VAR_6.btm_inq_vars;
    tBTM_STATUS VAR_8 = VAR_3;
    FUNC_1 ("BTM_CancelPeriodicInquiry called\n");


    if (!FUNC_0()) {
        return (VAR_4);
    }


    if (VAR_6.btm_inq_vars.inq_active & VAR_2) {
        VAR_6.btm_inq_vars.inq_active = VAR_0;
        VAR_6.btm_inq_vars.p_inq_results_cb = (tBTM_INQ_RESULTS_CB *) ((void*)0);

        if (!FUNC_2 ()) {
            VAR_8 = VAR_1;
        }



        if (VAR_7->inqfilt_active) {
            VAR_7->pending_filt_complete_event++;
        }

        VAR_7->inqfilt_active = VAR_5;
        VAR_7->inq_counter++;
    }

    return (VAR_8);
}
