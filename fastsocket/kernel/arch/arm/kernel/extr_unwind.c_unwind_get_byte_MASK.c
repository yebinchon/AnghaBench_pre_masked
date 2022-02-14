
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unwind_ctrl_block {scalar_t__ entries; int* insn; int byte; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static unsigned long FUNC_1(struct unwind_ctrl_block *VAR_0)
{
 unsigned long VAR_1;

 if (VAR_0->entries <= 0) {
  FUNC_0("unwind: Corrupt unwind table\n");
  return 0;
 }

 VAR_1 = (*VAR_0->insn >> (VAR_0->byte * 8)) & 0xff;

 if (VAR_0->byte == 0) {
  VAR_0->insn++;
  VAR_0->entries--;
  VAR_0->byte = 3;
 } else
  VAR_0->byte--;

 return VAR_1;
}
