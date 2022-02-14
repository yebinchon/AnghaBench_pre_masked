
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; int vm_flags; } ;
struct task_struct {int min_flt; int maj_flt; struct mm_struct* mm; } ;
struct pt_regs {int flags; unsigned long sp; int ip; } ;
struct mm_struct {int mmap_sem; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (unsigned long,int,struct vm_area_struct*) ;
 int FUNC_1 (struct pt_regs*,unsigned long,unsigned long) ;
 int FUNC_2 (struct pt_regs*,unsigned long,unsigned long) ;
 int FUNC_3 (struct pt_regs*,unsigned long,unsigned long) ;
 int FUNC_4 (struct pt_regs*,unsigned long,struct task_struct*) ;
 struct task_struct* VAR_15 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct vm_area_struct*,unsigned long) ;
 int FUNC_8 (unsigned long) ;
 struct vm_area_struct* FUNC_9 (struct mm_struct*,unsigned long) ;
 int FUNC_10 (struct mm_struct*,struct vm_area_struct*,unsigned long,unsigned int) ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ FUNC_12 (struct pt_regs*) ;
 scalar_t__ FUNC_13 (struct pt_regs*,unsigned long,unsigned long) ;
 int FUNC_14 (struct pt_regs*) ;
 int FUNC_15 (struct pt_regs*,unsigned long) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 scalar_t__ FUNC_19 (struct pt_regs*,unsigned long,unsigned long,int) ;
 int FUNC_20 (struct pt_regs*) ;
 int FUNC_21 (int ,int,struct pt_regs*,unsigned long) ;
 int FUNC_22 (struct pt_regs*,unsigned long,unsigned long) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int ) ;
 scalar_t__ FUNC_25 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_26 (int) ;
 int FUNC_27 (int *) ;
 scalar_t__ FUNC_28 (struct pt_regs*) ;
 scalar_t__ FUNC_29 (unsigned long) ;

__attribute__((used)) static inline void FUNC_30(struct pt_regs *VAR_16, unsigned long VAR_17, unsigned long VAR_18)
{
 struct vm_area_struct *VAR_19;
 struct task_struct *VAR_20;
 struct mm_struct *VAR_21;
 int VAR_22;
 int VAR_23 = VAR_18 & VAR_9;
 unsigned int VAR_24 = VAR_0 | VAR_1 |
     (VAR_23 ? VAR_2 : 0);

 VAR_20 = VAR_15;
 VAR_21 = VAR_20->mm;





 if (FUNC_12(VAR_16))
  FUNC_14(VAR_16);
 FUNC_23(&VAR_21->mmap_sem);

 if (FUNC_26(FUNC_15(VAR_16, VAR_17)))
  return;
 if (FUNC_26(FUNC_8(VAR_17))) {
  if (!(VAR_18 & (VAR_7 | VAR_8 | VAR_6))) {
   if (FUNC_29(VAR_17) >= 0)
    return;

   if (FUNC_13(VAR_16, VAR_17, VAR_18))
    return;
  }


  if (FUNC_25(VAR_18, VAR_17))
   return;


  if (FUNC_20(VAR_16))
   return;




  FUNC_3(VAR_16, VAR_18, VAR_17);

  return;
 }


 if (FUNC_26(FUNC_20(VAR_16)))
  return;







 if (FUNC_28(VAR_16)) {
  FUNC_17();
  VAR_18 |= VAR_8;
 } else {
  if (VAR_16->flags & VAR_14)
   FUNC_17();
 }

 if (FUNC_26(VAR_18 & VAR_7))
  FUNC_22(VAR_16, VAR_18, VAR_17);

 FUNC_21(VAR_3, 1, VAR_16, VAR_17);





 if (FUNC_26(FUNC_11() || !VAR_21)) {
  FUNC_3(VAR_16, VAR_18, VAR_17);
  return;
 }
 if (FUNC_26(!FUNC_6(&VAR_21->mmap_sem))) {
  if ((VAR_18 & VAR_8) == 0 &&
      !FUNC_24(VAR_16->ip)) {
   FUNC_3(VAR_16, VAR_18, VAR_17);
   return;
  }
retry:
  FUNC_5(&VAR_21->mmap_sem);
 } else {





  FUNC_18();
 }

 VAR_19 = FUNC_9(VAR_21, VAR_17);
 if (FUNC_26(!VAR_19)) {
  FUNC_1(VAR_16, VAR_18, VAR_17);
  return;
 }
 if (FUNC_16(VAR_19->vm_start <= VAR_17))
  goto good_area;
 if (FUNC_26(!(VAR_19->vm_flags & VAR_13))) {
  FUNC_1(VAR_16, VAR_18, VAR_17);
  return;
 }
 if (VAR_18 & VAR_8) {






  if (FUNC_26(VAR_17 + 65536 + 32 * sizeof(unsigned long) < VAR_16->sp)) {
   FUNC_1(VAR_16, VAR_18, VAR_17);
   return;
  }
 }
 if (FUNC_26(FUNC_7(VAR_19, VAR_17))) {
  FUNC_1(VAR_16, VAR_18, VAR_17);
  return;
 }





good_area:
 if (FUNC_26(FUNC_0(VAR_18, VAR_23, VAR_19))) {
  FUNC_2(VAR_16, VAR_18, VAR_17);
  return;
 }






 VAR_22 = FUNC_10(VAR_21, VAR_19, VAR_17, VAR_24);

 if (FUNC_26(VAR_22 & (VAR_12|VAR_10))) {
  if (FUNC_19(VAR_16, VAR_18, VAR_17, VAR_22))
   return;
 }






 if (VAR_24 & VAR_0) {
  if (VAR_22 & VAR_11) {
   VAR_20->maj_flt++;
   FUNC_21(VAR_4, 1,
          VAR_16, VAR_17);
  } else {
   VAR_20->min_flt++;
   FUNC_21(VAR_5, 1,
          VAR_16, VAR_17);
  }
  if (VAR_22 & VAR_12) {


   VAR_24 &= ~VAR_0;
   goto retry;
  }
 }

 FUNC_4(VAR_16, VAR_17, VAR_20);

 FUNC_27(&VAR_21->mmap_sem);
}
