
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_mm; } ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;
struct TYPE_2__ {scalar_t__ active_mm; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int * FUNC_2 (scalar_t__,unsigned long) ;
 int * FUNC_3 (int *,unsigned long) ;
 int * FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (unsigned long) ;

void FUNC_12(struct vm_area_struct * VAR_3, unsigned long VAR_4, pte_t VAR_5)
{
 unsigned long VAR_6;
 pgd_t *VAR_7;
 pmd_t *VAR_8;
 pte_t *VAR_9;
 int VAR_10;




 if (VAR_2->active_mm != VAR_3->vm_mm)
  return;

 VAR_10 = FUNC_6() & VAR_0;

 FUNC_1(VAR_6);
 VAR_4 &= VAR_1;
 FUNC_11(VAR_4);
 FUNC_9(VAR_10);
 VAR_7 = FUNC_2(VAR_3->vm_mm, VAR_4);
 VAR_8 = FUNC_3(VAR_7, VAR_4);
 VAR_9 = FUNC_4(VAR_8, VAR_4);
 FUNC_7();

 FUNC_10(FUNC_5(*VAR_9++) >> 6);
 FUNC_8();

 FUNC_9(VAR_10);
 FUNC_0(VAR_6);
}
