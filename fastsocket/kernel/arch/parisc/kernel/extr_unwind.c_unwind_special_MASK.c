
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unwind_frame_info {int sp; int prev_ip; int prev_sp; } ;
struct pt_regs {int * iaoq; int * gr; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 unsigned long FUNC_1 (unsigned long*) ;

__attribute__((used)) static int FUNC_2(struct unwind_frame_info *VAR_1, unsigned long VAR_2, int VAR_3)
{
 extern void FUNC_3(int, struct pt_regs *);
 static unsigned long *VAR_4 = (unsigned long *)&FUNC_3;

 if (VAR_2 == FUNC_1(VAR_4)) {
  struct pt_regs *VAR_5 = (struct pt_regs *)(VAR_1->sp - VAR_3 - VAR_0);
  FUNC_0("Unwinding through handle_interruption()\n");
  VAR_1->prev_sp = VAR_5->gr[30];
  VAR_1->prev_ip = VAR_5->iaoq[0];

  return 1;
 }

 return 0;
}
