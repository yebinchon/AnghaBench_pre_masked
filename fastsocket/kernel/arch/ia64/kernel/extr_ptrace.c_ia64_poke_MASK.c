
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
struct task_struct {int dummy; } ;
struct switch_stack {int dummy; } ;
struct pt_regs {scalar_t__ ar_bspstore; } ;


 long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct task_struct*,unsigned long,long*,int,int) ;
 scalar_t__ FUNC_1 (unsigned long*) ;
 unsigned long FUNC_2 (unsigned long*,unsigned long*) ;
 long* FUNC_3 (unsigned long*,unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long,unsigned long) ;
 int FUNC_5 (struct task_struct*,struct switch_stack*,unsigned long*,unsigned long*,long,unsigned long*) ;
 struct pt_regs* FUNC_6 (struct task_struct*) ;

long
FUNC_7 (struct task_struct *VAR_2, struct switch_stack *VAR_3,
    unsigned long VAR_4, unsigned long VAR_5, long VAR_6)
{
 unsigned long *VAR_7, *VAR_8, VAR_9, *VAR_10;
 unsigned long *VAR_11 = (long *) VAR_4;
 struct pt_regs *VAR_12;

 VAR_10 = (unsigned long *) VAR_5;
 VAR_12 = FUNC_6(VAR_2);
 VAR_7 = (unsigned long *) VAR_12->ar_bspstore;
 VAR_8 = (unsigned long *) VAR_2 + VAR_1/8;
 if (FUNC_4(VAR_5, (unsigned long) VAR_7,
     (unsigned long) VAR_11))
 {





  if (FUNC_1(VAR_10))
   FUNC_5(VAR_2, VAR_3, VAR_8, VAR_10, VAR_6,
     VAR_11);
  else {
   if (VAR_10 < VAR_11) {
    VAR_9 = FUNC_2(VAR_7, VAR_10);
    *FUNC_3(VAR_8, VAR_9) = VAR_6;
   }
  }
 } else if (FUNC_0(VAR_2, VAR_5, &VAR_6, sizeof(VAR_6), 1)
     != sizeof(VAR_6))
  return -VAR_0;
 return 0;
}
