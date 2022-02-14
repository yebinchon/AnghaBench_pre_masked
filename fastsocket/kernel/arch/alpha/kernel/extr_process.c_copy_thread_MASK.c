
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long usp; unsigned long ksp; int flags; unsigned long unique; } ;
struct thread_info {TYPE_1__ pcb; } ;
struct task_struct {int dummy; } ;
struct switch_stack {unsigned long r26; } ;
struct pt_regs {int ps; unsigned long r20; scalar_t__ r19; scalar_t__ r0; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;
 struct thread_info* FUNC_1 (struct task_struct*) ;

int
FUNC_2(unsigned long VAR_2, unsigned long VAR_3,
     unsigned long VAR_4,
     struct task_struct * VAR_5, struct pt_regs * VAR_6)
{
 extern void FUNC_3(void);

 struct thread_info *VAR_7 = FUNC_1(VAR_5);
 struct pt_regs * VAR_8;
 struct switch_stack * VAR_9, *VAR_10;
 unsigned long VAR_11, VAR_12;

 VAR_11 = VAR_1 - sizeof(struct pt_regs);
 if (!(VAR_6->ps & 8))
  VAR_11 = (VAR_1-1) & (unsigned long) VAR_6;
 VAR_8 = (struct pt_regs *)
   (VAR_11 + VAR_1 + FUNC_0(VAR_5));

 *VAR_8 = *VAR_6;
 VAR_12 = VAR_6->r20;
 VAR_8->r0 = 0;
 VAR_8->r19 = 0;
 VAR_8->r20 = 1;
 VAR_6->r20 = 0;
 VAR_10 = ((struct switch_stack *) VAR_6) - 1;
 VAR_9 = ((struct switch_stack *) VAR_8) - 1;
 *VAR_9 = *VAR_10;
 VAR_9->r26 = (unsigned long) FUNC_3;
 VAR_7->pcb.usp = VAR_3;
 VAR_7->pcb.ksp = (unsigned long) VAR_9;
 VAR_7->pcb.flags = 1;
 if (VAR_2 & VAR_0)
  VAR_7->pcb.unique = VAR_12;

 return 0;
}
