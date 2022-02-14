
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct elfhdr {int e_phnum; scalar_t__ e_phoff; } ;
struct elf_phdr {scalar_t__ p_type; scalar_t__ p_paddr; scalar_t__ p_offset; scalar_t__ p_filesz; } ;
typedef int phdr ;
typedef scalar_t__ loff_t ;
typedef scalar_t__ Elf32_Off ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct file*,struct elf_phdr*,int) ;
 scalar_t__ VAR_1 ;

int FUNC_1(struct file *VAR_2, loff_t VAR_3, size_t *VAR_4,
          unsigned long VAR_5)
{
 if ( VAR_1 ) {
  const struct elfhdr *const VAR_6 =
   (struct elfhdr *) VAR_1;
  const struct elf_phdr *const VAR_7 =
   (const struct elf_phdr *) (VAR_1 + VAR_6->e_phoff);
  int VAR_8;
  Elf32_Off VAR_9 = 0;

  for (VAR_8 = 0; VAR_8 < VAR_6->e_phnum; ++VAR_8) {
   struct elf_phdr VAR_10 = VAR_7[VAR_8];

   if (VAR_10.p_type == VAR_0) {
    VAR_9 = VAR_10.p_offset = VAR_3;
    VAR_3 += VAR_10.p_filesz;
   } else {
    VAR_10.p_offset += VAR_9;
   }
   VAR_10.p_paddr = 0;
   *VAR_4 += sizeof(VAR_10);
   if (*VAR_4 > VAR_5
       || !FUNC_0(VAR_2, &VAR_10, sizeof(VAR_10)))
    return 0;
  }
 }
 return 1;
}
