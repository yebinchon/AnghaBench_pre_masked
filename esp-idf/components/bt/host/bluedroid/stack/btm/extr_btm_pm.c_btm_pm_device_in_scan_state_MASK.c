
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int inq_active; } ;
struct TYPE_4__ {scalar_t__ busy_level; TYPE_1__ btm_inq_vars; int page_queue; scalar_t__ is_paging; } ;
typedef int BOOLEAN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_1 (int ) ;

BOOLEAN FUNC_2(void)
{



    if (VAR_5.is_paging || (!FUNC_1(VAR_5.page_queue)) ||
            VAR_1 == VAR_5.busy_level) {
        FUNC_0("btm_pm_device_in_scan_state- paging");
        return VAR_4;
    }


    if ((VAR_5.btm_inq_vars.inq_active & (VAR_2 | VAR_0)) != 0) {
        FUNC_0("btm_pm_device_in_scan_state- Inq active");
        return VAR_4;
    }

    return VAR_3;
}
