
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int (* tBTM_PM_STATUS_CBACK ) (int ,int ,int ,int ) ;
struct TYPE_6__ {size_t pm_pend_id; size_t pm_pend_link; TYPE_1__* acl_db; TYPE_2__* pm_reg_db; } ;
struct TYPE_5__ {int mask; int (* cback ) (int ,int ,int ,int ) ;} ;
struct TYPE_4__ {int remote_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 TYPE_3__ VAR_7 ;
 int FUNC_0 (int ,int ,int ,int ) ;

void FUNC_1(void)
{
    int VAR_8;
    tBTM_PM_STATUS_CBACK *VAR_9 = ((void*)0);


    if ( (VAR_7.pm_pend_id != VAR_4) &&
            (VAR_7.pm_reg_db[VAR_7.pm_pend_id].mask & VAR_3) ) {
        VAR_9 = &VAR_7.pm_reg_db[VAR_7.pm_pend_id].cback;
    }



    for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
        VAR_7.pm_reg_db[VAR_8].mask = VAR_2;
    }

    if (VAR_9 != ((void*)0) && VAR_7.pm_pend_link < VAR_6) {
        (*VAR_9)(VAR_7.acl_db[VAR_7.pm_pend_link].remote_addr, VAR_5, VAR_0, 0);
    }


    VAR_7.pm_pend_link = VAR_6;
}
