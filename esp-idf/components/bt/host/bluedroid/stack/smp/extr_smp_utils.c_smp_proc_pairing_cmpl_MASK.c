
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ reason; int sec_level; int is_pair_cancel; scalar_t__ auth_mode; int smp_over_br; } ;
struct TYPE_13__ {TYPE_1__ cmplt; int member_0; } ;
typedef TYPE_3__ tSMP_EVT_DATA ;
struct TYPE_14__ {scalar_t__ status; scalar_t__ role; int pairing_bda; scalar_t__ is_pair_cancel; scalar_t__ auth_mode; int sec_level; int smp_over_br; int (* p_callback ) (int ,int ,TYPE_3__*) ;} ;
typedef TYPE_4__ tSMP_CB ;
typedef int (* tSMP_CALLBACK ) (int ,int ,TYPE_3__*) ;
struct TYPE_12__ {int skip_update_conn_param; scalar_t__ auth_mode; } ;
struct TYPE_15__ {TYPE_2__ ble; } ;
typedef TYPE_6__ tBTM_SEC_DEV_REC ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,...) ;
 int VAR_5 ;
 TYPE_6__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,int ,TYPE_3__*) ;

void FUNC_6(tSMP_CB *VAR_6)
{
    tSMP_EVT_DATA VAR_7 = {0};
    tSMP_CALLBACK *VAR_8 = &VAR_6->p_callback;
    BD_ADDR VAR_9;

    FUNC_1 ("smp_proc_pairing_cmpl \n");

    VAR_7.cmplt.reason = VAR_6->status;
    VAR_7.cmplt.smp_over_br = VAR_6->smp_over_br;
    VAR_7.cmplt.auth_mode = 0;

    tBTM_SEC_DEV_REC *VAR_10 = FUNC_2 (VAR_6->pairing_bda);
    if (VAR_6->status == VAR_4) {
        VAR_7.cmplt.sec_level = VAR_6->sec_level;
        if (VAR_6->auth_mode) {
            VAR_7.cmplt.auth_mode = VAR_6->auth_mode;
            if (VAR_10) {
                VAR_10->ble.auth_mode = VAR_6->auth_mode;
            }
        } else if (VAR_10) {
            VAR_7.cmplt.auth_mode = VAR_10->ble.auth_mode;
        }
    }







    VAR_7.cmplt.is_pair_cancel = VAR_1;

    if (VAR_6->is_pair_cancel) {
        VAR_7.cmplt.is_pair_cancel = VAR_5;
    }


    FUNC_1 ("send SMP_COMPLT_EVT reason=0x%0x sec_level=0x%0x\n",
                     VAR_7.cmplt.reason,
                     VAR_7.cmplt.sec_level );

    FUNC_3 (VAR_9, VAR_6->pairing_bda, VAR_0);



    if (VAR_6->role == VAR_2) {
        if(VAR_10 && VAR_10->ble.skip_update_conn_param) {

            VAR_10->ble.skip_update_conn_param = 0;
        } else {
            FUNC_0(VAR_6->pairing_bda, VAR_5);
        }
    }




    FUNC_4(VAR_6);

    if (VAR_8) {
        (*VAR_8) (VAR_3, VAR_9, &VAR_7);
    }
}
