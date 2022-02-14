
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tBTM_LOC_BD_NAME ;
typedef int tBTM_DEVCB ;
struct TYPE_6__ {void* param; } ;
struct TYPE_8__ {void* param; } ;
struct TYPE_9__ {TYPE_1__ rln_timer; TYPE_3__ reset_timer; } ;
struct TYPE_7__ {TYPE_4__* bd_name; } ;
struct TYPE_10__ {scalar_t__ btm_sco_pkt_types_supported; scalar_t__ btm_acl_pkt_types_supported; TYPE_4__ devcb; TYPE_2__ cfg; } ;
typedef void* TIMER_PARAM_TYPE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 TYPE_5__ VAR_14 ;
 int FUNC_0 (TYPE_4__*,int ,int) ;

void FUNC_1 (void)
{
    VAR_14.devcb.reset_timer.param = (TIMER_PARAM_TYPE)VAR_12;
    VAR_14.devcb.rln_timer.param = (TIMER_PARAM_TYPE)VAR_13;

    VAR_14.btm_acl_pkt_types_supported = VAR_0 + VAR_3 +
                                         VAR_1 + VAR_4 +
                                         VAR_2 + VAR_5;

    VAR_14.btm_sco_pkt_types_supported = VAR_9 +
                                         VAR_10 +
                                         VAR_11 +
                                         VAR_6 +
                                         VAR_7 +
                                         VAR_8;
}
