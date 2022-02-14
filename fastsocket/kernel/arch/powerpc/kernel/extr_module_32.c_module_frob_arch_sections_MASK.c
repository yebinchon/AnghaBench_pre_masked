
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {unsigned int init_plt_section; unsigned int core_plt_section; } ;
struct module {TYPE_1__ arch; } ;
struct TYPE_10__ {unsigned int e_shnum; } ;
struct TYPE_9__ {int sh_name; void* sh_size; } ;
typedef TYPE_2__ Elf32_Shdr ;
typedef TYPE_3__ Elf32_Ehdr ;


 int VAR_0 ;
 void* FUNC_0 (TYPE_3__*,TYPE_2__*,char*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

int FUNC_3(Elf32_Ehdr *VAR_1,
         Elf32_Shdr *VAR_2,
         char *VAR_3,
         struct module *VAR_4)
{
 unsigned int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_1->e_shnum; VAR_5++) {
  if (FUNC_2(VAR_3 + VAR_2[VAR_5].sh_name, ".init.plt") == 0)
   VAR_4->arch.init_plt_section = VAR_5;
  else if (FUNC_2(VAR_3 + VAR_2[VAR_5].sh_name, ".plt") == 0)
   VAR_4->arch.core_plt_section = VAR_5;
 }
 if (!VAR_4->arch.core_plt_section || !VAR_4->arch.init_plt_section) {
  FUNC_1("Module doesn't contain .plt or .init.plt sections.\n");
  return -VAR_0;
 }


 VAR_2[VAR_4->arch.core_plt_section].sh_size
  = FUNC_0(VAR_1, VAR_2, VAR_3, 0);
 VAR_2[VAR_4->arch.init_plt_section].sh_size
  = FUNC_0(VAR_1, VAR_2, VAR_3, 1);
 return 0;
}
