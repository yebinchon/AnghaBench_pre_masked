
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct ppc_plt_entry {int* jump; } ;
struct TYPE_4__ {size_t core_plt_section; size_t init_plt_section; } ;
struct module {void* module_core; int core_size; TYPE_1__ arch; } ;
struct TYPE_5__ {scalar_t__ sh_addr; } ;
typedef TYPE_2__ Elf32_Shdr ;
typedef int Elf32_Addr ;


 int FUNC_0 (char*,int,...) ;
 scalar_t__ FUNC_1 (struct ppc_plt_entry*,int) ;

__attribute__((used)) static uint32_t FUNC_2(void *VAR_0,
       Elf32_Addr VAR_1,
       Elf32_Shdr *VAR_2,
       struct module *VAR_3)
{
 struct ppc_plt_entry *VAR_4;

 FUNC_0("Doing plt for call to 0x%x at 0x%x\n", VAR_1, (unsigned int)VAR_0);

 if (VAR_0 >= VAR_3->module_core
     && VAR_0 < VAR_3->module_core + VAR_3->core_size)
  VAR_4 = (void *)VAR_2[VAR_3->arch.core_plt_section].sh_addr;
 else
  VAR_4 = (void *)VAR_2[VAR_3->arch.init_plt_section].sh_addr;


 while (VAR_4->jump[0]) {
  if (FUNC_1(VAR_4, VAR_1)) return (uint32_t)VAR_4;
  VAR_4++;
 }


 VAR_4->jump[0] = 0x3d600000+((VAR_1+0x8000)>>16);
 VAR_4->jump[1] = 0x396b0000 + (VAR_1&0xffff);
 VAR_4->jump[2] = 0x7d6903a6;
 VAR_4->jump[3] = 0x4e800420;

 FUNC_0("Initialized plt for 0x%x at %p\n", VAR_1, VAR_4);
 return (uint32_t)VAR_4;
}
