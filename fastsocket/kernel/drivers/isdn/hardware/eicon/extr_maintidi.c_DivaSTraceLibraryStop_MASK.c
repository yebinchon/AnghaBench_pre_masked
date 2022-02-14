
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Id; } ;
struct TYPE_5__ {int removal_state; TYPE_1__ e; } ;
typedef TYPE_2__ diva_strace_context_t ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_1 (void* VAR_0) {
  diva_strace_context_t* VAR_1 = (diva_strace_context_t*)VAR_0;

  if (!VAR_1->e.Id) {
    return (1);
  }

  switch (VAR_1->removal_state) {
    case 0:
      VAR_1->removal_state = 1;
      FUNC_0(VAR_1);
      break;

    case 3:
      return (1);
  }

  return (0);
}
