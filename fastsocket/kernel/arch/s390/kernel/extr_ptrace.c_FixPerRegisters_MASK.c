
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int per_info; } ;
struct task_struct {TYPE_1__ thread; } ;
struct TYPE_6__ {int em_instruction_fetch; int ending_addr; int storage_alt_space_ctl; scalar_t__ em_storage_alteration; scalar_t__ starting_addr; } ;
struct TYPE_7__ {int suspension_ctl; int transaction_end; TYPE_2__ bits; } ;
struct TYPE_8__ {int single_step; int instruction_fetch; int ending_addr; TYPE_3__ control_regs; scalar_t__ starting_addr; } ;
typedef TYPE_4__ per_struct ;


 int VAR_0 ;
 struct task_struct* VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct task_struct*) ;

__attribute__((used)) static void FUNC_2(struct task_struct *VAR_2)
{
 per_struct *VAR_3;

 VAR_3 = (per_struct *) &VAR_2->thread.per_info;
 VAR_3->control_regs.bits.em_instruction_fetch =
  VAR_3->single_step | VAR_3->instruction_fetch;

 if (VAR_3->single_step) {
  VAR_3->control_regs.bits.starting_addr = 0;





   VAR_3->control_regs.bits.ending_addr = VAR_0;




 } else {
  VAR_3->control_regs.bits.starting_addr =
   VAR_3->starting_addr;
  VAR_3->control_regs.bits.ending_addr =
   VAR_3->ending_addr;
 }

 if (VAR_3->control_regs.bits.em_storage_alteration)
  VAR_3->control_regs.bits.storage_alt_space_ctl = 1;
 else
  VAR_3->control_regs.bits.storage_alt_space_ctl = 0;

 if (VAR_2 == VAR_1)
  FUNC_1(VAR_2);
}
