
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tBTM_STATUS ;
typedef int tBTM_INQ_RESULTS_CB ;
struct TYPE_7__ {scalar_t__ mode; scalar_t__ duration; scalar_t__ filter_cond_type; int filter_cond; int max_resps; } ;
typedef TYPE_2__ tBTM_INQ_PARMS ;
struct TYPE_6__ {scalar_t__ num_resp; } ;
struct TYPE_8__ {int state; int * p_inq_results_cb; scalar_t__ inq_active; TYPE_1__ inq_cmpl_info; scalar_t__ per_max_delay; scalar_t__ per_min_delay; TYPE_2__ inqparms; scalar_t__ inqfilt_active; } ;
typedef TYPE_3__ tBTM_INQUIRY_VAR_ST ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_9__ {TYPE_3__ btm_inq_vars; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_17 ;
 TYPE_4__ VAR_18 ;
 int FUNC_2 (scalar_t__,int *) ;

tBTM_STATUS FUNC_3 (tBTM_INQ_PARMS *VAR_19, UINT16 VAR_20,
                                        UINT16 VAR_21, tBTM_INQ_RESULTS_CB *VAR_22)
{
    tBTM_STATUS VAR_23;
    tBTM_INQUIRY_VAR_ST *VAR_24 = &VAR_18.btm_inq_vars;

    FUNC_1 ("BTM_SetPeriodicInquiryMode: mode: %d, dur: %d, rsps: %d, flt: %d, min: %d, max: %d\n",
                   VAR_19->mode, VAR_19->duration, VAR_19->max_resps,
                   VAR_19->filter_cond_type, VAR_21, VAR_20);


    if (!FUNC_0()) {
        return (VAR_17);
    }



    if (VAR_24->inq_active || VAR_24->inqfilt_active) {
        return (VAR_0);
    }


    if (VAR_19->mode != VAR_3 &&
            VAR_19->mode != VAR_9) {
        return (VAR_5);
    }


    if (VAR_19->duration < VAR_12 ||
            VAR_19->duration > VAR_11 ||
            VAR_21 <= VAR_19->duration ||
            VAR_21 < VAR_16 ||
            VAR_21 > VAR_14 ||
            VAR_20 <= VAR_21 ||
            VAR_20 < VAR_15)


    {
        return (VAR_5);
    }


    VAR_24->inqparms = *VAR_19;
    VAR_24->per_min_delay = VAR_21;
    VAR_24->per_max_delay = VAR_20;
    VAR_24->inq_cmpl_info.num_resp = 0;
    VAR_24->p_inq_results_cb = VAR_22;

    VAR_24->inq_active = (UINT8)((VAR_19->mode == VAR_9) ?
                                (VAR_10 | VAR_13) :
                                (VAR_4 | VAR_13));





    if (VAR_19->filter_cond_type != VAR_1) {
        VAR_24->state = VAR_6;
        VAR_19->filter_cond_type = VAR_1;
    } else {
        VAR_24->state = VAR_8;
    }


    if ((VAR_23 = FUNC_2 (VAR_19->filter_cond_type, &VAR_19->filter_cond)) != VAR_2) {

        VAR_24->p_inq_results_cb = ((void*)0);
        VAR_24->state = VAR_7;

    }

    return (VAR_23);
}
