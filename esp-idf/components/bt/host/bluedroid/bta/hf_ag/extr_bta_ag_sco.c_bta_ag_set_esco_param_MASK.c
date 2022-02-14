
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTM_ESCO_PARAMS ;
struct TYPE_3__ {int params; scalar_t__ param_updated; } ;
struct TYPE_4__ {TYPE_1__ sco; } ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;

void FUNC_1(BOOLEAN VAR_3, tBTM_ESCO_PARAMS *VAR_4)
{
    if(VAR_3 == VAR_0)
    {
        VAR_2.sco.param_updated = VAR_0;
        FUNC_0("bta_ag_set_esco_param : Resetting ESCO parameters to default");
    }
    else
    {
        VAR_2.sco.param_updated = VAR_1;
        VAR_2.sco.params = *VAR_4;
        FUNC_0("bta_ag_set_esco_param : Setting ESCO parameters");
    }
}
