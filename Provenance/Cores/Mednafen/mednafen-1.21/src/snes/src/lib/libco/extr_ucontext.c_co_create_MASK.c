
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int ss_size; scalar_t__ ss_sp; } ;
struct TYPE_6__ {TYPE_1__ uc_stack; int * uc_link; } ;
typedef TYPE_2__ ucontext_t ;
typedef int cothread_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,void (*) (),int ) ;
 scalar_t__ FUNC_3 (unsigned int) ;

cothread_t FUNC_4(unsigned int VAR_2, void (*VAR_3)(void)) {
  if(!VAR_1) VAR_1 = &VAR_0;
  ucontext_t *VAR_4 = (ucontext_t*)FUNC_3(sizeof(ucontext_t));
  if(VAR_4) {
    if((!FUNC_1(VAR_4) && !(VAR_4->uc_stack.ss_sp = 0)) && (VAR_4->uc_stack.ss_sp = FUNC_3(VAR_2))) {
      VAR_4->uc_link = VAR_1;
      VAR_4->uc_stack.ss_size = VAR_2;
      FUNC_2(VAR_4, VAR_3, 0);
    } else {
      FUNC_0((cothread_t)VAR_4);
      VAR_4 = 0;
    }
  }
  return (cothread_t)VAR_4;
}
