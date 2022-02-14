
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int fpc; } ;
struct TYPE_6__ {int addr; int mask; } ;
struct TYPE_8__ {int per_info; TYPE_2__ fp_regs; int orig_gpr2; int * acrs; TYPE_1__ psw; } ;
struct user {TYPE_3__ regs; } ;
struct TYPE_9__ {unsigned int* acrs; int per_info; int fp_regs; } ;
struct task_struct {TYPE_4__ thread; } ;
typedef scalar_t__ addr_t ;
struct TYPE_10__ {scalar_t__ orig_gpr2; int psw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct task_struct*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_5__* FUNC_2 (struct task_struct*) ;

__attribute__((used)) static int FUNC_3(struct task_struct *VAR_6, addr_t VAR_7, addr_t VAR_8)
{
 struct user *VAR_9 = ((void*)0);
 addr_t VAR_10;

 if (VAR_7 < (addr_t) &VAR_9->regs.acrs) {



  if (VAR_7 == (addr_t) &VAR_9->regs.psw.mask &&



      VAR_8 != FUNC_1(VAR_5, VAR_8))

   return -VAR_1;

  if (VAR_7 == (addr_t) &VAR_9->regs.psw.addr)


   VAR_8 |= VAR_3;

  *(addr_t *)((addr_t) &FUNC_2(VAR_6)->psw + VAR_7) = VAR_8;

 } else if (VAR_7 < (addr_t) (&VAR_9->regs.orig_gpr2)) {



  VAR_10 = VAR_7 - (addr_t) &VAR_9->regs.acrs;
  *(addr_t *)((addr_t) &VAR_6->thread.acrs + VAR_10) = VAR_8;

 } else if (VAR_7 == (addr_t) &VAR_9->regs.orig_gpr2) {



  FUNC_2(VAR_6)->orig_gpr2 = VAR_8;

 } else if (VAR_7 < (addr_t) &VAR_9->regs.fp_regs) {




  return 0;

 } else if (VAR_7 < (addr_t) (&VAR_9->regs.fp_regs + 1)) {



  if (VAR_7 == (addr_t) &VAR_9->regs.fp_regs.fpc &&
      (VAR_8 & ~((unsigned long) VAR_2
         << (VAR_0 - 32))) != 0)
   return -VAR_1;
  VAR_10 = VAR_7 - (addr_t) &VAR_9->regs.fp_regs;
  *(addr_t *)((addr_t) &VAR_6->thread.fp_regs + VAR_10) = VAR_8;

 } else if (VAR_7 < (addr_t) (&VAR_9->regs.per_info + 1)) {



  VAR_10 = VAR_7 - (addr_t) &VAR_9->regs.per_info;
  *(addr_t *)((addr_t) &VAR_6->thread.per_info + VAR_10) = VAR_8;

 }

 FUNC_0(VAR_6);
 return 0;
}
