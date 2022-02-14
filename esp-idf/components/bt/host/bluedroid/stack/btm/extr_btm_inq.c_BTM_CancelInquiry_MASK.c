
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTM_STATUS ;
typedef int tBTM_INQ_RESULTS_CB ;
struct TYPE_4__ {int mode; } ;
struct TYPE_5__ {int inq_active; int inq_counter; TYPE_1__ inqparms; int pending_filt_complete_event; scalar_t__ inqfilt_active; int * p_inq_cmpl_cb; int * p_inq_results_cb; int state; } ;
typedef TYPE_2__ tBTM_INQUIRY_VAR_ST ;
typedef int tBTM_CMPL_CB ;
typedef int UINT8 ;
struct TYPE_6__ {TYPE_2__ btm_inq_vars; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 () ;
 TYPE_3__ VAR_11 ;
 int FUNC_3 () ;
 int FUNC_4 () ;

tBTM_STATUS FUNC_5(void)
{
    tBTM_STATUS VAR_12 = VAR_8;
    tBTM_INQUIRY_VAR_ST *VAR_13 = &VAR_11.btm_inq_vars;



    FUNC_1 ("BTM_CancelInquiry called\n");


    if (!FUNC_0()) {
        return (VAR_9);
    }


    if ((VAR_13->inq_active & VAR_3) != 0 &&
            (!(VAR_13->inq_active & VAR_7))) {
        VAR_13->inq_active = VAR_4;
        VAR_13->state = VAR_5;
        VAR_13->p_inq_results_cb = (tBTM_INQ_RESULTS_CB *) ((void*)0);
        VAR_13->p_inq_cmpl_cb = (tBTM_CMPL_CB *) ((void*)0);



        if (VAR_13->inqfilt_active) {
            VAR_13->inqfilt_active = VAR_10;
            VAR_13->pending_filt_complete_event++;
        }

        else {
            if (((VAR_13->inqparms.mode & VAR_2) != 0)



               ) {
                if (!FUNC_4()) {
                    VAR_12 = VAR_6;
                }
            }

            if (((VAR_13->inqparms.mode & VAR_0) != 0)



               ) {
                FUNC_2();
            }

        }






        VAR_13->inq_counter++;
        FUNC_3();
    }

    return (VAR_12);
}
