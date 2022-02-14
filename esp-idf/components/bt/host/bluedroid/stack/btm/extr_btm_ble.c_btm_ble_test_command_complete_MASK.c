
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int (* tBTM_CMPL_CB ) (int *) ;
typedef int UINT8 ;
struct TYPE_3__ {int (* p_le_test_cmd_cmpl_cb ) (int *) ;} ;
struct TYPE_4__ {TYPE_1__ devcb; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(UINT8 *VAR_1)
{
    tBTM_CMPL_CB *VAR_2 = &VAR_0.devcb.p_le_test_cmd_cmpl_cb;

    VAR_0.devcb.p_le_test_cmd_cmpl_cb = ((void*)0);

    if (VAR_2) {
        (*VAR_2)(VAR_1);
    }
}
