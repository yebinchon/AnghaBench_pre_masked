
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ tBTM_STATUS ;
typedef int tBTM_INQ_RESULTS_CB ;
struct TYPE_12__ {int mode; int filter_cond_type; int filter_cond; int duration; int * intl_duration; int max_resps; } ;
typedef TYPE_4__ tBTM_INQ_PARMS ;
struct TYPE_11__ {scalar_t__ num_resp; } ;
struct TYPE_13__ {int inq_active; scalar_t__ scan_type; void* next_state; int state; TYPE_4__ inqparms; TYPE_3__ inq_cmpl_info; int * p_inq_results_cb; int * p_inq_cmpl_cb; int * p_inq_ble_results_cb; scalar_t__ inqfilt_active; } ;
typedef TYPE_5__ tBTM_INQUIRY_VAR_ST ;
typedef int tBTM_CMPL_CB ;
typedef int UINT8 ;
struct TYPE_9__ {int scan_type; } ;
struct TYPE_10__ {TYPE_1__ inq_var; } ;
struct TYPE_15__ {TYPE_2__ ble_ctr_cb; TYPE_5__ btm_inq_vars; } ;
struct TYPE_14__ {int (* supports_ble ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 scalar_t__ VAR_11 ;

 scalar_t__ VAR_12 ;


 void* VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 () ;
 int VAR_22 ;
 size_t VAR_23 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_24 ;
 void* VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 TYPE_7__ VAR_27 ;
 scalar_t__ FUNC_5 (int,int *) ;
 int FUNC_6 (int ,int ) ;
 TYPE_6__* FUNC_7 () ;
 int FUNC_8 () ;

tBTM_STATUS FUNC_9 (tBTM_INQ_PARMS *VAR_28, tBTM_INQ_RESULTS_CB *VAR_29,
                              tBTM_CMPL_CB *VAR_30)
{
    tBTM_STATUS VAR_31 = VAR_12;
    tBTM_INQUIRY_VAR_ST *VAR_32 = &VAR_27.btm_inq_vars;

    FUNC_1 ("BTM_StartInquiry: mode: %d, dur: %d, rsps: %d, flt: %d\n",
                   VAR_28->mode, VAR_28->duration, VAR_28->max_resps,
                   VAR_28->filter_cond_type);



    if (VAR_32->inq_active || VAR_32->inqfilt_active) {
        {
            return (VAR_11);
            FUNC_1("BTM_StartInquiry: return BUSY\n");
        }
    } else {
        VAR_32->scan_type = VAR_25;
    }


    if (!FUNC_0()) {
        return (VAR_24);
    }

    if ((VAR_28->mode & VAR_8) != VAR_14 &&
            (VAR_28->mode & VAR_8) != VAR_22

            && (VAR_28->mode & VAR_2) != VAR_1
            && (VAR_28->mode & VAR_2) != VAR_3

       ) {
        return (VAR_15);
    }
    VAR_32->inqparms = *VAR_28;


    VAR_32->state = VAR_18;
    VAR_32->p_inq_cmpl_cb = VAR_30;
    VAR_32->p_inq_results_cb = VAR_29;
    VAR_32->inq_cmpl_info.num_resp = 0;
    VAR_32->inq_active = VAR_28->mode;

    FUNC_2("BTM_StartInquiry: p_inq->inq_active = 0x%02x\n", VAR_32->inq_active);
    if ((VAR_28->mode & VAR_2)




       )

    {





        if (!FUNC_7()->supports_ble()) {
            VAR_32->inqparms.mode &= ~ VAR_2;
            VAR_31 = VAR_15;
        }

        else if ((VAR_31 = FUNC_4((UINT8)(VAR_28->mode & VAR_2),
                           VAR_28->duration)) != VAR_12) {
            FUNC_3("Err Starting LE Inquiry.\n");
            VAR_32->inqparms.mode &= ~ VAR_2;
        }

        VAR_28->mode &= ~VAR_2;
        FUNC_2("BTM_StartInquiry: mode = %02x\n", VAR_28->mode);
    }



    if ((VAR_28->mode & VAR_8) == VAR_17) {
        return VAR_31;
    }
        switch (VAR_28->filter_cond_type) {
        case 130:
            VAR_32->state = VAR_21;
            break;

        case 128:
        case 129:


            VAR_32->state = VAR_19;
            VAR_28->filter_cond_type = 130;

            break;

        default:
            return (VAR_15);
        }


        if ((VAR_31 = FUNC_5 (VAR_28->filter_cond_type,
                                                &VAR_28->filter_cond)) != VAR_12) {
            VAR_32->state = VAR_20;
        }
    return (VAR_31);
}
