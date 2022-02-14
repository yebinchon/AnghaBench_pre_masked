
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_3__ {int inq_active; scalar_t__ state; scalar_t__ no_inc_ssp; int inqfilt_active; } ;
struct TYPE_4__ {TYPE_1__ btm_inq_vars; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,scalar_t__,int,scalar_t__,int ) ;
 TYPE_2__ VAR_5 ;
 int FUNC_2 () ;

void FUNC_3(void)
{
    UINT8 VAR_6 = (VAR_0 | VAR_2);


    FUNC_1 ("btm_inq_stop_on_ssp: no_inc_ssp=%d inq_active:0x%x state:%d inqfilt_active:%d\n",
                     VAR_5.btm_inq_vars.no_inc_ssp, VAR_5.btm_inq_vars.inq_active, VAR_5.btm_inq_vars.state, VAR_5.btm_inq_vars.inqfilt_active);

    if (VAR_5.btm_inq_vars.no_inc_ssp) {
        if (VAR_5.btm_inq_vars.state == VAR_1) {
            if (VAR_5.btm_inq_vars.inq_active & VAR_3) {
                FUNC_0();
            } else if (VAR_5.btm_inq_vars.inq_active & VAR_6) {

                FUNC_2();
            }
        }

        VAR_5.btm_inq_vars.inq_active |= VAR_4;
    }
}
