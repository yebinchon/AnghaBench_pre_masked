
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int __sa_handler; } ;
struct user32_sigaction {int sa_flags; int sa_mask; TYPE_1__ __sigaction_u; } ;
struct TYPE_4__ {int __sa_handler; } ;
struct kern_sigaction {int sa_flags; int sa_mask; TYPE_2__ __sigaction_u; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct kern_sigaction *VAR_1, struct user32_sigaction *VAR_2)
{

 VAR_2->__sigaction_u.__sa_handler = FUNC_0(VAR_0,VAR_1->__sigaction_u.__sa_handler);
 VAR_2->sa_mask = VAR_1->sa_mask;
 VAR_2->sa_flags = VAR_1->sa_flags;
}
