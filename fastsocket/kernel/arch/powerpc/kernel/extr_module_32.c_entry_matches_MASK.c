
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc_plt_entry {int* jump; } ;
typedef int Elf32_Addr ;



__attribute__((used)) static inline int FUNC_0(struct ppc_plt_entry *VAR_0, Elf32_Addr VAR_1)
{
 if (VAR_0->jump[0] == 0x3d600000 + ((VAR_1 + 0x8000) >> 16)
     && VAR_0->jump[1] == 0x396b0000 + (VAR_1 & 0xffff))
  return 1;
 return 0;
}
