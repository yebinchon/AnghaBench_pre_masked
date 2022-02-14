
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct mm_struct {scalar_t__ context; } ;
typedef int smpfunc_t ;
typedef int cpumask_t ;


 scalar_t__ FUNC_0 (int (*) (struct vm_area_struct*,unsigned long,unsigned long)) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int * FUNC_4 (struct mm_struct*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,unsigned long,unsigned long,unsigned long) ;

void FUNC_7(struct vm_area_struct *VAR_1, unsigned long VAR_2,
    unsigned long VAR_3)
{
 struct mm_struct *VAR_4 = VAR_1->vm_mm;

 if (VAR_4->context != VAR_0) {
  cpumask_t VAR_5 = *FUNC_4(VAR_4);
  FUNC_1(FUNC_5(), VAR_5);
  if (!FUNC_2(VAR_5))
   FUNC_6((smpfunc_t) FUNC_0(FUNC_3), (unsigned long) VAR_1, VAR_2, VAR_3);
  FUNC_3(VAR_1, VAR_2, VAR_3);
 }
}
