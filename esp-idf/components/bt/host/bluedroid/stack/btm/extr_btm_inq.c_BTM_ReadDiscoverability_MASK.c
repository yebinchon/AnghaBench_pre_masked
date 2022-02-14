
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT16 ;
struct TYPE_3__ {int discoverable_mode; int inq_scan_period; int inq_scan_window; } ;
struct TYPE_4__ {TYPE_1__ btm_inq_vars; } ;


 int FUNC_0 (char*) ;
 TYPE_2__ VAR_0 ;

UINT16 FUNC_1 (UINT16 *VAR_1, UINT16 *VAR_2)
{
    FUNC_0 ("BTM_ReadDiscoverability\n");
    if (VAR_1) {
        *VAR_1 = VAR_0.btm_inq_vars.inq_scan_window;
    }

    if (VAR_2) {
        *VAR_2 = VAR_0.btm_inq_vars.inq_scan_period;
    }

    return (VAR_0.btm_inq_vars.discoverable_mode);
}
