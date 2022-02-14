
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int pc; unsigned long* regs; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long,unsigned long,unsigned long*,unsigned long*,struct pt_regs*) ;
 int FUNC_1 (char*,unsigned long) ;
 int FUNC_2 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct pt_regs *VAR_5)
{
 unsigned long VAR_6, VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 VAR_6 = VAR_5->pc & ~1;
 VAR_7 = VAR_5->regs[14];

 VAR_9 = 1;
 for (;;) {
  int VAR_10;
  unsigned long VAR_11, VAR_12;

  if (VAR_6 == ((unsigned long) &VAR_4 & ~1)) {
   FUNC_2("SYSCALL\n");
   FUNC_3(VAR_6,VAR_7);
   return;
  }

  if (VAR_6 == ((unsigned long) &VAR_3 & ~1)) {
   FUNC_2("SYSCALL (PREEMPTED)\n");
   FUNC_3(VAR_6,VAR_7);
   return;
  }



  if (VAR_6 == ((unsigned long) &VAR_1 & ~1)) {
   FUNC_2("EXCEPTION\n");
   FUNC_3(VAR_6,VAR_7);
   return;
  }

  if (VAR_6 == ((unsigned long) &VAR_2 & ~1)) {
   FUNC_2("IRQ\n");
   FUNC_3(VAR_6,VAR_7);
   return;
  }

  VAR_10 = ((VAR_6 >= VAR_0) && (VAR_7 >= VAR_0) &&
   ((VAR_6 & 3) == 0) && ((VAR_7 & 7) == 0));

  VAR_6 -= VAR_8;

  FUNC_2("[<%08lx>] ", VAR_6);
  FUNC_1("%s\n", VAR_6);

  if (VAR_9) {



   VAR_12 = VAR_5->regs[18];
  } else {
   VAR_12 = 0;
  }

  if (FUNC_0(VAR_7, VAR_6, &VAR_11, &VAR_12, VAR_5) == 0) {
   VAR_8 = sizeof(unsigned long);
   VAR_6 = VAR_12 & ~1;
   VAR_7 = VAR_11;
  } else {
   FUNC_2("Unable to lookup previous stack frame\n");
   break;
  }
  VAR_9 = 0;
 }

 FUNC_2("\n");

}
