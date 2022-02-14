
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {scalar_t__ context; } ;
typedef int smpfunc_t ;
typedef int cpumask_t ;


 scalar_t__ FUNC_0 (int (*) (struct mm_struct*)) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mm_struct*) ;
 int * FUNC_4 (struct mm_struct*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,unsigned long) ;

void FUNC_7(struct mm_struct *VAR_1)
{
 if(VAR_1->context != VAR_0) {
  cpumask_t VAR_2 = *FUNC_4(VAR_1);
  FUNC_1(FUNC_5(), VAR_2);
  if (!FUNC_2(VAR_2))
   FUNC_6((smpfunc_t) FUNC_0(FUNC_3), (unsigned long) VAR_1);
  FUNC_3(VAR_1);
 }
}
