
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct switch_stack {int dummy; } ;
struct pt_regs {scalar_t__ ar_bspstore; } ;
typedef int ret ;


 long VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (struct task_struct*,unsigned long,long*,int,int ) ;
 long FUNC_1 (struct task_struct*,struct switch_stack*,unsigned long*,unsigned long*,unsigned long*) ;
 unsigned long FUNC_2 (unsigned long*,unsigned long*) ;
 unsigned long* FUNC_3 (unsigned long*) ;
 long* FUNC_4 (unsigned long*,unsigned long) ;
 unsigned long FUNC_5 (unsigned long*) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long,unsigned long) ;
 struct pt_regs* FUNC_7 (struct task_struct*) ;

long
FUNC_8 (struct task_struct *VAR_2, struct switch_stack *VAR_3,
    unsigned long VAR_4, unsigned long VAR_5, long *VAR_6)
{
 unsigned long *VAR_7, *VAR_8, VAR_9, *VAR_10, *VAR_11, *VAR_12;
 struct pt_regs *VAR_13;
 size_t VAR_14;
 long VAR_15;

 VAR_11 = (long *) VAR_4;
 VAR_10 = (unsigned long *) VAR_5;
 VAR_13 = FUNC_7(VAR_2);
 VAR_7 = (unsigned long *) VAR_13->ar_bspstore;
 VAR_8 = (unsigned long *) VAR_2 + VAR_1/8;
 if (FUNC_6(VAR_5, (unsigned long) VAR_7,
     (unsigned long) VAR_11))
 {





  VAR_12 = FUNC_3(VAR_10);
  VAR_15 = FUNC_1(VAR_2, VAR_3, VAR_8, VAR_12, VAR_11);

  if (VAR_10 == VAR_12) {

   *VAR_6 = VAR_15;
   return 0;
  }

  if (((1UL << FUNC_5(VAR_10)) & VAR_15) != 0) {
   *VAR_6 = 0;
   return 0;
  }

  if (VAR_10 < VAR_11) {




   VAR_9 = FUNC_2(VAR_7, VAR_10);
   *VAR_6 = *FUNC_4(VAR_8, VAR_9);
   return 0;
  }
 }
 VAR_14 = FUNC_0(VAR_2, VAR_5, &VAR_15, sizeof(VAR_15), 0);
 if (VAR_14 != sizeof(VAR_15))
  return -VAR_0;
 *VAR_6 = VAR_15;
 return 0;
}
