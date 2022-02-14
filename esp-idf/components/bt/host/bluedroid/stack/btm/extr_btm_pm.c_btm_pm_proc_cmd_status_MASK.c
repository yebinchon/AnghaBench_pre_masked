
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tBTM_PM_STATUS ;
struct TYPE_7__ {int state; } ;
typedef TYPE_3__ tBTM_PM_MCB ;
typedef int UINT8 ;
struct TYPE_8__ {size_t pm_pend_link; size_t pm_pend_id; TYPE_2__* acl_db; TYPE_1__* pm_reg_db; TYPE_3__* pm_mode_db; } ;
struct TYPE_6__ {int remote_addr; } ;
struct TYPE_5__ {int mask; int (* cback ) (int ,int ,int ,int ) ;} ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,...) ;
 int VAR_5 ;
 size_t VAR_6 ;
 TYPE_4__ VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ,int ) ;

void FUNC_3(UINT8 VAR_8)
{
    tBTM_PM_MCB *VAR_9;
    tBTM_PM_STATUS VAR_10;

    if (VAR_7.pm_pend_link >= VAR_6) {
        return;
    }

    VAR_9 = &VAR_7.pm_mode_db[VAR_7.pm_pend_link];

    if (VAR_8 == VAR_5) {
        VAR_9->state = VAR_4;
        VAR_10 = VAR_3;

        FUNC_0( "btm_pm_proc_cmd_status new state:0x%x", VAR_9->state);

    } else {
        VAR_10 = VAR_2;
    }


    if ( (VAR_7.pm_pend_id != VAR_1) &&
            (VAR_7.pm_reg_db[VAR_7.pm_pend_id].mask & VAR_0) ) {
        (*VAR_7.pm_reg_db[VAR_7.pm_pend_id].cback)(VAR_7.acl_db[VAR_7.pm_pend_link].remote_addr, VAR_10, 0, VAR_8);
    }



    FUNC_0( "btm_pm_proc_cmd_status state:0x%x, pm_pend_link: %d(new: %d)",
                     VAR_9->state, VAR_7.pm_pend_link, VAR_6);

    VAR_7.pm_pend_link = VAR_6;

    FUNC_1();
}
