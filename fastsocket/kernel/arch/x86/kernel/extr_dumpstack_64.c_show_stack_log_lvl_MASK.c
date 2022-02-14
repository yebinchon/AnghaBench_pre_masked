
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sp; } ;
struct task_struct {TYPE_1__ thread; } ;
struct pt_regs {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct task_struct*,struct pt_regs*,unsigned long*,char*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

void
FUNC_7(struct task_struct *VAR_5, struct pt_regs *VAR_6,
     unsigned long *VAR_7, char *VAR_8)
{
 unsigned long *VAR_9;
 unsigned long *VAR_10;
 unsigned long *VAR_11;
 int VAR_12;
 int VAR_13;

 FUNC_1();
 VAR_12 = FUNC_5();

 VAR_9 = (unsigned long *)(FUNC_0(VAR_3, VAR_12));
 VAR_10 = (unsigned long *)(FUNC_0(VAR_3, VAR_12) - VAR_0);





 if (VAR_7 == ((void*)0)) {
  if (VAR_5)
   VAR_7 = (unsigned long *)VAR_5->thread.sp;
  else
   VAR_7 = (unsigned long *)&VAR_7;
 }

 VAR_11 = VAR_7;
 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
  if (VAR_11 >= VAR_10 && VAR_11 <= VAR_9) {
   if (VAR_11 == VAR_9) {
    VAR_11 = (unsigned long *) (VAR_9[-1]);
    FUNC_3(" <EOI> ");
   }
  } else {
  if (((long) VAR_11 & (VAR_2-1)) == 0)
   break;
  }
  if (VAR_13 && ((VAR_13 % VAR_1) == 0))
   FUNC_3("\n%s", VAR_8);
  FUNC_3(" %016lx", *VAR_11++);
  FUNC_6();
 }
 FUNC_2();

 FUNC_3("\n");
 FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8);
}
