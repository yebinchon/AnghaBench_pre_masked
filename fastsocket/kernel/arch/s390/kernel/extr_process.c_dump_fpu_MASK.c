
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
typedef int s390_fp_regs ;
struct TYPE_3__ {int fp_regs; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *) ;

int FUNC_2 (struct pt_regs * VAR_1, s390_fp_regs *VAR_2)
{





 FUNC_1(&VAR_0->thread.fp_regs);
 FUNC_0(VAR_2, &VAR_0->thread.fp_regs, sizeof(s390_fp_regs));



 return 1;
}
