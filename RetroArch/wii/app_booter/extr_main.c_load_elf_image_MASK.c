
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ e_phoff; int e_phnum; int e_phentsize; int e_entry; } ;
struct TYPE_3__ {scalar_t__ p_type; int p_paddr; int p_offset; int p_memsz; int p_filesz; } ;
typedef TYPE_1__ Elf32_Phdr ;
typedef TYPE_2__ Elf32_Ehdr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*,void const*,int ) ;
 int FUNC_1 (void*,int ) ;

__attribute__((used)) static uint32_t FUNC_2 (void *VAR_1)
{
   int VAR_2;
   Elf32_Phdr *VAR_3 = ((void*)0);
   Elf32_Ehdr *VAR_4 = (Elf32_Ehdr*) VAR_1;

   if(VAR_4->e_phoff == 0 || VAR_4->e_phnum == 0)
      return 0;

   if(VAR_4->e_phentsize != sizeof(Elf32_Phdr))
      return 0;

   VAR_3 = (Elf32_Phdr*)(VAR_1 + VAR_4->e_phoff);

   for (VAR_2 = 0; VAR_2 < VAR_4->e_phnum; VAR_2++)
   {
      uint8_t *VAR_5;

      if(VAR_3[VAR_2].p_type != VAR_0)
         continue;

      VAR_3[VAR_2].p_paddr &= 0x3FFFFFFF;
      VAR_3[VAR_2].p_paddr |= 0x80000000;

      if(VAR_3[VAR_2].p_filesz > VAR_3[VAR_2].p_memsz)
         return 0;

      if(!VAR_3[VAR_2].p_filesz)
         continue;

      VAR_5 = (uint8_t*)(VAR_1 + VAR_3[VAR_2].p_offset);
      FUNC_0 ((void *) VAR_3[VAR_2].p_paddr, (const void *) VAR_5, VAR_3[VAR_2].p_filesz);

      FUNC_1 ((void *) VAR_3[VAR_2].p_paddr, VAR_3[VAR_2].p_memsz);
   }

   return ((VAR_4->e_entry & 0x3FFFFFFF) | 0x80000000);
}
