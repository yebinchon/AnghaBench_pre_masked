
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_7__ {scalar_t__ ble_evt_type; } ;
struct TYPE_8__ {TYPE_1__ results; } ;
typedef TYPE_2__ tBTM_INQ_INFO ;
struct TYPE_9__ {int rmt_name_timer_ent; int remname_bda; scalar_t__ remname_active; int * p_remname_cmpl_cb; } ;
typedef TYPE_3__ tBTM_INQUIRY_VAR_ST ;
typedef int tBTM_CMPL_CB ;
struct TYPE_11__ {TYPE_3__ btm_inq_vars; } ;
struct TYPE_10__ {int (* supports_ble ) () ;} ;
typedef int BD_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 TYPE_5__ VAR_10 ;
 int FUNC_2 (int *,int ,int ) ;
 TYPE_4__* FUNC_3 () ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 () ;

tBTM_STATUS FUNC_6(BD_ADDR VAR_11, tBTM_INQ_INFO *VAR_12, tBTM_CMPL_CB *VAR_13)
{
    tBTM_INQUIRY_VAR_ST *VAR_14 = &VAR_10.btm_inq_vars;

    if (!FUNC_3()->supports_ble()) {
        return VAR_5;
    }

    if (VAR_12 &&
            VAR_12->results.ble_evt_type != VAR_1 &&
            VAR_12->results.ble_evt_type != VAR_2) {
        FUNC_0("name request to non-connectable device failed.");
        return VAR_5;
    }


    if (VAR_14->remname_active) {
        return VAR_3;
    }







    VAR_14->p_remname_cmpl_cb = VAR_13;
    VAR_14->remname_active = VAR_8;

    FUNC_4(VAR_14->remname_bda, VAR_11, VAR_0);

    FUNC_2 (&VAR_14->rmt_name_timer_ent,
                     VAR_7,
                     VAR_6);

    return VAR_4;
}
