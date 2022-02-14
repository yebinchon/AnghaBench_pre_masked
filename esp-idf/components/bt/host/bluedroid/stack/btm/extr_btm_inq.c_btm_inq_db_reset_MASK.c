
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* tBTM_STATUS ;
struct TYPE_5__ {void* status; } ;
typedef TYPE_1__ tBTM_REMOTE_DEV_NAME ;
struct TYPE_6__ {scalar_t__ inq_active; int connectable_mode; int discoverable_mode; void* inq_scan_type; void* page_scan_type; int * p_inq_results_cb; scalar_t__ pending_filt_complete_event; int state; int (* p_inqfilter_cmpl_cb ) (void**) ;void* inqfilt_active; int (* p_remname_cmpl_cb ) (TYPE_1__*) ;int remname_bda; void* remname_active; int rmt_name_timer_ent; int (* p_inq_cmpl_cb ) (scalar_t__*) ;int inq_timer_ent; } ;
typedef TYPE_2__ tBTM_INQUIRY_VAR_ST ;
typedef scalar_t__ UINT8 ;
struct TYPE_7__ {TYPE_2__ btm_inq_vars; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 TYPE_4__ VAR_12 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (void**) ;

void FUNC_7 (void)
{
    tBTM_REMOTE_DEV_NAME VAR_13;
    tBTM_INQUIRY_VAR_ST *VAR_14 = &VAR_12.btm_inq_vars;
    UINT8 VAR_15;
    UINT8 VAR_16;
    tBTM_STATUS VAR_17;

    FUNC_2 (&VAR_14->inq_timer_ent);


    if (VAR_14->inq_active != VAR_5) {
        VAR_16 = VAR_14->inq_active;

        VAR_14->inq_active = VAR_5;


        if (VAR_16 == VAR_7 ||
                VAR_16 == VAR_4) {
            if (VAR_14->p_inq_cmpl_cb) {
                VAR_15 = 0;
                (*VAR_14->p_inq_cmpl_cb)(&VAR_15);
            }
        }
    }


    if (VAR_14->remname_active ) {
        FUNC_2 (&VAR_14->rmt_name_timer_ent);
        VAR_14->remname_active = VAR_11;
        FUNC_3(VAR_14->remname_bda, 0, VAR_0);

        if (VAR_14->p_remname_cmpl_cb) {
            VAR_13.status = VAR_3;

            (*VAR_14->p_remname_cmpl_cb)(&VAR_13);
            VAR_14->p_remname_cmpl_cb = ((void*)0);
        }
    }


    if (VAR_14->inqfilt_active) {
        VAR_14->inqfilt_active = VAR_11;

        if (VAR_14->p_inqfilter_cmpl_cb) {
            VAR_17 = VAR_3;
            (*VAR_14->p_inqfilter_cmpl_cb)(&VAR_17);
        }
    }

    VAR_14->state = VAR_6;
    VAR_14->pending_filt_complete_event = 0;
    VAR_14->p_inq_results_cb = ((void*)0);
    FUNC_0(((void*)0));
    FUNC_1();

    VAR_14->discoverable_mode = VAR_9;
    VAR_14->connectable_mode = VAR_8;
    VAR_14->page_scan_type = VAR_10;
    VAR_14->inq_scan_type = VAR_10;


    VAR_14->discoverable_mode |= VAR_2;
    VAR_14->connectable_mode |= VAR_1;

    return;
}
