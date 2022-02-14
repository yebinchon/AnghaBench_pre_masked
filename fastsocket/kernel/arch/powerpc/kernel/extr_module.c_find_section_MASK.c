
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t e_shstrndx; unsigned int e_shnum; } ;
struct TYPE_6__ {int sh_offset; int sh_name; } ;
typedef TYPE_1__ Elf_Shdr ;
typedef TYPE_2__ Elf_Ehdr ;


 scalar_t__ FUNC_0 (char*,char const*) ;

__attribute__((used)) static const Elf_Shdr *FUNC_1(const Elf_Ehdr *VAR_0,
        const Elf_Shdr *VAR_1,
        const char *VAR_2)
{
 char *VAR_3;
 unsigned int VAR_4;

 VAR_3 = (char *)VAR_0 + VAR_1[VAR_0->e_shstrndx].sh_offset;
 for (VAR_4 = 1; VAR_4 < VAR_0->e_shnum; VAR_4++)
  if (FUNC_0(VAR_3+VAR_1[VAR_4].sh_name, VAR_2) == 0)
   return &VAR_1[VAR_4];
 return ((void*)0);
}
