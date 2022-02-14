
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int* gr; unsigned long ksp; unsigned long kpc; unsigned long cr27; } ;
struct TYPE_2__ {struct pt_regs regs; } ;
struct task_struct {scalar_t__ personality; TYPE_1__ thread; } ;


 int FUNC_0 () ;
 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 void* FUNC_1 (struct task_struct*) ;

int
FUNC_2(unsigned long VAR_4, unsigned long VAR_5,
     unsigned long VAR_6,
     struct task_struct * VAR_7, struct pt_regs * VAR_8)
{
 struct pt_regs * VAR_9 = &(VAR_7->thread.regs);
 void *VAR_10 = FUNC_1(VAR_7);




 extern void * const VAR_11;
 extern void * const VAR_12;




 *VAR_9 = *VAR_8;




 VAR_9->gr[28] = 0;
 if (VAR_5 == 1) {

  VAR_9->ksp = (unsigned long)VAR_10 + VAR_3;



  VAR_9->kpc = (unsigned long) &VAR_11;







  VAR_9->gr[26] = VAR_8->gr[26];
  VAR_9->gr[25] = VAR_8->gr[25];
 } else {







  VAR_9->ksp = (unsigned long)VAR_10
   + (VAR_8->gr[21] & (VAR_2 - 1));
  VAR_9->gr[30] = VAR_5;
  if (VAR_7->personality == VAR_1) {



   FUNC_0();

  } else {
   VAR_9->kpc = (unsigned long) &VAR_12;
  }

  if (VAR_4 & VAR_0)
    VAR_9->cr27 = VAR_8->gr[23];

 }

 return 0;
}
