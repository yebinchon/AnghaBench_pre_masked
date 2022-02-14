
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
struct TYPE_6__ {int mask; } ;
struct TYPE_8__ {int per_info; TYPE_2__ fp_regs; int orig_gpr2; int * acrs; TYPE_1__ psw; } ;
struct user {TYPE_3__ regs; } ;
struct TYPE_9__ {int per_info; int fp_regs; scalar_t__* acrs; } ;
struct task_struct {TYPE_4__ thread; } ;
typedef scalar_t__ addr_t ;
struct TYPE_10__ {scalar_t__ orig_gpr2; int psw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_5__* FUNC_0 (struct task_struct*) ;

__attribute__((used)) static unsigned long FUNC_1(struct task_struct *VAR_3, addr_t VAR_4)
{
 struct user *VAR_5 = ((void*)0);
 addr_t VAR_6, VAR_7;

 if (VAR_4 < (addr_t) &VAR_5->regs.acrs) {



  VAR_7 = *(addr_t *)((addr_t) &FUNC_0(VAR_3)->psw + VAR_4);
  if (VAR_4 == (addr_t) &VAR_5->regs.psw.mask)

   VAR_7 &= ~VAR_2;

 } else if (VAR_4 < (addr_t) &VAR_5->regs.orig_gpr2) {



  VAR_6 = VAR_4 - (addr_t) &VAR_5->regs.acrs;
  VAR_7 = *(addr_t *)((addr_t) &VAR_3->thread.acrs + VAR_6);

 } else if (VAR_4 == (addr_t) &VAR_5->regs.orig_gpr2) {



  VAR_7 = (addr_t) FUNC_0(VAR_3)->orig_gpr2;

 } else if (VAR_4 < (addr_t) &VAR_5->regs.fp_regs) {




  VAR_7 = 0;

 } else if (VAR_4 < (addr_t) (&VAR_5->regs.fp_regs + 1)) {



  VAR_6 = VAR_4 - (addr_t) &VAR_5->regs.fp_regs;
  VAR_7 = *(addr_t *)((addr_t) &VAR_3->thread.fp_regs + VAR_6);
  if (VAR_4 == (addr_t) &VAR_5->regs.fp_regs.fpc)
   VAR_7 &= (unsigned long) VAR_1
    << (VAR_0 - 32);

 } else if (VAR_4 < (addr_t) (&VAR_5->regs.per_info + 1)) {



  VAR_6 = VAR_4 - (addr_t) &VAR_5->regs.per_info;
  VAR_7 = *(addr_t *)((addr_t) &VAR_3->thread.per_info + VAR_6);

 } else
  VAR_7 = 0;

 return VAR_7;
}
