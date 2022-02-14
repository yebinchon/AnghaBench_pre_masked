
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int insn1_type; int ss_nextcnt; int insn2_type; scalar_t__ single_step; int insn2; int addr2; int insn1; int addr1; } ;
struct task_struct {TYPE_1__ thread; } ;


 int FUNC_0 (struct task_struct*,int ,int ) ;
 int FUNC_1 (struct task_struct*,int ,int ) ;

void FUNC_2(struct task_struct *VAR_0)
{
 if (VAR_0->thread.insn1_type == 0)
  FUNC_1(VAR_0, VAR_0->thread.addr1,
    VAR_0->thread.insn1);

 if (VAR_0->thread.insn1_type == 1)
  FUNC_0(VAR_0, VAR_0->thread.addr1,
    VAR_0->thread.insn1);

 if (VAR_0->thread.ss_nextcnt == 2) {
  if (VAR_0->thread.insn1_type == 0)
   FUNC_1(VAR_0, VAR_0->thread.addr1,
     VAR_0->thread.insn1);
  if (VAR_0->thread.insn1_type == 1)
   FUNC_0(VAR_0, VAR_0->thread.addr1,
     VAR_0->thread.insn1);
  if (VAR_0->thread.insn2_type == 0)
   FUNC_1(VAR_0, VAR_0->thread.addr2,
     VAR_0->thread.insn2);
  if (VAR_0->thread.insn2_type == 1)
   FUNC_0(VAR_0, VAR_0->thread.addr2,
     VAR_0->thread.insn2);
 }

 VAR_0->thread.single_step = 0;
 VAR_0->thread.ss_nextcnt = 0;
}
