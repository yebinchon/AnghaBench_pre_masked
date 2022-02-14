
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct insn {int x86_64; int opnd_bytes; int addr_bytes; void const* next_byte; void const* kaddr; } ;


 int FUNC_0 (struct insn*,int ,int) ;

void FUNC_1(struct insn *VAR_0, const void *VAR_1, int VAR_2)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->kaddr = VAR_1;
 VAR_0->next_byte = VAR_1;
 VAR_0->x86_64 = VAR_2 ? 1 : 0;
 VAR_0->opnd_bytes = 4;
 if (VAR_2)
  VAR_0->addr_bytes = 8;
 else
  VAR_0->addr_bytes = 4;
}
