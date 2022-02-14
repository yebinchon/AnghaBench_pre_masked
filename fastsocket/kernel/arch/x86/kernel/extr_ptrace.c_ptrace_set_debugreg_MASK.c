
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long debugreg0; unsigned long debugreg1; unsigned long debugreg2; unsigned long debugreg3; unsigned long debugreg6; unsigned long debugreg7; } ;
struct task_struct {TYPE_1__ thread; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct task_struct*,int ) ;
 unsigned long FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct task_struct *VAR_4,
          int VAR_5, unsigned long VAR_6)
{
 int VAR_7;

 if (FUNC_3(VAR_5 == 4 || VAR_5 == 5))
  return -VAR_2;

 if (VAR_5 < 4 && FUNC_3(VAR_6 >= FUNC_1(VAR_4)))
  return -VAR_2;

 switch (VAR_5) {
 case 0: VAR_4->thread.debugreg0 = VAR_6; break;
 case 1: VAR_4->thread.debugreg1 = VAR_6; break;
 case 2: VAR_4->thread.debugreg2 = VAR_6; break;
 case 3: VAR_4->thread.debugreg3 = VAR_6; break;

 case 6:
  if ((VAR_6 & ~0xffffffffUL) != 0)
   return -VAR_2;
  VAR_4->thread.debugreg6 = VAR_6;
  break;

 case 7:
  VAR_6 &= ~VAR_1;
  for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
   if ((0x5554 >> ((VAR_6 >> (16 + 4*VAR_7)) & 0xf)) & 1)
    return -VAR_2;
  VAR_4->thread.debugreg7 = VAR_6;
  if (VAR_6)
   FUNC_2(VAR_4, VAR_3);
  else
   FUNC_0(VAR_4, VAR_3);
  break;
 }

 return 0;
}
