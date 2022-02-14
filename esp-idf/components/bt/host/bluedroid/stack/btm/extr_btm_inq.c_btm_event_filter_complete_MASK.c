
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tBTM_STATUS ;
struct TYPE_5__ {int mode; int filter_cond; int filter_cond_type; } ;
struct TYPE_6__ {scalar_t__ state; scalar_t__ inqfilt_active; TYPE_1__ inqparms; int inq_active; scalar_t__ pending_filt_complete_event; int (* p_inqfilter_cmpl_cb ) (scalar_t__*) ;} ;
typedef TYPE_2__ tBTM_INQUIRY_VAR_ST ;
typedef int (* tBTM_CMPL_CB ) (scalar_t__*) ;
typedef scalar_t__ UINT8 ;
struct TYPE_7__ {TYPE_2__ btm_inq_vars; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (scalar_t__,scalar_t__*) ;
 scalar_t__ VAR_11 ;
 TYPE_4__ VAR_12 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (scalar_t__*) ;

void FUNC_7 (UINT8 *VAR_13)
{
    UINT8 VAR_14;
    tBTM_STATUS VAR_15;
    tBTM_INQUIRY_VAR_ST *VAR_16 = &VAR_12.btm_inq_vars;
    tBTM_CMPL_CB *VAR_17 = &VAR_16->p_inqfilter_cmpl_cb;


    FUNC_0 ("btm_event_filter_complete: inq_active:0x%x state:%d inqfilt_active:%d\n",
                     VAR_12.btm_inq_vars.inq_active, VAR_12.btm_inq_vars.state, VAR_12.btm_inq_vars.inqfilt_active);


    if (VAR_16->pending_filt_complete_event) {
        VAR_16->pending_filt_complete_event--;
        return;
    }



    if (VAR_16->inqfilt_active == VAR_11 ) {

        FUNC_2 (VAR_14, VAR_13);
        if (VAR_14 != VAR_10) {

            FUNC_1 ("BTM Warning: Set Event Filter Failed (HCI returned 0x%x)\n", VAR_14);
            VAR_15 = VAR_2;
        } else {
            VAR_15 = VAR_8;
        }



        if (VAR_16->state == VAR_6) {
            VAR_16->inqfilt_active = VAR_9;
            if (VAR_17) {
                (*VAR_17) (&VAR_15);
            }
        } else

        {
            if (VAR_15 != VAR_8) {

                FUNC_4 (VAR_2, (UINT8)(VAR_16->inqparms.mode & VAR_0));


                VAR_16->inqfilt_active = VAR_9;
                VAR_16->inq_active = VAR_3;
                VAR_16->state = VAR_6;

                return;
            }


            if (VAR_16->state == VAR_5) {
                if ((VAR_15 = FUNC_5 (VAR_16->inqparms.filter_cond_type, &VAR_16->inqparms.filter_cond)) == VAR_1) {
                    VAR_16->state = VAR_7;
                } else {
                    VAR_16->inqfilt_active = VAR_9;


                    FUNC_4 (VAR_2, (UINT8)(VAR_16->inqparms.mode & VAR_0));
                }
            } else {
                VAR_16->state = VAR_4;
                VAR_16->inqfilt_active = VAR_9;
                FUNC_3 (VAR_16);
            }
        }
    }
}
