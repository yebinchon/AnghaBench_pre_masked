
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elfhdr {int e_phnum; scalar_t__ e_phoff; } ;
struct elf_phdr {scalar_t__ p_type; int p_filesz; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

size_t FUNC_0(void)
{
 if ( VAR_1 ) {
  const struct elfhdr *const VAR_2 =
   (struct elfhdr *)VAR_1;
  const struct elf_phdr *const VAR_3 =
   (const struct elf_phdr *) (VAR_1 + VAR_2->e_phoff);
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_2->e_phnum; ++VAR_4)
   if (VAR_3[VAR_4].p_type == VAR_0)
    return (size_t) VAR_3[VAR_4].p_filesz;
 }
 return 0;
}
