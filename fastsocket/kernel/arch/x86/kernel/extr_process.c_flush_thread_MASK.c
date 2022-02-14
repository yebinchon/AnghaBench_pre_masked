
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tls_array; scalar_t__ debugreg7; scalar_t__ debugreg6; scalar_t__ debugreg3; scalar_t__ debugreg2; scalar_t__ debugreg1; scalar_t__ debugreg0; } ;
struct task_struct {scalar_t__ fpu_counter; TYPE_1__ thread; } ;


 int VAR_0 ;
 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*,int ) ;
 int FUNC_2 () ;
 struct task_struct* VAR_1 ;
 int FUNC_3 (int ,int ,int) ;

void FUNC_4(void)
{
 struct task_struct *VAR_2 = VAR_1;

 FUNC_1(VAR_2, VAR_0);

 VAR_2->thread.debugreg0 = 0;
 VAR_2->thread.debugreg1 = 0;
 VAR_2->thread.debugreg2 = 0;
 VAR_2->thread.debugreg3 = 0;
 VAR_2->thread.debugreg6 = 0;
 VAR_2->thread.debugreg7 = 0;
 FUNC_3(VAR_2->thread.tls_array, 0, sizeof(VAR_2->thread.tls_array));



 VAR_2->fpu_counter = 0;
 FUNC_0(VAR_2);
 FUNC_2();
}
