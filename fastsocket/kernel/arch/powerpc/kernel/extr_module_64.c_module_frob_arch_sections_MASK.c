
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {unsigned int stubs_section; unsigned int toc_section; } ;
struct module {TYPE_1__ arch; int name; } ;
struct TYPE_10__ {unsigned int e_shnum; } ;
struct TYPE_9__ {int sh_name; int sh_offset; int sh_size; scalar_t__ sh_type; size_t sh_link; } ;
typedef int Elf64_Sym ;
typedef TYPE_2__ Elf64_Shdr ;
typedef TYPE_3__ Elf64_Ehdr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void*,int,void*) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*,char*) ;

int FUNC_6(Elf64_Ehdr *VAR_2,
         Elf64_Shdr *VAR_3,
         char *VAR_4,
         struct module *VAR_5)
{
 unsigned int VAR_6;


 for (VAR_6 = 1; VAR_6 < VAR_2->e_shnum; VAR_6++) {
  char *VAR_7;
  if (FUNC_4(VAR_4 + VAR_3[VAR_6].sh_name, ".stubs") == 0)
   VAR_5->arch.stubs_section = VAR_6;
  else if (FUNC_4(VAR_4 + VAR_3[VAR_6].sh_name, ".toc") == 0)
   VAR_5->arch.toc_section = VAR_6;
  else if (FUNC_4(VAR_4+VAR_3[VAR_6].sh_name,"__versions")==0)
   FUNC_1((void *)VAR_2 + VAR_3[VAR_6].sh_offset,
       VAR_3[VAR_6].sh_size);


  while ((VAR_7 = FUNC_5(VAR_4 + VAR_3[VAR_6].sh_name, ".init")))
   VAR_7[0] = '_';

  if (VAR_3[VAR_6].sh_type == VAR_1)
   FUNC_0((void *)VAR_2 + VAR_3[VAR_6].sh_offset,
     VAR_3[VAR_6].sh_size / sizeof(Elf64_Sym),
     (void *)VAR_2
     + VAR_3[VAR_3[VAR_6].sh_link].sh_offset);
 }

 if (!VAR_5->arch.stubs_section) {
  FUNC_3("%s: doesn't contain .stubs.\n", VAR_5->name);
  return -VAR_0;
 }





 if (!VAR_5->arch.toc_section)
  VAR_5->arch.toc_section = VAR_5->arch.stubs_section;


 VAR_3[VAR_5->arch.stubs_section].sh_size = FUNC_2(VAR_2, VAR_3);
 return 0;
}
