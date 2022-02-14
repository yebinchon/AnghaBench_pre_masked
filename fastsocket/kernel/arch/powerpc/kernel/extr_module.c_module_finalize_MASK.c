
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct module {int dummy; } ;
struct TYPE_8__ {int cpu_features; int mmu_features; } ;
struct TYPE_7__ {int sh_size; scalar_t__ sh_addr; } ;
typedef TYPE_1__ Elf_Shdr ;
typedef int Elf_Ehdr ;


 TYPE_6__* VAR_0 ;
 int FUNC_0 (int ,void*,void*) ;
 int FUNC_1 (int ,void*,void*) ;
 TYPE_1__* FUNC_2 (int const*,TYPE_1__ const*,char*) ;
 int FUNC_3 (int const*,TYPE_1__ const*,struct module*) ;
 int VAR_1 ;

int FUNC_4(const Elf_Ehdr *VAR_2,
  const Elf_Shdr *VAR_3, struct module *VAR_4)
{
 const Elf_Shdr *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4);
 if (VAR_6)
  return VAR_6;


 VAR_5 = FUNC_2(VAR_2, VAR_3, "__ftr_fixup");
 if (VAR_5 != ((void*)0))
  FUNC_0(VAR_0->cpu_features,
      (void *)VAR_5->sh_addr,
      (void *)VAR_5->sh_addr + VAR_5->sh_size);

 VAR_5 = FUNC_2(VAR_2, VAR_3, "__mmu_ftr_fixup");
 if (VAR_5 != ((void*)0))
  FUNC_0(VAR_0->mmu_features,
      (void *)VAR_5->sh_addr,
      (void *)VAR_5->sh_addr + VAR_5->sh_size);
 VAR_5 = FUNC_2(VAR_2, VAR_3, "__lwsync_fixup");
 if (VAR_5 != ((void*)0))
  FUNC_1(VAR_0->cpu_features,
     (void *)VAR_5->sh_addr,
     (void *)VAR_5->sh_addr + VAR_5->sh_size);

 return 0;
}
