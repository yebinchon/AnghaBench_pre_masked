
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTM_DEV_STATUS_CB ;
struct TYPE_3__ {int * p_dev_status_cb; } ;
struct TYPE_4__ {TYPE_1__ devcb; } ;


 TYPE_2__ VAR_0 ;

tBTM_DEV_STATUS_CB *FUNC_0 (tBTM_DEV_STATUS_CB *VAR_1)
{
    tBTM_DEV_STATUS_CB *VAR_2 = VAR_0.devcb.p_dev_status_cb;

    VAR_0.devcb.p_dev_status_cb = VAR_1;
    return (VAR_2);
}
