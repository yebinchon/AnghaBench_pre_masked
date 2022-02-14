
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int trace_event_mask; } ;
typedef TYPE_1__ diva_strace_context_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1 (void* VAR_1, int VAR_2) {
 diva_strace_context_t* VAR_3 = (diva_strace_context_t*)VAR_1;

 if (VAR_2) {
  VAR_3->trace_event_mask |= VAR_0;
 } else {
  VAR_3->trace_event_mask &= ~VAR_0;
 }

 return (FUNC_0 (VAR_3));
}
