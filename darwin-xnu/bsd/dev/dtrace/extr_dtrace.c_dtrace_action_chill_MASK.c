
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ hrtime_t ;
struct TYPE_6__ {int dtms_present; } ;
typedef TYPE_1__ dtrace_mstate_t ;
struct TYPE_7__ {size_t cpu_id; scalar_t__ cpu_dtrace_chillmark; scalar_t__ cpu_dtrace_chilled; } ;
typedef TYPE_2__ dtrace_cpu_t ;
struct TYPE_8__ {int cpuc_dtrace_flags; } ;


 TYPE_2__* VAR_0 ;
 int volatile VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(dtrace_mstate_t *VAR_7, hrtime_t VAR_8)
{
 hrtime_t VAR_9;
 volatile uint16_t *VAR_10;
 dtrace_cpu_t *VAR_11 = VAR_0;

 if (VAR_6)
  return;

 VAR_10 = (volatile uint16_t *)&VAR_3[VAR_11->cpu_id].cpuc_dtrace_flags;

 VAR_9 = FUNC_0();

 if (VAR_9 - VAR_11->cpu_dtrace_chillmark > VAR_4) {



  VAR_11->cpu_dtrace_chillmark = VAR_9;
  VAR_11->cpu_dtrace_chilled = 0;
 }






 if (VAR_11->cpu_dtrace_chilled + VAR_8 > VAR_5 ||
     VAR_11->cpu_dtrace_chilled + VAR_8 < VAR_11->cpu_dtrace_chilled) {
  *VAR_10 |= VAR_1;
  return;
 }

 while (FUNC_0() - VAR_9 < VAR_8)
  continue;






 VAR_7->dtms_present &= ~VAR_2;
 VAR_11->cpu_dtrace_chilled += VAR_8;
}
