
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int __sa_handler; } ;
struct __user64_sigaction {int sa_flags; int sa_mask; int sa_tramp; TYPE_2__ __sigaction_u; } ;
struct TYPE_3__ {int __sa_handler; } ;
struct __kern_sigaction {int sa_tramp; int sa_flags; int sa_mask; TYPE_1__ __sigaction_u; } ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int *,int) ;

__attribute__((used)) static void
FUNC_3(struct __user64_sigaction *VAR_1, struct __kern_sigaction *VAR_2)
{
 VAR_2->__sigaction_u.__sa_handler = VAR_1->__sigaction_u.__sa_handler;
 VAR_2->sa_tramp = VAR_1->sa_tramp;
 VAR_2->sa_mask = VAR_1->sa_mask;
 VAR_2->sa_flags = VAR_1->sa_flags;

 kern_return_t VAR_3;
 VAR_3 = FUNC_2(FUNC_1(),
   &VAR_2->sa_tramp, 1);
 FUNC_0(VAR_3 == VAR_0);
}
