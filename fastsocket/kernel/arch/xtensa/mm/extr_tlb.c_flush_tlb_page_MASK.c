
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; struct mm_struct* vm_mm; } ;
struct mm_struct {scalar_t__ context; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int) ;

void FUNC_6 (struct vm_area_struct *VAR_2, unsigned long VAR_3)
{
 struct mm_struct* VAR_4 = VAR_2->vm_mm;
 unsigned long VAR_5;
 int VAR_6;

 if(VAR_4->context == VAR_0)
  return;

 FUNC_4(VAR_5);

        VAR_6 = FUNC_0();

 if (VAR_2->vm_flags & VAR_1)
  FUNC_2(VAR_3);
 FUNC_1(VAR_3);

 FUNC_5(VAR_6);

 FUNC_3(VAR_5);
}
