
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int preempt_count; int previous_sp; int task; } ;
union irq_ctx {TYPE_1__ tinfo; } ;
typedef int u32 ;
struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (unsigned int) ;
 union irq_ctx** VAR_2 ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct pt_regs* FUNC_5 (struct pt_regs*) ;
 size_t FUNC_6 () ;

int FUNC_7(unsigned int VAR_3, struct pt_regs *VAR_4)
{
 struct pt_regs *VAR_5 = FUNC_5(VAR_4);




 FUNC_3();
 VAR_3 = FUNC_2(VAR_3);
  FUNC_1(VAR_3);

 FUNC_4();

 FUNC_5(VAR_5);
 return 1;
}
