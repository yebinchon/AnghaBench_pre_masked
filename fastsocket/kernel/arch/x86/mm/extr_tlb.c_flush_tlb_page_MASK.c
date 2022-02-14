
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct mm_struct {int dummy; } ;
struct TYPE_2__ {scalar_t__ mm; struct mm_struct* active_mm; } ;


 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int ,struct mm_struct*,unsigned long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mm_struct*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;

void FUNC_8(struct vm_area_struct *VAR_2, unsigned long VAR_3)
{
 struct mm_struct *VAR_4 = VAR_2->vm_mm;

 FUNC_5();

 if (VAR_0->active_mm == VAR_4) {
  if (VAR_0->mm)
   FUNC_0(VAR_3);
  else
   FUNC_3(FUNC_7());
 }

 if (FUNC_1(FUNC_4(VAR_4), FUNC_7()) < VAR_1)
  FUNC_2(FUNC_4(VAR_4), VAR_4, VAR_3);

 FUNC_6();
}
