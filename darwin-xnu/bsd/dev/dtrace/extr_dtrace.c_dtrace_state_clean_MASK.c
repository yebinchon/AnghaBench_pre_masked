
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dtvs_dynvars; } ;
struct TYPE_6__ {scalar_t__ dts_activity; TYPE_1__ dts_vstate; } ;
typedef TYPE_2__ dtrace_state_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2(dtrace_state_t *VAR_1)
{
 if (VAR_1->dts_activity == VAR_0)
  return;

 FUNC_0(&VAR_1->dts_vstate.dtvs_dynvars);
 FUNC_1(VAR_1);
}
