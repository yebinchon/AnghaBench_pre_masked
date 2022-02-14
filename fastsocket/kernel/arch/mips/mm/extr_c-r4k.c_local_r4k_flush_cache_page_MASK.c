
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; struct mm_struct* vm_mm; } ;
struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
struct flush_cache_page_args {unsigned long addr; int pfn; struct vm_area_struct* vma; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;
struct TYPE_2__ {struct mm_struct* active_mm; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct page*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int,struct mm_struct*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_2 (struct mm_struct*,int) ;
 int FUNC_3 (struct mm_struct*) ;
 void* FUNC_4 (struct page*,int ) ;
 void* FUNC_5 (struct page*,unsigned long) ;
 int FUNC_6 (void*,int ) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (struct page*) ;
 struct page* FUNC_9 (int ) ;
 int * FUNC_10 (struct mm_struct*,unsigned long) ;
 int * FUNC_11 (int *,unsigned long) ;
 int * FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int * FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (unsigned long) ;
 int FUNC_17 (unsigned long) ;
 int FUNC_18 (unsigned long) ;
 int FUNC_19 () ;

__attribute__((used)) static inline void FUNC_20(void *VAR_9)
{
 struct flush_cache_page_args *VAR_10 = VAR_9;
 struct vm_area_struct *VAR_11 = VAR_10->vma;
 unsigned long VAR_12 = VAR_10->addr;
 struct page *VAR_13 = FUNC_9(VAR_10->pfn);
 int VAR_14 = VAR_11->vm_flags & VAR_2;
 struct mm_struct *VAR_15 = VAR_11->vm_mm;
 int VAR_16 = 0;
 pgd_t *VAR_17;
 pud_t *VAR_18;
 pmd_t *VAR_19;
 pte_t *VAR_20;
 void *VAR_21;





 if (!FUNC_3(VAR_15))
  return;

 VAR_12 &= VAR_1;
 VAR_17 = FUNC_10(VAR_15, VAR_12);
 VAR_18 = FUNC_15(VAR_17, VAR_12);
 VAR_19 = FUNC_11(VAR_18, VAR_12);
 VAR_20 = FUNC_12(VAR_19, VAR_12);





 if (!(FUNC_13(*VAR_20)))
  return;

 if ((VAR_15 == VAR_8->active_mm) && (FUNC_14(*VAR_20) & VAR_3))
  VAR_21 = ((void*)0);
 else {




  VAR_16 = (VAR_4 &&
    FUNC_8(VAR_13) && !FUNC_0(VAR_13));
  if (VAR_16)
   VAR_21 = FUNC_5(VAR_13, VAR_12);
  else
   VAR_21 = FUNC_4(VAR_13, VAR_0);
  VAR_12 = (unsigned long)VAR_21;
 }

 if (VAR_4 || (VAR_14 && !VAR_5)) {
  FUNC_16(VAR_12);
  if (VAR_14 && !VAR_7)
   FUNC_18(VAR_12);
 }
 if (VAR_14) {
  if (VAR_21 && VAR_6 && VAR_15 == VAR_8->active_mm) {
   int VAR_22 = FUNC_19();

   if (FUNC_1(VAR_22, VAR_15) != 0)
    FUNC_2(VAR_15, VAR_22);
  } else
   FUNC_17(VAR_12);
 }

 if (VAR_21) {
  if (VAR_16)
   FUNC_7();
  else
   FUNC_6(VAR_21, VAR_0);
 }
}
