
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTM_STATUS ;
typedef int tBTM_CMPL_CB ;
struct TYPE_3__ {int rln_timer; int * p_rln_cmpl_cb; } ;
struct TYPE_4__ {TYPE_1__ devcb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ,int ) ;

tBTM_STATUS FUNC_2 (tBTM_CMPL_CB *VAR_5)
{

    if (VAR_4.devcb.p_rln_cmpl_cb) {
        return (VAR_2);
    }


    VAR_4.devcb.p_rln_cmpl_cb = VAR_5;

    FUNC_0();
    FUNC_1 (&VAR_4.devcb.rln_timer, VAR_3, VAR_1);

    return VAR_0;
}
