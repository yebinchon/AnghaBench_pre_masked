
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long debugreg0; unsigned long debugreg1; unsigned long debugreg2; unsigned long debugreg3; unsigned long debugreg6; unsigned long debugreg7; } ;
struct task_struct {TYPE_1__ thread; } ;



__attribute__((used)) static unsigned long FUNC_0(struct task_struct *VAR_0, int VAR_1)
{
 switch (VAR_1) {
 case 0: return VAR_0->thread.debugreg0;
 case 1: return VAR_0->thread.debugreg1;
 case 2: return VAR_0->thread.debugreg2;
 case 3: return VAR_0->thread.debugreg3;
 case 6: return VAR_0->thread.debugreg6;
 case 7: return VAR_0->thread.debugreg7;
 }
 return 0;
}
