
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf_phdr {scalar_t__ p_type; unsigned long p_vaddr; unsigned long p_memsz; } ;


 unsigned long FUNC_0 (unsigned long) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static unsigned long FUNC_1(struct elf_phdr *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4 = -1, VAR_5 = -1;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (VAR_1[VAR_3].p_type == VAR_0) {
   VAR_5 = VAR_3;
   if (VAR_4 == -1)
    VAR_4 = VAR_3;
  }
 }
 if (VAR_4 == -1)
  return 0;

 return VAR_1[VAR_5].p_vaddr + VAR_1[VAR_5].p_memsz -
    FUNC_0(VAR_1[VAR_4].p_vaddr);
}
