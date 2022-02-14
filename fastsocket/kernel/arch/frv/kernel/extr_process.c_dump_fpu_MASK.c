
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
typedef int elf_fpregset_t ;
struct TYPE_5__ {TYPE_1__* user; } ;
struct TYPE_6__ {TYPE_2__ thread; } ;
struct TYPE_4__ {int f; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int *,int *,int) ;

int FUNC_1(struct pt_regs *VAR_1, elf_fpregset_t *VAR_2)
{
 FUNC_0(VAR_2,
        &VAR_0->thread.user->f,
        sizeof(VAR_0->thread.user->f));
 return 1;
}
