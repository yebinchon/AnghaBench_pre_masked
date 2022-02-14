
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_mm; } ;
typedef int pte_t ;
struct TYPE_2__ {scalar_t__ active_mm; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;

void FUNC_11(struct vm_area_struct *VAR_3, unsigned long VAR_4, pte_t VAR_5)
{
 unsigned long VAR_6;
 int VAR_7, VAR_8;




 if (VAR_2->active_mm != VAR_3->vm_mm)
  return;

 VAR_8 = FUNC_4() & VAR_0;

 FUNC_2(VAR_6);
 VAR_4 &= VAR_1;
 FUNC_5(VAR_4 | VAR_8);
 FUNC_0();
 FUNC_7();
 VAR_7 = FUNC_10();
 FUNC_3(FUNC_6(VAR_5));
 FUNC_5(VAR_4 | VAR_8);
 if (VAR_7 < 0)
  FUNC_9();
 else
  FUNC_8();

 FUNC_5(VAR_8);
 FUNC_1(VAR_6);
}
