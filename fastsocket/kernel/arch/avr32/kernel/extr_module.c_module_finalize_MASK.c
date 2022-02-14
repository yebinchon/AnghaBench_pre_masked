
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * syminfo; } ;
struct module {TYPE_1__ arch; } ;
typedef int Elf_Shdr ;
typedef int Elf_Ehdr ;


 int FUNC_0 (int const*,int const*,struct module*) ;
 int FUNC_1 (int *) ;

int FUNC_2(const Elf_Ehdr *VAR_0, const Elf_Shdr *VAR_1,
      struct module *VAR_2)
{
 FUNC_1(VAR_2->arch.syminfo);
 VAR_2->arch.syminfo = ((void*)0);

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
