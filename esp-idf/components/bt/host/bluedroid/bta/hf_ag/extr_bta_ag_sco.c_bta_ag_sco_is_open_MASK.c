
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTA_AG_SCB ;
struct TYPE_3__ {scalar_t__ state; int * p_curr_scb; } ;
struct TYPE_4__ {TYPE_1__ sco; } ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;

BOOLEAN FUNC_0(tBTA_AG_SCB *VAR_2)
{
    return ((VAR_1.sco.state == VAR_0) &&
            (VAR_1.sco.p_curr_scb == VAR_2));
}
