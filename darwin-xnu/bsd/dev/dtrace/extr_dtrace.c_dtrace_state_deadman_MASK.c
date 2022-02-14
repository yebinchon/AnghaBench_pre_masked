
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ hrtime_t ;
struct TYPE_4__ {scalar_t__ dts_laststatus; scalar_t__ dts_alive; } ;
typedef TYPE_1__ dtrace_state_t ;
struct TYPE_5__ {TYPE_1__* dta_state; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(dtrace_state_t *VAR_3)
{
 hrtime_t VAR_4;

 FUNC_2();

 VAR_4 = FUNC_0();

 if (VAR_3 != VAR_1.dta_state &&
     VAR_4 - VAR_3->dts_laststatus >= VAR_2)
  return;
 VAR_3->dts_alive = VAR_0;
 FUNC_1();
 VAR_3->dts_alive = VAR_4;
}
