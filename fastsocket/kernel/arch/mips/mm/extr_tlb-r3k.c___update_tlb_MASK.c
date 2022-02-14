
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_mm; } ;
typedef int pte_t ;
struct TYPE_2__ {scalar_t__ active_mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;

void FUNC_12(struct vm_area_struct *VAR_5, unsigned long VAR_6, pte_t VAR_7)
{
 unsigned long VAR_8;
 int VAR_9, VAR_10;




 if (VAR_4->active_mm != VAR_5->vm_mm)
  return;

 VAR_10 = FUNC_5() & VAR_0;
 FUNC_2(VAR_8);
 VAR_6 &= VAR_2;
 FUNC_10(VAR_6 | VAR_10);
 VAR_1;
 FUNC_7();
 VAR_9 = FUNC_6();
 FUNC_11(FUNC_4(VAR_7));
 FUNC_10(VAR_6 | VAR_10);
 if (VAR_9 < 0) {
  FUNC_9();
 } else {
  FUNC_8();
 }
 FUNC_10(VAR_10);
 FUNC_1(VAR_8);
}
