
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTM_STATUS ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_4__ {scalar_t__ inq_scan_type; } ;
struct TYPE_6__ {TYPE_1__ btm_inq_vars; } ;
struct TYPE_5__ {int (* supports_interlaced_inquiry_scan ) () ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 TYPE_3__ VAR_7 ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 () ;
 int FUNC_4 () ;

tBTM_STATUS FUNC_5 (UINT16 VAR_8)
{

    FUNC_1 ("BTM_SetInquiryScanType\n");
    if (VAR_8 != VAR_4 && VAR_8 != VAR_3) {
        return (VAR_0);
    }


    if (!FUNC_3()->supports_interlaced_inquiry_scan()) {
        return (VAR_1);
    }


    if (VAR_8 != VAR_7.btm_inq_vars.inq_scan_type) {
        if (FUNC_0()) {
            if (FUNC_2 ((UINT8)VAR_8)) {
                VAR_7.btm_inq_vars.inq_scan_type = VAR_8;
            } else {
                return (VAR_2);
            }
        } else {
            return (VAR_6);
        }
    }
    return (VAR_5);
}
