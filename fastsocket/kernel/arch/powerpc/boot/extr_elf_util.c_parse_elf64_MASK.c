
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct elf_info {unsigned long loadsize; unsigned long memsize; unsigned long elfoffset; } ;
struct TYPE_4__ {scalar_t__* e_ident; scalar_t__ e_type; scalar_t__ e_machine; scalar_t__ e_phnum; scalar_t__ e_phoff; } ;
struct TYPE_3__ {scalar_t__ p_type; scalar_t__ p_offset; scalar_t__ p_memsz; scalar_t__ p_filesz; } ;
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
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;

int FUNC_0(void *VAR_16, struct elf_info *VAR_17)
{
 Elf64_Ehdr *VAR_18 = VAR_16;
 Elf64_Phdr *VAR_19;
 unsigned int VAR_20;

 if (!(VAR_18->e_ident[VAR_2] == VAR_8 &&
       VAR_18->e_ident[VAR_3] == VAR_9 &&
       VAR_18->e_ident[VAR_4] == VAR_10 &&
       VAR_18->e_ident[VAR_5] == VAR_11 &&
       VAR_18->e_ident[VAR_0] == VAR_6 &&
       VAR_18->e_ident[VAR_1] == VAR_7 &&
       (VAR_18->e_type == VAR_14 ||
        VAR_18->e_type == VAR_13) &&
       VAR_18->e_machine == VAR_12))
  return 0;

 VAR_19 = (Elf64_Phdr *)((unsigned long)VAR_18 +
     (unsigned long)VAR_18->e_phoff);
 for (VAR_20 = 0; VAR_20 < (unsigned int)VAR_18->e_phnum; VAR_20++, VAR_19++)
  if (VAR_19->p_type == VAR_15)
   break;
 if (VAR_20 >= (unsigned int)VAR_18->e_phnum)
  return 0;

 VAR_17->loadsize = (unsigned long)VAR_19->p_filesz;
 VAR_17->memsize = (unsigned long)VAR_19->p_memsz;
 VAR_17->elfoffset = (unsigned long)VAR_19->p_offset;

 return 1;
}
