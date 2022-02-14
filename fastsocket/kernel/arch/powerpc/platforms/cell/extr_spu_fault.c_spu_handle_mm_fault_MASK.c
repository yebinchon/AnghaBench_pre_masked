
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; int vm_flags; } ;
struct mm_struct {int mmap_sem; int * pgd; } ;
struct TYPE_2__ {int min_flt; int maj_flt; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__* VAR_13 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct vm_area_struct*,unsigned long) ;
 struct vm_area_struct* FUNC_3 (struct mm_struct*,unsigned long) ;
 unsigned int FUNC_4 (struct mm_struct*,struct vm_area_struct*,unsigned long,int ) ;
 scalar_t__ FUNC_5 (unsigned int) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct mm_struct *VAR_14, unsigned long VAR_15,
  unsigned long VAR_16, unsigned *VAR_17)
{
 struct vm_area_struct *VAR_18;
 unsigned long VAR_19;
 int VAR_20;

 if (VAR_14 == ((void*)0))
  return -VAR_0;

 if (VAR_14->pgd == ((void*)0))
  return -VAR_0;

 FUNC_1(&VAR_14->mmap_sem);
 VAR_20 = -VAR_0;
 VAR_18 = FUNC_3(VAR_14, VAR_15);
 if (!VAR_18)
  goto out_unlock;

 if (VAR_15 < VAR_18->vm_start) {
  if (!(VAR_18->vm_flags & VAR_10))
   goto out_unlock;
  if (FUNC_2(VAR_18, VAR_15))
   goto out_unlock;
 }

 VAR_19 = VAR_16 & VAR_4;
 if (VAR_19) {
  if (!(VAR_18->vm_flags & VAR_12))
   goto out_unlock;
 } else {
  if (VAR_16 & VAR_3)
   goto out_unlock;
  if (!(VAR_18->vm_flags & (VAR_11 | VAR_5)))
   goto out_unlock;
 }

 VAR_20 = 0;
 *VAR_17 = FUNC_4(VAR_14, VAR_18, VAR_15, VAR_19 ? VAR_2 : 0);
 if (FUNC_5(*VAR_17 & VAR_6)) {
  if (*VAR_17 & VAR_8) {
   VAR_20 = -VAR_1;
   goto out_unlock;
  } else if (*VAR_17 & VAR_9) {
   VAR_20 = -VAR_0;
   goto out_unlock;
  }
  FUNC_0();
 }

 if (*VAR_17 & VAR_7)
  VAR_13->maj_flt++;
 else
  VAR_13->min_flt++;

out_unlock:
 FUNC_6(&VAR_14->mmap_sem);
 return VAR_20;
}
