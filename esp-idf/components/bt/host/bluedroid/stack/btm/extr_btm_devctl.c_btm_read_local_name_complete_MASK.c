
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int (* tBTM_CMPL_CB ) (scalar_t__*) ;
typedef scalar_t__ UINT8 ;
typedef int UINT16 ;
struct TYPE_3__ {int (* p_rln_cmpl_cb ) (scalar_t__*) ;int rln_timer; } ;
struct TYPE_4__ {TYPE_1__ devcb; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__*) ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (scalar_t__*) ;

void FUNC_5 (UINT8 *VAR_2, UINT16 VAR_3)
{
    tBTM_CMPL_CB *VAR_4 = &VAR_1.devcb.p_rln_cmpl_cb;
    UINT8 VAR_5;
    FUNC_1(VAR_3);

    FUNC_2 (&VAR_1.devcb.rln_timer);


    VAR_1.devcb.p_rln_cmpl_cb = ((void*)0);

    if (VAR_4) {
        FUNC_0 (VAR_5, VAR_2);

        if (VAR_5 == VAR_0) {
            (*VAR_4)(VAR_2);
        } else {
            (*VAR_4)(((void*)0));
        }
    }
}
