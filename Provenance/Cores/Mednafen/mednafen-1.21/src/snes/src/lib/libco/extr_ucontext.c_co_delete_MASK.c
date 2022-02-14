
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ss_sp; } ;
struct TYPE_4__ {TYPE_1__ uc_stack; } ;
typedef TYPE_2__ ucontext_t ;
typedef scalar_t__ cothread_t ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(cothread_t VAR_0) {
  if(VAR_0) {
    if(((ucontext_t*)VAR_0)->uc_stack.ss_sp) { FUNC_0(((ucontext_t*)VAR_0)->uc_stack.ss_sp); }
    FUNC_0(VAR_0);
  }
}
