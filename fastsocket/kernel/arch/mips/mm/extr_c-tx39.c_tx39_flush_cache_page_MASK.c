
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; struct mm_struct* vm_mm; } ;
struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;
struct TYPE_2__ {struct mm_struct* active_mm; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,struct mm_struct*) ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int * FUNC_1 (struct mm_struct*,unsigned long) ;
 int * FUNC_2 (int *,unsigned long) ;
 int * FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int *,unsigned long) ;
 int FUNC_6 () ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (unsigned long) ;

__attribute__((used)) static void FUNC_11(struct vm_area_struct *VAR_6, unsigned long VAR_7, unsigned long VAR_8)
{
 int VAR_9 = VAR_6->vm_flags & VAR_1;
 struct mm_struct *VAR_10 = VAR_6->vm_mm;
 pgd_t *VAR_11;
 pud_t *VAR_12;
 pmd_t *VAR_13;
 pte_t *VAR_14;





 if (FUNC_0(FUNC_6(), VAR_10) == 0)
  return;

 VAR_7 &= VAR_0;
 VAR_11 = FUNC_1(VAR_10, VAR_7);
 VAR_12 = FUNC_5(VAR_11, VAR_7);
 VAR_13 = FUNC_2(VAR_12, VAR_7);
 VAR_14 = FUNC_3(VAR_13, VAR_7);





 if (!(FUNC_4(*VAR_14) & VAR_2))
  return;







 if ((VAR_10 == VAR_5->active_mm) && (FUNC_4(*VAR_14) & VAR_3)) {
  if (VAR_4 || VAR_9)
   FUNC_7(VAR_7);
  if (VAR_9)
   FUNC_9(VAR_7);

  return;
 }





 if (VAR_4 || VAR_9)
  FUNC_8(VAR_7);
 if (VAR_9)
  FUNC_10(VAR_7);
}
