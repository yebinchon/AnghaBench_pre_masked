
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct addr_range {unsigned long memsize; unsigned long offset; unsigned long long addr; } ;
struct TYPE_4__ {scalar_t__* e_ident; scalar_t__ e_type; scalar_t__ e_machine; int e_phoff; } ;
struct TYPE_3__ {unsigned long p_memsz; unsigned long p_offset; unsigned long p_vaddr; unsigned long p_type; unsigned long p_flags; unsigned long p_paddr; unsigned long p_filesz; unsigned long p_align; } ;
typedef TYPE_1__ Elf64_Phdr ;
typedef TYPE_2__ Elf64_Ehdr ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static int FUNC_1(void *VAR_14, int VAR_15, struct addr_range *VAR_16)
{
 Elf64_Ehdr *VAR_17 = VAR_14;
 Elf64_Phdr *VAR_18;

 if (VAR_17->e_ident[VAR_2] != VAR_8 ||
     VAR_17->e_ident[VAR_3] != VAR_9 ||
     VAR_17->e_ident[VAR_4] != VAR_10 ||
     VAR_17->e_ident[VAR_5] != VAR_11 ||
     VAR_17->e_ident[VAR_0] != VAR_6 ||
     VAR_17->e_ident[VAR_1] != VAR_7 ||
     VAR_17->e_type != VAR_13 || VAR_17->e_machine != VAR_12)
  return 0;

 if ((VAR_17->e_phoff + sizeof(Elf64_Phdr)) > VAR_15)
  return 0;

 VAR_18 = (Elf64_Phdr *) ((unsigned long)VAR_17 +
      (unsigned long)VAR_17->e_phoff);

 VAR_16->memsize = (unsigned long)VAR_18->p_memsz;
 VAR_16->offset = (unsigned long)VAR_18->p_offset;
 VAR_16->addr = (unsigned long long)VAR_18->p_vaddr;
 return 64;
}
