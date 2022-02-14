
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ max_filter; scalar_t__ tot_scan_results_strg; scalar_t__ adv_inst_max; } ;
typedef TYPE_1__ tBTM_BLE_VSC_CB ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void FUNC_5 (void)
{
    tBTM_BLE_VSC_CB VAR_0;
    FUNC_0(&VAR_0);


    FUNC_1();
    if (VAR_0.tot_scan_results_strg > 0) {
        FUNC_2();
    }


    if (VAR_0.adv_inst_max > 0) {
        FUNC_3();
    }
}
