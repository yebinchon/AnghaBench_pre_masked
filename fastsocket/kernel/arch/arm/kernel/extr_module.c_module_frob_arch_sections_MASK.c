
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* sec_core_text; TYPE_2__* sec_devinit_text; TYPE_2__* sec_init_text; TYPE_2__* unw_sec_core; TYPE_2__* unw_sec_devinit; TYPE_2__* unw_sec_init; } ;
struct module {TYPE_1__ arch; } ;
struct TYPE_8__ {int e_shnum; } ;
struct TYPE_7__ {int sh_name; } ;
typedef TYPE_2__ Elf_Shdr ;
typedef TYPE_3__ Elf_Ehdr ;


 scalar_t__ FUNC_0 (char*,char*) ;

int FUNC_1(Elf_Ehdr *VAR_0,
         Elf_Shdr *VAR_1,
         char *VAR_2,
         struct module *VAR_3)
{
 return 0;
}
