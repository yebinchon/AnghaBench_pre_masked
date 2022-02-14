
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pt_regs {scalar_t__ nip; } ;
struct TYPE_2__ {int gdb_bpt_instr; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,struct pt_regs*) ;
 scalar_t__ FUNC_1 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_2(struct pt_regs *VAR_2)
{
 if (FUNC_1(VAR_2))
  return 0;

 if (FUNC_0(0, VAR_0, 0, VAR_2) != 0)
  return 0;

 if (*(u32 *) (VAR_2->nip) == *(u32 *) (&VAR_1.gdb_bpt_instr))
  VAR_2->nip += 4;

 return 1;
}
