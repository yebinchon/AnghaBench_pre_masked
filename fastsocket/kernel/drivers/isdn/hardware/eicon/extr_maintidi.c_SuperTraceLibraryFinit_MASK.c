
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hAdapter; } ;
typedef TYPE_1__ diva_strace_context_t ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1 (void* VAR_0) {
 diva_strace_context_t* VAR_1 = (diva_strace_context_t*)VAR_0;
 if (VAR_1) {
  if (VAR_1->hAdapter) {
   FUNC_0 (VAR_1->hAdapter);
  }
  return (0);
 }
 return (-1);
}
