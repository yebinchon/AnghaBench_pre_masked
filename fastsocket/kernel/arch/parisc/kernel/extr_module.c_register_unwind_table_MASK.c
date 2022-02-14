
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t unwind_section; int unwind; int got_offset; } ;
struct module {int name; TYPE_1__ arch; scalar_t__ module_core; } ;
struct TYPE_5__ {int sh_size; scalar_t__ sh_addr; } ;
typedef TYPE_2__ Elf_Shdr ;
typedef unsigned long Elf_Addr ;


 int FUNC_0 (char*,size_t,unsigned char*,unsigned char*,unsigned long) ;
 int FUNC_1 (int ,int ,unsigned long,unsigned char*,unsigned char*) ;

__attribute__((used)) static void
FUNC_2(struct module *VAR_0,
        const Elf_Shdr *VAR_1)
{
 unsigned char *VAR_2, *VAR_3;
 unsigned long VAR_4;

 if (!VAR_0->arch.unwind_section)
  return;

 VAR_2 = (unsigned char *)VAR_1[VAR_0->arch.unwind_section].sh_addr;
 VAR_3 = VAR_2 + VAR_1[VAR_0->arch.unwind_section].sh_size;
 VAR_4 = (Elf_Addr)VAR_0->module_core + VAR_0->arch.got_offset;

 FUNC_0("register_unwind_table(), sect = %d at 0x%p - 0x%p (gp=0x%lx)\n",
        VAR_0->arch.unwind_section, VAR_2, VAR_3, VAR_4);
 VAR_0->arch.unwind = FUNC_1(VAR_0->name, 0, VAR_4, VAR_2, VAR_3);
}
