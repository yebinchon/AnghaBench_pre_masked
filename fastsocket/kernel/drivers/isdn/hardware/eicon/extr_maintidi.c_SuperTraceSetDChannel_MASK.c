
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int trace_event_mask; } ;
typedef TYPE_1__ diva_strace_context_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1 (void* VAR_4, int VAR_5) {
 diva_strace_context_t* VAR_6 = (diva_strace_context_t*)VAR_4;

 if (VAR_5) {
  VAR_6->trace_event_mask |= (VAR_2 | VAR_0 | VAR_1 | VAR_3);
 } else {
  VAR_6->trace_event_mask &= ~(VAR_2 | VAR_0 | VAR_1 | VAR_3);
 }

 return (FUNC_0 (VAR_6));
}
