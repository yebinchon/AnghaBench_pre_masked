
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; int vm_flags; } ;
struct mm_struct {int mmap_sem; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;
struct TYPE_2__ {int min_flt; int maj_flt; struct mm_struct* mm; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int) ;
 TYPE_1__* VAR_13 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct vm_area_struct*,unsigned long) ;
 struct vm_area_struct* FUNC_5 (struct mm_struct*,unsigned long) ;
 int FUNC_6 (struct vm_area_struct*,unsigned long) ;
 int FUNC_7 (struct mm_struct*,struct vm_area_struct*,unsigned long,int ) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 () ;
 int * FUNC_10 (struct mm_struct*,unsigned long) ;
 int * FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int ) ;
 int * FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int * FUNC_16 (int *,unsigned long) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (int *) ;

int FUNC_19(unsigned long VAR_14, unsigned long VAR_15,
        int VAR_16, int VAR_17, int *VAR_18)
{
 struct mm_struct *VAR_19 = VAR_13->mm;
 struct vm_area_struct *VAR_20;
 pgd_t *VAR_21;
 pud_t *VAR_22;
 pmd_t *VAR_23;
 pte_t *VAR_24;
 int VAR_25 = -VAR_1;

 *VAR_18 = VAR_4;





 if (FUNC_8())
  goto out_nosemaphore;

 FUNC_3(&VAR_19->mmap_sem);
 VAR_20 = FUNC_5(VAR_19, VAR_14);
 if (!VAR_20)
  goto out;
 else if (VAR_20->vm_start <= VAR_14)
  goto good_area;
 else if (!(VAR_20->vm_flags & VAR_10))
  goto out;
 else if (VAR_17 && !FUNC_0(VAR_14))
  goto out;
 else if (FUNC_4(VAR_20, VAR_14))
  goto out;

good_area:
 *VAR_18 = VAR_3;
 if (VAR_16 && !(VAR_20->vm_flags & VAR_12))
  goto out;


 if (!VAR_16 && !(VAR_20->vm_flags & (VAR_11 | VAR_5)))
  goto out;

 do {
  int VAR_26;

  VAR_26 = FUNC_7(VAR_19, VAR_20, VAR_14, VAR_16 ? VAR_2 : 0);
  if (FUNC_17(VAR_26 & VAR_6)) {
   if (VAR_26 & VAR_8) {
    goto out_of_memory;
   } else if (VAR_26 & VAR_9) {
    VAR_25 = -VAR_0;
    goto out;
   }
   FUNC_1();
  }
  if (VAR_26 & VAR_7)
   VAR_13->maj_flt++;
  else
   VAR_13->min_flt++;

  VAR_21 = FUNC_10(VAR_19, VAR_14);
  VAR_22 = FUNC_16(VAR_21, VAR_14);
  VAR_23 = FUNC_11(VAR_22, VAR_14);
  VAR_24 = FUNC_13(VAR_23, VAR_14);
 } while (!FUNC_14(*VAR_24));
 VAR_25 = 0;
 FUNC_6(VAR_20, VAR_14);
out:
 FUNC_18(&VAR_19->mmap_sem);
out_nosemaphore:
 return VAR_25;

out_of_memory:




 FUNC_18(&VAR_19->mmap_sem);
 FUNC_9();
 return 0;
}
