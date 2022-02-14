
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; unsigned long vm_pgoff; struct mm_struct* vm_mm; } ;
struct mm_struct {int dummy; } ;
typedef int pud_t ;
typedef int pgprot_t ;
typedef int pgd_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_4 (struct mm_struct*,int *,unsigned long,unsigned long,unsigned long,int ,int) ;
 int * FUNC_5 (struct mm_struct*,unsigned long) ;
 int * FUNC_6 (struct mm_struct*,int *,unsigned long) ;

int FUNC_7(struct vm_area_struct *VAR_7, unsigned long VAR_8,
  unsigned long VAR_9, unsigned long VAR_10, pgprot_t VAR_11)
{
 int VAR_12 = 0;
 pgd_t * VAR_13;
 unsigned long VAR_14 = VAR_8;
 unsigned long VAR_15 = VAR_8 + VAR_10;
 struct mm_struct *VAR_16 = VAR_7->vm_mm;
 int VAR_17 = FUNC_0(VAR_9);
 unsigned long VAR_18 = FUNC_1(VAR_9) << VAR_1;
 unsigned long VAR_19;

 VAR_19 = VAR_18 | (((unsigned long) VAR_17) << 32UL);


 VAR_7->vm_flags |= VAR_4 | VAR_6 | VAR_5;
 VAR_7->vm_pgoff = VAR_19 >> VAR_1;

 VAR_18 -= VAR_8;
 VAR_13 = FUNC_5(VAR_16, VAR_8);
 FUNC_2(VAR_7, VAR_14, VAR_15);

 while (VAR_8 < VAR_15) {
  pud_t *VAR_20 = FUNC_6(VAR_16, VAR_13, VAR_8);
  VAR_12 = -VAR_0;
  if (!VAR_20)
   break;
  VAR_12 = FUNC_4(VAR_16, VAR_20, VAR_8, VAR_15 - VAR_8, VAR_18 + VAR_8, VAR_11, VAR_17);
  if (VAR_12)
   break;
  VAR_8 = (VAR_8 + VAR_3) & VAR_2;
  VAR_13++;
 }

 FUNC_3(VAR_7, VAR_14, VAR_15);
 return VAR_12;
}
