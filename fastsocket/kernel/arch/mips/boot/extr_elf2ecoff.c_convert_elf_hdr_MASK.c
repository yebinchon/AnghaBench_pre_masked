
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* e_shstrndx; void* e_shnum; void* e_shentsize; void* e_phnum; void* e_phentsize; void* e_ehsize; void* e_flags; void* e_shoff; void* e_phoff; void* e_entry; void* e_version; void* e_machine; void* e_type; } ;
typedef TYPE_1__ Elf32_Ehdr ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(Elf32_Ehdr * VAR_0)
{
 VAR_0->e_type = FUNC_0(VAR_0->e_type);
 VAR_0->e_machine = FUNC_0(VAR_0->e_machine);
 VAR_0->e_version = FUNC_1(VAR_0->e_version);
 VAR_0->e_entry = FUNC_1(VAR_0->e_entry);
 VAR_0->e_phoff = FUNC_1(VAR_0->e_phoff);
 VAR_0->e_shoff = FUNC_1(VAR_0->e_shoff);
 VAR_0->e_flags = FUNC_1(VAR_0->e_flags);
 VAR_0->e_ehsize = FUNC_0(VAR_0->e_ehsize);
 VAR_0->e_phentsize = FUNC_0(VAR_0->e_phentsize);
 VAR_0->e_phnum = FUNC_0(VAR_0->e_phnum);
 VAR_0->e_shentsize = FUNC_0(VAR_0->e_shentsize);
 VAR_0->e_shnum = FUNC_0(VAR_0->e_shnum);
 VAR_0->e_shstrndx = FUNC_0(VAR_0->e_shstrndx);
}
