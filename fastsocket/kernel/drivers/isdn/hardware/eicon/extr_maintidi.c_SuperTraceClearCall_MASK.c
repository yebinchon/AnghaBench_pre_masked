
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Channels; long clear_call_command; } ;
typedef TYPE_1__ diva_strace_context_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1 (void* VAR_0, int VAR_1) {
 diva_strace_context_t* VAR_2 = (diva_strace_context_t*)VAR_0;

 if ((VAR_1 < 1) || (VAR_1 > VAR_2->Channels)) {
  return (-1);
 }
 VAR_1--;

 VAR_2->clear_call_command |= (1L << VAR_1);

 return (FUNC_0 (VAR_2));
}
