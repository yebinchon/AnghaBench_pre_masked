
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_mm; } ;
typedef int pud_t ;
struct TYPE_6__ {int pte_high; } ;
typedef TYPE_1__ pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;
struct TYPE_7__ {scalar_t__ active_mm; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct vm_area_struct*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 int FUNC_3 () ;
 int * FUNC_4 (scalar_t__,unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (int *,unsigned long) ;
 TYPE_1__* FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (TYPE_1__) ;
 int * FUNC_9 (int *,unsigned long) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (unsigned long) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int ) ;

void FUNC_21(struct vm_area_struct * VAR_6, unsigned long VAR_7, pte_t VAR_8)
{
 unsigned long VAR_9;
 pgd_t *VAR_10;
 pud_t *VAR_11;
 pmd_t *VAR_12;
 pte_t *VAR_13;
 int VAR_14, VAR_15;




 if (VAR_5->active_mm != VAR_6->vm_mm)
  return;

 FUNC_0(VAR_9);

 VAR_15 = FUNC_10() & VAR_0;
 VAR_7 &= (VAR_2 << 1);
 FUNC_17(VAR_7 | VAR_15);
 VAR_10 = FUNC_4(VAR_6->vm_mm, VAR_7);
 FUNC_3();
 FUNC_12();
 FUNC_13();
 VAR_11 = FUNC_9(VAR_10, VAR_7);
 VAR_12 = FUNC_6(VAR_11, VAR_7);
 VAR_14 = FUNC_11();
 {
  VAR_13 = FUNC_7(VAR_12, VAR_7);






  FUNC_18(FUNC_8(*VAR_13++) >> 6);
  FUNC_19(FUNC_8(*VAR_13) >> 6);

  FUNC_3();
  if (VAR_14 < 0)
   FUNC_15();
  else
   FUNC_14();
 }
 FUNC_16();
 FUNC_2(VAR_6);
 FUNC_1(VAR_9);
}
