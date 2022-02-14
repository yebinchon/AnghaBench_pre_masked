
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ dts_speculations_unavail; int dts_nspeculations; scalar_t__ dts_speculations_busy; TYPE_2__* dts_speculations; } ;
typedef TYPE_1__ dtrace_state_t ;
struct TYPE_5__ {scalar_t__ dtsp_state; } ;
typedef TYPE_2__ dtrace_speculation_t ;
typedef scalar_t__ dtrace_speculation_state_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(dtrace_state_t *VAR_5)
{
 int VAR_6 = 0;
 dtrace_speculation_state_t VAR_7;
 uint32_t *VAR_8 = &VAR_5->dts_speculations_unavail, VAR_9;

 while (VAR_6 < VAR_5->dts_nspeculations) {
  dtrace_speculation_t *VAR_10 = &VAR_5->dts_speculations[VAR_6];

  VAR_7 = VAR_10->dtsp_state;

  if (VAR_7 != VAR_4) {
   if (VAR_7 == VAR_2 ||
       VAR_7 == VAR_1 ||
       VAR_7 == VAR_3)
    VAR_8 = &VAR_5->dts_speculations_busy;
   VAR_6++;
   continue;
  }

  if (FUNC_0((uint32_t *)&VAR_10->dtsp_state,
      VAR_7, VAR_0) == VAR_7)
   return (VAR_6 + 1);
 }






 do {
  VAR_9 = *VAR_8;
 } while (FUNC_0(VAR_8, VAR_9, VAR_9 + 1) != VAR_9);

 return (0);
}
