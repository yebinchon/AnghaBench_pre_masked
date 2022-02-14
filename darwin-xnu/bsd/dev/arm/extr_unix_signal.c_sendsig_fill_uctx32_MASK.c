
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ss_flags; void* ss_size; void* ss_sp; } ;
struct TYPE_6__ {int uc_onstack; int uc_sigmask; void* uc_mcontext; void* uc_mcsize; void* uc_link; TYPE_1__ uc_stack; } ;
typedef TYPE_2__ user_ucontext32_t ;
typedef scalar_t__ user_size_t ;
typedef scalar_t__ user_addr_t ;
typedef void* user32_size_t ;
typedef void* user32_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_1(user_ucontext32_t *VAR_2, int VAR_3, int VAR_4, user_addr_t VAR_5, user_size_t VAR_6, user_addr_t VAR_7)
{
 FUNC_0(VAR_2, sizeof(*VAR_2));
 VAR_2->uc_onstack = VAR_3;
 VAR_2->uc_sigmask = VAR_4;
 VAR_2->uc_stack.ss_sp = (user32_addr_t) VAR_5;
 VAR_2->uc_stack.ss_size = (user32_size_t) VAR_6;
 if (VAR_3)
  VAR_2->uc_stack.ss_flags |= VAR_0;
 VAR_2->uc_link = (user32_addr_t)0;
 VAR_2->uc_mcsize = (user32_size_t) VAR_1;
 VAR_2->uc_mcontext = (user32_addr_t) VAR_7;
}
