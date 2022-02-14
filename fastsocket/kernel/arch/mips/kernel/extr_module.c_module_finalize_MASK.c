
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dbe_list; void* dbe_end; void* dbe_start; } ;
struct module {TYPE_1__ arch; } ;
struct TYPE_8__ {size_t e_shstrndx; int e_shnum; } ;
struct TYPE_7__ {int sh_offset; int sh_name; int sh_size; scalar_t__ sh_addr; } ;
typedef TYPE_2__ Elf_Shdr ;
typedef TYPE_3__ Elf_Ehdr ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char*,char*) ;

int FUNC_5(const Elf_Ehdr *VAR_2,
      const Elf_Shdr *VAR_3,
      struct module *VAR_4)
{
 const Elf_Shdr *VAR_5;
 char *VAR_6 = (void *)VAR_2 + VAR_3[VAR_2->e_shstrndx].sh_offset;

 FUNC_0(&VAR_4->arch.dbe_list);
 for (VAR_5 = VAR_3; VAR_5 < VAR_3 + VAR_2->e_shnum; VAR_5++) {
  if (FUNC_4("__dbe_table", VAR_6 + VAR_5->sh_name) != 0)
   continue;
  VAR_4->arch.dbe_start = (void *)VAR_5->sh_addr;
  VAR_4->arch.dbe_end = (void *)VAR_5->sh_addr + VAR_5->sh_size;
  FUNC_2(&VAR_1);
  FUNC_1(&VAR_4->arch.dbe_list, &VAR_0);
  FUNC_3(&VAR_1);
 }
 return 0;
}
