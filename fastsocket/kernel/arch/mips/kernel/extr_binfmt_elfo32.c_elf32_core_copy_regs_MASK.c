
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {scalar_t__ cp0_cause; scalar_t__ cp0_status; scalar_t__ cp0_badvaddr; scalar_t__ cp0_epc; scalar_t__ hi; scalar_t__ lo; scalar_t__* regs; } ;
typedef scalar_t__* elf_gregset_t ;
typedef scalar_t__ elf_greg_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;

void FUNC_0(elf_gregset_t VAR_10, struct pt_regs *VAR_11)
{
 int VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++)
  VAR_10[VAR_12] = 0;
 VAR_10[VAR_6] = 0;
 for (VAR_12 = 1; VAR_12 <= 31; VAR_12++)
  VAR_10[VAR_6 + VAR_12] = (elf_greg_t) VAR_11->regs[VAR_12];
 VAR_10[VAR_7] = 0;
 VAR_10[VAR_8] = 0;
 VAR_10[VAR_5] = (elf_greg_t) VAR_11->lo;
 VAR_10[VAR_4] = (elf_greg_t) VAR_11->hi;
 VAR_10[VAR_2] = (elf_greg_t) VAR_11->cp0_epc;
 VAR_10[VAR_0] = (elf_greg_t) VAR_11->cp0_badvaddr;
 VAR_10[VAR_3] = (elf_greg_t) VAR_11->cp0_status;
 VAR_10[VAR_1] = (elf_greg_t) VAR_11->cp0_cause;



}
