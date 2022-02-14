
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_fp {int dummy; } ;
struct TYPE_2__ {int soft; } ;
struct thread_info {int* used_cp; TYPE_1__ fpstate; } ;
struct pt_regs {int dummy; } ;


 struct thread_info* FUNC_0 () ;
 int FUNC_1 (struct user_fp*,int *,int) ;

int FUNC_2 (struct pt_regs *VAR_0, struct user_fp *VAR_1)
{
 struct thread_info *VAR_2 = FUNC_0();
 int VAR_3 = VAR_2->used_cp[1] | VAR_2->used_cp[2];

 if (VAR_3)
  FUNC_1(VAR_1, &VAR_2->fpstate.soft, sizeof (*VAR_1));

 return VAR_3 != 0;
}
