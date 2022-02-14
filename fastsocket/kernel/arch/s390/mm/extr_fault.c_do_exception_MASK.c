
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; int vm_flags; } ;
struct task_struct {int min_flt; int maj_flt; struct mm_struct* mm; } ;
struct pt_regs {int dummy; } ;
struct mm_struct {int mmap_sem; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
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
 unsigned long VAR_13 ;
 int FUNC_0 (struct task_struct*,int ) ;
 struct task_struct* VAR_14 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct vm_area_struct*,unsigned long) ;
 struct vm_area_struct* FUNC_3 (struct mm_struct*,unsigned long) ;
 int FUNC_4 (struct mm_struct*,struct vm_area_struct*,unsigned long,int ) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (struct vm_area_struct*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (struct pt_regs*) ;
 int FUNC_9 (int ,int,struct pt_regs*,unsigned long) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (unsigned long) ;

__attribute__((used)) static inline int FUNC_13(struct pt_regs *VAR_15, int VAR_16,
          unsigned long VAR_17)
{
 struct task_struct *VAR_18;
 struct mm_struct *VAR_19;
 struct vm_area_struct *VAR_20;
 unsigned long VAR_21;
 int VAR_22;

 if (FUNC_8(VAR_15))
  return 0;

 VAR_18 = VAR_14;
 VAR_19 = VAR_18->mm;






 VAR_22 = VAR_7;
 if (FUNC_10(!FUNC_12(VAR_17) || FUNC_5() || !VAR_19))
  goto out;

 VAR_21 = VAR_17 & VAR_13;





 FUNC_7();
 FUNC_9(VAR_2, 1, VAR_15, VAR_21);
 FUNC_1(&VAR_19->mmap_sem);

 VAR_22 = VAR_8;
 VAR_20 = FUNC_3(VAR_19, VAR_21);
 if (!VAR_20)
  goto out_up;

 if (FUNC_10(VAR_20->vm_start > VAR_21)) {
  if (!(VAR_20->vm_flags & VAR_11))
   goto out_up;
  if (FUNC_2(VAR_20, VAR_21))
   goto out_up;
 }





 VAR_22 = VAR_6;
 if (FUNC_10(!(VAR_20->vm_flags & VAR_16)))
  goto out_up;

 if (FUNC_6(VAR_20))
  VAR_21 &= VAR_1;





 VAR_22 = FUNC_4(VAR_19, VAR_20, VAR_21,
    (VAR_16 == VAR_12) ? VAR_0 : 0);
 if (FUNC_10(VAR_22 & VAR_9))
  goto out_up;

 if (VAR_22 & VAR_10) {
  VAR_18->maj_flt++;
  FUNC_9(VAR_3, 1,
         VAR_15, VAR_21);
 } else {
  VAR_18->min_flt++;
  FUNC_9(VAR_4, 1,
         VAR_15, VAR_21);
 }




 FUNC_0(VAR_18, VAR_5);
 VAR_22 = 0;
out_up:
 FUNC_11(&VAR_19->mmap_sem);
out:
 return VAR_22;
}
