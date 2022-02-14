
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; unsigned long vm_start; } ;
struct pt_regs {int pc; int sr; } ;
struct mm_struct {int mmap_sem; int pgd; } ;
struct TYPE_4__ {unsigned long faddr; int code; void* signo; } ;
struct TYPE_5__ {int comm; TYPE_1__ thread; int min_flt; int maj_flt; struct mm_struct* mm; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_2__* VAR_16 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct vm_area_struct*,unsigned long) ;
 struct vm_area_struct* FUNC_4 (struct mm_struct*,unsigned long) ;
 int FUNC_5 (struct mm_struct*,struct vm_area_struct*,unsigned long,int ) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (char*,...) ;
 unsigned long FUNC_9 () ;
 int FUNC_10 (struct pt_regs*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (struct pt_regs*) ;
 int FUNC_14 () ;

int FUNC_15(struct pt_regs *VAR_17, unsigned long VAR_18,
         unsigned long VAR_19)
{
 struct mm_struct *VAR_20 = VAR_16->mm;
 struct vm_area_struct * VAR_21;
 int VAR_22, VAR_23;
 if (FUNC_6() || !VAR_20)
  goto no_context;

 FUNC_2(&VAR_20->mmap_sem);

 VAR_21 = FUNC_4(VAR_20, VAR_18);
 if (!VAR_21)
  goto map_err;
 if (VAR_21->vm_flags & VAR_13)
  goto acc_err;
 if (VAR_21->vm_start <= VAR_18)
  goto good_area;
 if (!(VAR_21->vm_flags & VAR_12))
  goto map_err;
 if (FUNC_13(VAR_17)) {




  if (VAR_18 + 256 < FUNC_9())
   goto map_err;
 }
 if (FUNC_3(VAR_21, VAR_18))
  goto map_err;





good_area:



 VAR_22 = 0;
 switch (VAR_19 & 3) {
  default:

  case 2:
   if (!(VAR_21->vm_flags & VAR_15))
    goto acc_err;
   VAR_22++;
   break;
  case 1:
   goto acc_err;
  case 0:
   if (!(VAR_21->vm_flags & (VAR_14 | VAR_7 | VAR_15)))
    goto acc_err;
 }







 survive:
 VAR_23 = FUNC_5(VAR_20, VAR_21, VAR_18, VAR_22 ? VAR_1 : 0);



 if (FUNC_11(VAR_23 & VAR_8)) {
  if (VAR_23 & VAR_10)
   goto out_of_memory;
  else if (VAR_23 & VAR_11)
   goto bus_err;
  FUNC_0();
 }
 if (VAR_23 & VAR_9)
  VAR_16->maj_flt++;
 else
  VAR_16->min_flt++;

 FUNC_12(&VAR_20->mmap_sem);
 return 0;





out_of_memory:
 FUNC_12(&VAR_20->mmap_sem);
 if (FUNC_7(VAR_16)) {
  FUNC_14();
  FUNC_2(&VAR_20->mmap_sem);
  goto survive;
 }

 FUNC_8("VM: killing process %s\n", VAR_16->comm);
 if (FUNC_13(VAR_17))
  FUNC_1(VAR_5);

no_context:
 VAR_16->thread.signo = VAR_4;
 VAR_16->thread.faddr = VAR_18;
 return FUNC_10(VAR_17);

bus_err:
 VAR_16->thread.signo = VAR_4;
 VAR_16->thread.code = VAR_0;
 VAR_16->thread.faddr = VAR_18;
 goto send_sig;

map_err:
 VAR_16->thread.signo = VAR_6;
 VAR_16->thread.code = VAR_3;
 VAR_16->thread.faddr = VAR_18;
 goto send_sig;

acc_err:
 VAR_16->thread.signo = VAR_6;
 VAR_16->thread.code = VAR_2;
 VAR_16->thread.faddr = VAR_18;

send_sig:
 FUNC_12(&VAR_20->mmap_sem);
 return FUNC_10(VAR_17);
}
