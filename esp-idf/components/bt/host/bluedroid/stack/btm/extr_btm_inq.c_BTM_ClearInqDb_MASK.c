
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_3__ {scalar_t__ inq_active; scalar_t__ inqfilt_active; } ;
typedef TYPE_1__ tBTM_INQUIRY_VAR_ST ;
struct TYPE_4__ {TYPE_1__ btm_inq_vars; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int ) ;

tBTM_STATUS FUNC_1 (BD_ADDR VAR_4)
{
    tBTM_INQUIRY_VAR_ST *VAR_5 = &VAR_3.btm_inq_vars;


    if (VAR_5->inq_active != VAR_1 ||
            VAR_5->inqfilt_active) {
        return (VAR_0);
    }

    FUNC_0(VAR_4);

    return (VAR_2);
}
