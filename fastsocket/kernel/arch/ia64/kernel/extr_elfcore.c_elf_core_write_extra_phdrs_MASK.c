
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct elf_phdr {scalar_t__ p_type; scalar_t__ p_paddr; scalar_t__ p_offset; scalar_t__ p_filesz; scalar_t__ p_memsz; } ;
typedef int phdr ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int e_phnum; scalar_t__ e_phoff; } ;
typedef scalar_t__ Elf64_Off ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct file*,struct elf_phdr*,int) ;

int FUNC_2(struct file *VAR_3, loff_t VAR_4, size_t *VAR_5,
          unsigned long VAR_6)
{
 const struct elf_phdr *const VAR_7 =
  (const struct elf_phdr *) (VAR_0 + VAR_1->e_phoff);
 int VAR_8;
 Elf64_Off VAR_9 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_1->e_phnum; ++VAR_8) {
  struct elf_phdr VAR_10 = VAR_7[VAR_8];

  if (VAR_10.p_type == VAR_2) {
   VAR_10.p_memsz = FUNC_0(VAR_10.p_memsz);
   VAR_10.p_filesz = VAR_10.p_memsz;
   if (VAR_9 == 0) {
    VAR_9 = VAR_10.p_offset = VAR_4;
    VAR_4 += VAR_10.p_filesz;
   } else {
    VAR_10.p_offset = VAR_9;
   }
  } else {
   VAR_10.p_offset += VAR_9;
  }
  VAR_10.p_paddr = 0;
  *VAR_5 += sizeof(VAR_10);
  if (*VAR_5 > VAR_6 || !FUNC_1(VAR_3, &VAR_10, sizeof(VAR_10)))
   return 0;
 }
 return 1;
}
