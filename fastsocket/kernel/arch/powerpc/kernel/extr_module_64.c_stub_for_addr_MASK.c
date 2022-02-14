
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ funcaddr; } ;
struct ppc64_stub_entry {TYPE_2__ opd; } ;
struct ppc64_opd_entry {scalar_t__ funcaddr; } ;
struct TYPE_6__ {size_t stubs_section; } ;
struct module {TYPE_1__ arch; } ;
struct TYPE_8__ {int sh_size; scalar_t__ sh_addr; } ;
typedef TYPE_3__ Elf64_Shdr ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,struct ppc64_stub_entry*,struct ppc64_opd_entry*,struct module*) ;

__attribute__((used)) static unsigned long FUNC_2(Elf64_Shdr *VAR_0,
       unsigned long VAR_1,
       struct module *VAR_2)
{
 struct ppc64_stub_entry *VAR_3;
 struct ppc64_opd_entry *VAR_4 = (void *)VAR_1;
 unsigned int VAR_5, VAR_6;

 VAR_6 = VAR_0[VAR_2->arch.stubs_section].sh_size / sizeof(*VAR_3);


 VAR_3 = (void *)VAR_0[VAR_2->arch.stubs_section].sh_addr;
 for (VAR_5 = 0; VAR_3[VAR_5].opd.funcaddr; VAR_5++) {
  FUNC_0(VAR_5 >= VAR_6);

  if (VAR_3[VAR_5].opd.funcaddr == VAR_4->funcaddr)
   return (unsigned long)&VAR_3[VAR_5];
 }

 if (!FUNC_1(VAR_0, &VAR_3[VAR_5], VAR_4, VAR_2))
  return 0;

 return (unsigned long)&VAR_3[VAR_5];
}
