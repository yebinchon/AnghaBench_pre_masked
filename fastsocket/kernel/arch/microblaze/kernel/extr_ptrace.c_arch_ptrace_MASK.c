
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int val ;
struct task_struct {long exit_code; int exit_state; TYPE_1__* mm; } ;
typedef unsigned long microblaze_reg_t ;
typedef int data ;
struct TYPE_2__ {unsigned long start_code; unsigned long start_data; unsigned long end_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct task_struct*,long,...) ;
 int FUNC_1 (struct task_struct*,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct task_struct*,long) ;
 int FUNC_4 (unsigned long,unsigned long*) ;
 unsigned long* FUNC_5 (long,struct task_struct*) ;
 int FUNC_6 (struct task_struct*,int ) ;
 int FUNC_7 (long) ;
 int FUNC_8 (struct task_struct*) ;

long FUNC_9(struct task_struct *VAR_8, long VAR_9, long VAR_10, long VAR_11)
{
 int VAR_12;
 unsigned long VAR_13 = 0;
 unsigned long VAR_14;

 switch (VAR_9) {
 case 134:
 case 135:
  FUNC_2("PEEKTEXT/PEEKDATA at %08lX\n", VAR_10);
  VAR_14 = FUNC_0(VAR_8, VAR_10, &VAR_13, sizeof(VAR_13), 0);
  VAR_12 = -VAR_0;
  if (VAR_14 != sizeof(VAR_13))
   break;
  VAR_12 = FUNC_4(VAR_13, (unsigned long *)VAR_11);
  break;

 case 131:
 case 132:
  FUNC_2("POKETEXT/POKEDATA to %08lX\n", VAR_10);
  VAR_12 = 0;
  if (FUNC_0(VAR_8, VAR_10, &VAR_11, sizeof(VAR_11), 1)
      == sizeof(VAR_11))
   break;
  VAR_12 = -VAR_0;
  break;


 case 133:
 case 130:
  FUNC_2("PEEKUSR/POKEUSR : 0x%08lx\n", VAR_10);
  VAR_12 = 0;
  if (VAR_10 >= VAR_3 && VAR_9 == 133) {




   if (VAR_10 == VAR_4) {
    VAR_13 = VAR_8->mm->start_code;
   } else if (VAR_10 == VAR_2) {
    VAR_13 = VAR_8->mm->start_data;
   } else if (VAR_10 == VAR_5) {
    VAR_13 = VAR_8->mm->end_code
     - VAR_8->mm->start_code;
   } else {
    VAR_12 = -VAR_0;
   }
  } else if (VAR_10 >= 0 && VAR_10 < VAR_3 && (VAR_10 & 0x3) == 0) {
   microblaze_reg_t *VAR_15 = FUNC_5(VAR_10, VAR_8);
   if (VAR_9 == 133)
    VAR_13 = *VAR_15;
   else
    *VAR_15 = VAR_11;
  } else
   VAR_12 = -VAR_0;

  if (VAR_12 == 0 && VAR_9 == 133)
   VAR_12 = FUNC_4(VAR_13, (unsigned long *)VAR_11);
  break;

 case 128:
  FUNC_2("PTRACE_SYSCALL\n");
 case 129:
  FUNC_2("PTRACE_SINGLESTEP\n");

 case 138:
  FUNC_2("PTRACE_CONT\n");
  VAR_12 = -VAR_0;
  if (!FUNC_7(VAR_11))
   break;

  if (VAR_9 == 128)
   FUNC_6(VAR_8, VAR_7);
  else
   FUNC_1(VAR_8, VAR_7);

  VAR_8->exit_code = VAR_11;
  FUNC_2("wakeup_process\n");
  FUNC_8(VAR_8);
  VAR_12 = 0;
  break;






 case 136:
  FUNC_2("PTRACE_KILL\n");
  VAR_12 = 0;
  if (VAR_8->exit_state == VAR_1)
   break;
  VAR_8->exit_code = VAR_6;
  FUNC_8(VAR_8);
  break;

 case 137:
  FUNC_2("PTRACE_DETACH\n");
  VAR_12 = FUNC_3(VAR_8, VAR_11);
  break;
 default:

  VAR_12 = -VAR_0;
 }
 return VAR_12;
}
